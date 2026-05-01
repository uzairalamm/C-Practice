#include <iostream>  // include standard input/output stream
#include <ctime>     // include time/date utilities
#include <iomanip>   // include IO manipulators for formatting
#include <vector>    // include vector container
#include <fstream>   // include file handling
#include <limits>    // include numeric limits for cin.ignore
using namespace std; // use standard namespace to avoid std:: prefix

class Date
{
    int day = 1, month = 1, year = 1900; // store date values with defaults

    bool isLeapYear(int year) // check if year is leap year
    {
        return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0); // return leap year condition
    }

    int daysInMonth(int m, int y) // return number of days in given month/year
    {
        int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // days per month

        if (m == 2 && isLeapYear(y)) // if February in leap year
            return 29;               // February has 29 days

        return days[m - 1]; // return days for month 31, 30, etc.
    }

    int validateMonth(int m) // ensure month is valid
    {
        return (m >= 1 && m <= 12) ? m : 1; // return valid month or default 1
    }

    int validateDay(int d, int m, int y) // ensure day is valid for month/year
    {
        int maxDays = daysInMonth(m, y);         // get max days in month
        return (d >= 1 && d <= maxDays) ? d : 1; // return valid day or default 1
    }

    int validateYear(int y) // ensure year is valid
    {
        return (y >= 1900) ? y : 1900; // return valid year or default 1900
    }

public:
    Date() // default constructor
    {
        currentDateTime(); // initialize with current system date
    }

    Date(int d, int m, int y) { setDate(d, m, y); } // constructor with initial date

    void setDate(int d, int m, int y) // set date values
    {
        month = validateMonth(m);          // validate month
        year = validateYear(y);            // validate year
        day = validateDay(d, month, year); // validate day based on month/year
    }

    void currentDateTime() // set date to current system date
    {
        time_t timeInSecond = time(nullptr); // get current time in seconds since Jan 1, 1970
        tm *ltm = localtime(&timeInSecond);  // convert to local time structure

        day = ltm->tm_mday;         // set day 1-31 from tm structure
        month = ltm->tm_mon + 1;    // set month (tm_mon is 0-based) = 0-11, so add 1 to get 1-12
        year = ltm->tm_year + 1900; // set year 2026 - 1900 = 126 + 1900 = 2026
    }

    int getDay() const { return day; }     // return day
    int getMonth() const { return month; } // return month
    int getYear() const { return year; }   // return year

    void showDate() const // print date in dd-mm-yyyy format
    {
        cout << right << setfill('0') << setw(2) << day << "-" // print day with leading zeros
             << setw(2) << month << "-"                        // print month with leading zeros
             << setw(4) << year << setfill(' ');               // print year and restore fill char
    }
};

void printLine(char ch = '-', int width = 100) // print separator line
{
    for (int i = 0; i < width; i++) // loop width times
        cout << ch;                 // print character
    cout << endl;                   // new line after line
};

// base class Person to represent common attributes of people in the restaurant
class Person
{
protected:
    string personName = "Unknown"; // store person name
    string phone = "Unknown";      // store phone number

public:
    Person() {};                                  // default constructor
    Person(const string &name) { setName(name); } // constructor with name
    Person(const string &name, const string &phone)
    {
        setName(name);   // set name
        setPhone(phone); // set phone
    }

    bool setName(const string &name) // set person name if not empty
    {
        if (!name.empty())
        {
            personName = name; // store name
            return true;       // success
        }
        return false; // fail on empty name
    }

    bool setPhone(const string &phone) // set phone if numeric and not empty
    {
        if (phone.empty())
            return false; // fail on empty

        for (char c : phone) // iterate characters
        {
            if (!isdigit(c))
            {
                return false; // fail if any non-digit
            }
        }

        this->phone = phone; // store phone
        return true;         // success
    }

    string getName() const { return personName; } // return name
    string getPhone() const { return phone; }     // return phone

    void displayBasicInfo() const // print basic info
    {
        cout << "Name:" << personName << "   | ";
        cout << "Phone:" << phone << endl;
    }
};

class Customer : public Person
{
    Date joinDate; // record join date

public:
    Customer() : Person() {};                                                   // default constructor
    Customer(const string &name) : Person(name) {};                             // constructor with name
    Customer(const string &name, const string &phone) : Person(name, phone) {}; // constructor with name and phone

    void displayCustomer() const // display customer info
    {
        printLine(); // separator
        cout << "Join Date: ";
        joinDate.showDate(); // show join date

        cout << "   | ";
        displayBasicInfo(); // show inherited person info
    }
};

class Staff : public Person
{
protected:
    double salary = 0.00; // staff salary

public:
    Staff() : Person() {};                                                                                     // default constructor
    Staff(const string &name) : Person(name) {};                                                               // constructor with name
    Staff(const string &name, const string &phone) : Person(name, phone) {};                                   // constructor with name and phone
    Staff(const string &name, const string &phone, double salary) : Person(name, phone) { setSalary(salary); } // constructor with salary

    bool setSalary(double salary) // set salary if positive
    {
        if (salary > 0)
        {
            this->salary = salary; // store salary
            return true;           // success
        }
        return false; // fail on non-positive salary
    }

    double getSalary() const { return salary; } // return salary

    void displayStaffInfo() const // print staff info
    {
        cout << "Name: " << getName() << "   | ";
        cout << "Phone No: " << getPhone() << "   | ";
        cout << "Salary: " << salary << endl;
    };
};

class Employee : public Staff
{
    string designation = "Unknown"; // employee designation

public:
    Employee() : Staff() {}                                                                                                                                   // default constructor
    Employee(const string &name, const string &phone, double salary) : Staff(name, phone, salary) {}                                                          // constructor
    Employee(const string &name, const string &phone, double salary, const string &designation) : Staff(name, phone, salary) { setDesignation(designation); } // constructor with designation

    bool setDesignation(const string &designation) // set designation if not empty
    {
        if (designation.empty())
            return false; // fail if empty

        this->designation = designation; // store designation
        return true;                     // success
    }

    string getDesignation() const { return designation; } // return designation

    void displayEmployee() const // print employee info
    {
        cout << "Designation: " << designation << "   | ";
        displayStaffInfo(); // print staff info
    }
};

class Manager : public Staff
{
public:
    Manager() : Staff() {}                                                                          // default constructor
    Manager(const string &name, const string &phone, double salary) : Staff(name, phone, salary) {} // constructor

    void displayManager() const // print manager info
    {
        cout << "Role: Manager   | ";
        displayStaffInfo();
    };
};

class Admin : public Staff
{
    string username = "Admin"; // admin username
    string password = "1234";  // admin password

public:
    Admin() : Staff() {}                                                   // default constructor
    Admin(const string &name) : Staff(name) {}                             // constructor with name
    Admin(const string &name, const string &phone) : Staff(name, phone) {} // constructor

    bool login(const string &username, const string &password) const // validate credentials
    {
        if (username == this->username && password == this->password)
            return true; // correct login
        return false;    // fail otherwise
    };

    void displayAdmin() const // print admin info
    {
        cout << "Role: Admin   | ";
        displayBasicInfo(); // print basic person info
    };
};

class Menu
{
    string dishName = "Unknown"; // dish name
    double dishPrice = 0.00;     // dish price
    int stock = 0;               // available stock

public:
    Menu() {}                                   // default constructor
    Menu(const string &name) { setName(name); } // constructor with name
    Menu(const string &name, double price)
    {
        setName(name);   // set name
        setPrice(price); // set price
    }

    Menu(const string &name, double price, int stock)
    {
        setName(name);   // set name
        setPrice(price); // set price
        setStock(stock); // set stock
    }

    bool setName(const string &name) // set dish name if not empty
    {
        if (!name.empty())
        {
            dishName = name; // store name
            return true;     // success
        }
        return false; // fail on empty name
    }

    bool setPrice(double price) // set dish price if positive
    {
        if (price > 0)
        {
            dishPrice = price; // store price
            return true;       // success
        }
        return false; // fail on invalid price
    }

    bool setStock(int stock) // set stock if non-negative
    {
        if (stock >= 0)
        {
            this->stock = stock; // store stock
            return true;         // success
        }
        return false; // fail on negative stock
    }

    string getName() const { return dishName; }   // return dish name
    double getPrice() const { return dishPrice; } // return dish price
    int getStock() const { return stock; }        // return stock

    void saveToFile(ofstream &fout) const // save dish to file
    {
        fout << dishName << "|" << dishPrice << "|" << stock << endl;
    }

    void loadFromFile(ifstream &fin) // load dish from file
    {
        getline(fin, dishName, '|');
        fin >> dishPrice;
        fin.ignore(1, '|');
        fin >> stock;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    bool reduceStock(int quantity) // decrease stock for an order
    {
        if (quantity > 0 && quantity <= stock)
        {
            stock -= quantity; // reduce stock
            return true;       // success
        }
        return false; // fail on invalid quantity or insufficient stock
    }

    bool increaseStock(int amount) // increase stock
    {
        if (amount > 0)
        {
            stock += amount; // add amount
            return true;     // success
        }
        return false; // fail on invalid amount
    }

    bool isAvailable() const // check if dish is in stock
    {
        if (stock > 0)
            return true;
        return false;
    }

    static void displayMenuTitle();      // declare menu title printer
    static void displayPurchasedTitle(); // declare purchased title printer

    void displayMenuMember() const // print menu item line
    {
        cout << left
             << setw(25) << dishName
             << setw(15) << fixed << setprecision(2) << dishPrice // 9.99 format
             << setw(10) << stock << endl;
    }
};

void Menu::displayMenuTitle() // print menu table header
{
    printLine(); // separator
    cout << left << setw(8) << "No."
         << setw(25) << "Dish Name"
         << setw(15) << "Price"
         << setw(10) << "Stock" << endl;
    printLine(); // separator
}

void Menu::displayPurchasedTitle() // print purchased item table header
{
    printLine();
    cout << left << setw(25) << "Name" << setw(15) << "price " << setw(15) << "Qunatity" << endl;
    printLine();
}

class Topping
{
    string toppingName = "Unknown"; // topping name
    double toppingPrice = 0.00;     // topping price

public:
    Topping() {}                                          // default constructor
    Topping(const string &name) { setToppingName(name); } // constructor with name
    Topping(const string &name, double price)
    {
        setToppingName(name);   // set name
        setToppingPrice(price); // set price
    }

    bool setToppingName(const string &name) // set topping name if not empty
    {
        if (!name.empty())
        {
            toppingName = name; // store name
            return true;        // success
        }
        return false; // fail on empty
    }

    bool setToppingPrice(double price) // set topping price if positive
    {
        if (price > 0)
        {
            toppingPrice = price; // store price
            return true;          // success
        }
        return false; // fail on invalid price
    }

    string getToppingName() const { return toppingName; }   // return topping name
    double getToppingPrice() const { return toppingPrice; } // return topping price

    void saveToFile(ofstream &fout) const // save topping to file
    {
        fout << toppingName << "|" << toppingPrice << endl;
    }

    void loadFromFile(ifstream &fin) // load topping from file
    {
        getline(fin, toppingName, '|');
        fin >> toppingPrice;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    static void displayToppingTitle(); // declare header function
    void displayTopping() const        // print topping row
    {
        cout << left << setw(30) << toppingName << setw(15) << fixed << setprecision(2) << toppingPrice << endl;
    }
};
void Topping::displayToppingTitle() // print topping table header
{
    printLine();
    cout << left << setw(8) << "No." << setw(30) << "Topping Name" << setw(15) << "Price" << endl;
    printLine();
}

class Cuisine
{
    string cuisineName = "Unknown"; // cuisine name
    vector<Menu> dishes;            // dishes in cuisine
    vector<Topping> toppings;       // toppings in cuisine

public:
    Cuisine() {}                                          // default constructor
    Cuisine(const string &name) { setCuisineName(name); } // constructor with name

    bool setCuisineName(const string &name) // set cuisine name if valid
    {
        if (!name.empty())
        {
            cuisineName = name; // store name
            return true;        // success
        }
        return false; // fail on empty
    }

    void addDish(const Menu &dish) { dishes.push_back(dish); }               // add dish
    void addTopping(const Topping &topping) { toppings.push_back(topping); } // add topping

    bool removeDish(int index) // remove dish by index
    {
        if (index >= 0 && index < dishes.size())
        {
            dishes.erase(dishes.begin() + index); // erase dish
            return true;                          // success
        }
        return false; // fail invalid index
    }

    bool removeTopping(int index) // remove topping by index
    {
        if (index >= 0 && index < toppings.size())
        {
            toppings.erase(toppings.begin() + index); // erase topping
            return true;                              // success
        }
        return false; // fail invalid index
    }

    void showDishes() const // display all dishes
    {
        Menu::displayMenuTitle(); // print header
        int index = 0;
        for (const auto &dish : dishes)
        {
            cout << left << setw(8) << ++index; // print item number
            dish.displayMenuMember();           // print dish details
        }
    };

    void showToppings() const // display all toppings
    {
        Topping::displayToppingTitle(); // print header
        int index = 0;
        for (const auto &topping : toppings)
        {
            cout << left << setw(8) << ++index; // print item number
            topping.displayTopping();           // print topping details
        }
    };

    int getDishCount() const { return dishes.size(); };     // return dish count
    int getToppingCount() const { return toppings.size(); } // return topping count

    Menu *findDishByIndex(int index) // find dish pointer by index
    {
        if (index >= 0 && index < dishes.size()) // user 3, findUserIndex(3-1 = 2) , if (2 >= 0 && 2 < 2) return &dishes[2] else return nullptr
        {
            return &dishes[index]; // return pointer
        }
        return nullptr; // invalid index
    };

    Topping *findToppingByIndex(int index) // find topping pointer by index
    {
        if (index >= 0 && index < toppings.size())
        {
            return &toppings[index]; // return pointer
        }
        return nullptr; // invalid index
    }

    string getCuisineName() const { return cuisineName; } // return cuisine name

    void saveToFile(ofstream &fout) const // save cuisine, dishes, and toppings
    {
        fout << cuisineName << endl;
        fout << dishes.size() << endl;
        for (const auto &dish : dishes)
            dish.saveToFile(fout);

        fout << toppings.size() << endl;
        for (const auto &topping : toppings)
            topping.saveToFile(fout);
    }

    void loadFromFile(ifstream &fin) // load cuisine, dishes, and toppings
    {
        dishes.clear();
        toppings.clear();

        getline(fin, cuisineName);

        int dishCount;
        fin >> dishCount;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        for (int i = 0; i < dishCount; i++)
        {
            Menu dish;
            dish.loadFromFile(fin);
            dishes.push_back(dish);
        }

        int toppingCount;
        fin >> toppingCount;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        for (int i = 0; i < toppingCount; i++)
        {
            Topping topping;
            topping.loadFromFile(fin);
            toppings.push_back(topping);
        }
    }

    void displayCuisineName() const // print cuisine name
    {
        cout << cuisineName << endl;
    }
};

class OrderItem
{
    Menu selectedDish;                // dish selected in order
    vector<Topping> selectedToppings; // toppings selected
    int quantity = 1;                 // quantity ordered
    double itemTotal = 0.0;           // total cost for item

public:
    OrderItem() {} // default constructor
    OrderItem(const Menu &dish, int quantity = 1)
    {
        setDish(dish);         // set dish
        setQuantity(quantity); // set quantity
    };

    void setDish(const Menu &dish) // set selected dish
    {
        selectedDish = dish;
    }

    bool setQuantity(int q) // set quantity if positive
    {
        if (q <= 0)
            return false; // invalid quantity
        quantity = q;     // store quantity
        return true;      // success
    }

    const Menu &getDish() const { return selectedDish; } // return dish
    int getQuantity() const { return quantity; }         // return quantity
    double getItemTotal() const { return itemTotal; }    // return item total

    void addTopping(const Topping &topping) { selectedToppings.push_back(topping); } // add topping
    int getToppingCount() const { return selectedToppings.size(); }                  // return topping count

    bool calculateItemTotal() // compute item total
    {
        if (quantity <= 0)
            return false;                               // invalid quantity
        itemTotal = selectedDish.getPrice() * quantity; // base cost

        for (const auto &topping : selectedToppings)
            itemTotal += topping.getToppingPrice() * quantity; // add toppings cost

        return true; // success
    }

    void displayItem() const // print order item details
    {
        cout << left << setw(18) << "Dish:" << selectedDish.getName() << endl;
        cout << left << setw(18) << "Quantity:" << quantity << endl;

        cout << left << setw(18) << "Toppings:";
        if (selectedToppings.empty())
        {
            cout << "None"; // no toppings selected
        }
        else
        {
            cout << endl;
            for (const auto &topping : selectedToppings)
            {
                cout << "   - " << topping.getToppingName()
                     << " (" << fixed << setprecision(2)
                     << topping.getToppingPrice() << ")\n"; // print each topping
            }
        }
        cout << endl;
        cout << left << setw(18) << "Item Total:" << fixed << setprecision(2) << itemTotal << endl;
    }
};

class Order
{
    string customerName = "Unknown"; // customer name for order
    vector<OrderItem> items;         // ordered items
    Date orderDate;                  // order date
    double totalPrice = 0.0;         // total order price
    bool completed = false;          // order status

public:
    Order() {}; // default constructor
    Order(const string &customerName)
    {
        setCustomerName(customerName); // set customer name
    }

    bool setCustomerName(const string &name) // set customer name if valid
    {
        if (name.empty())
            return false; // fail empty name

        customerName = name; // store name
        return true;         // success
    }

    string getCustomerName() const { return customerName; } // return customer name
    int getItemCount() const { return items.size(); }       // return item count
    double getTotalPrice() const { return totalPrice; }     // return total price
    bool isCompleted() const { return completed; }          // return completion status

    void addItem(const OrderItem &item) { items.push_back(item); } // add item to order

    bool calculateTotal() // compute order total
    {
        if (items.size() <= 0)
            return false; // no items

        for (const auto &item : items)
        {
            totalPrice += item.getItemTotal(); // accumulate item totals
        }
        return true; // success
    }

    void markCompleted() { completed = true; } // mark order as completed

    void displayOrderCompact() const // print compact order summary
    {
        cout << "Customer: " << customerName
             << " | Items: " << items.size()
             << " | Total: " << fixed << setprecision(2) << totalPrice
             << " | Status: " << (completed ? "Completed" : "Pending") << endl;
    }

    void displayOrder() const // print full order details
    {
        printLine('='); // separator
        cout << "Order Details\n";
        printLine('=');

        cout << left << setw(18) << "Customer Name:" << customerName << endl;
        cout << left << setw(18) << "Order Date:";
        orderDate.showDate(); // show order date
        cout << endl;

        cout << left << setw(18) << "Status:" << (completed ? "Completed" : "Pending") << endl;

        cout << "\nOrdered Items:\n";
        for (int i = 0; i < items.size(); i++)
        {
            printLine('-', 50); // item separator
            cout << "Item " << i + 1 << endl;
            items[i].displayItem(); // display each item
        }

        printLine('-', 50);
        cout << left << setw(18) << "Total Price:" << fixed << setprecision(2) << totalPrice << endl;
        printLine('-', 50);
    }
};

class Branch
{
    string branchName = "Unknown"; // branch name
    double branchSales = 0.00;     // branch sales amount

    Manager manager;         // branch manager
    bool hasManager = false; // manager assigned flag

    vector<Employee> employees;    // employees list
    vector<Customer> customers;    // customers list
    vector<Cuisine> cuisines;      // cuisines list
    vector<Order> pendingOrders;   // pending orders
    vector<Order> completedOrders; // completed orders

public:
    Branch() {}                                   // default constructor
    Branch(const string &name) { setName(name); } // constructor with name
    Branch(const string &name, double sales)
    {
        setName(name);   // set branch name
        setSales(sales); // set sales
    }

    bool setName(const string &name) // set branch name if valid
    {
        if (!name.empty())
        {
            branchName = name; // store name
            return true;       // success
        }
        return false; // fail empty name
    }

    bool setSales(double sales) // set branch sales if positive
    {
        if (sales >= 0)
        {
            branchSales = sales; // store sales
            return true;         // success
        }
        return false; // fail invalid sales
    }

    string getName() const { return branchName; }   // return branch name
    double getSales() const { return branchSales; } // return branch sales
    bool addSales(double amount)                    // add amount to sales
    {
        if (amount > 0)
        {
            branchSales += amount; // increment sales
            return true;           // success
        }
        return false; // fail invalid amount
    }

    void assignManager(const Manager &manager) // assign manager
    {
        this->manager = manager;
        hasManager = true; // mark assigned
    }

    bool removeManager() // remove manager assignment
    {
        if (!hasManager)
            return false; // no manager to remove

        hasManager = false; // clear flag
        return true;        // success
    }
    bool managerAssigned() const { return hasManager; } // check manager assigned
    Manager getManager() const { return manager; }      // return manager

    void addEmployee(const Employee &employee) { employees.push_back(employee); } // add employee
    bool removeEmployee(int index)                                                // remove employee by index
    {
        if (index < 0 || index >= employees.size())
            return false; // invalid index

        employees.erase(employees.begin() + index); // erase employee
        return true;                                // success
    }

    int getEmployeeCount() const { return employees.size(); } // return count
    void showEmployees() const                                // display all employees
    {
        for (const auto &employee : employees)
        {
            printLine();                // separator
            employee.displayEmployee(); // show employee info
        }
    }

    Employee *findEmployeeByIndex(int index) // find employee pointer by index
    {
        if (index < 0 || index >= employees.size())
            return nullptr; // invalid index

        return &employees[index]; // return pointer
    }

    void addCustomer(const Customer &customer) { customers.push_back(customer); } // add customer
    bool removeCustomer(int index)                                                // remove customer by index
    {
        if (index < 0 || index >= customers.size())
            return false; // invalid index

        customers.erase(customers.begin() + index); // erase customer
        return true;                                // success
    }

    int getCustomerCount() const { return customers.size(); } // return count

    void showCustomers() const // display all customers
    {
        for (const auto &customer : customers)
        {
            customer.displayCustomer(); // show customer info
        }
    }

    Customer *findCustomerByIndex(int index) // find customer pointer
    {
        if (index <= 0 || index > customers.size())
            return nullptr;       // invalid index
        return &customers[index]; // BUG: indexing mistake, should be index - 1
    }

    void addCuisine(const Cuisine &cuisine) { cuisines.push_back(cuisine); } // add cuisine
    bool removeCuisine(int index)                                            // remove cuisine by index
    {
        if (index < 0 || index >= cuisines.size())
            return false; // invalid index

        cuisines.erase(cuisines.begin() + index); // erase cuisine
        return true;                              // success
    }

    int getCuisineCount() const { return cuisines.size(); } // return count

    void showCuisines() const // display cuisines list
    {
        for (int i = 0; i < cuisines.size(); i++)
        {
            printLine('-', 50); // separator
            cout << i + 1 << ". ";
            cuisines[i].displayCuisineName(); // show cuisine name
        }
    }

    Cuisine *findCuisineByIndex(int index) // find cuisine pointer
    {
        if (index < 0 || index >= cuisines.size())
            return nullptr; // invalid index

        return &cuisines[index]; // return pointer
    }

    void addPendingOrder(const Order &order) { pendingOrders.push_back(order); } // add pending order
    bool completeOrder(int index)                                                // complete pending order
    {
        if (index < 0 || index >= pendingOrders.size())
            return false; // invalid index

        double orderTotal = pendingOrders[index].getTotalPrice();
        // get order total
        pendingOrders[index].markCompleted();               // mark order complete
        completedOrders.push_back(pendingOrders[index]);    // move to completed
        addSales(orderTotal);                               // add sales
        pendingOrders.erase(pendingOrders.begin() + index); // remove from pending
        return true;                                        // success
    }

    int getPendingOrderCount() const { return pendingOrders.size(); }     // return pending count
    int getCompletedOrderCount() const { return completedOrders.size(); } // return completed count

    void showPendingOrders() const // display pending orders
    {
        for (const auto &pendingOrder : pendingOrders)
        {
            pendingOrder.displayOrderCompact(); // compact display
        }
    }
    void showCompletedOrders() const // display completed orders
    {
        for (auto &completeOrder : completedOrders)
        {
            completeOrder.displayOrderCompact(); // compact display
        }
    }

    void saveToFile(ofstream &fout) const // save full branch data
    {
        fout << "BRANCH" << endl;
        fout << branchName << endl;
        fout << branchSales << endl;

        fout << hasManager << endl;
        if (hasManager)
        {
            fout << manager.getName() << "|" << manager.getPhone() << "|" << manager.getSalary() << endl;
        }

        fout << employees.size() << endl;
        for (const auto &employee : employees)
        {
            fout << employee.getName() << "|" << employee.getPhone() << "|"
                 << employee.getSalary() << "|" << employee.getDesignation() << endl;
        }

        fout << customers.size() << endl;
        for (const auto &customer : customers)
        {
            fout << customer.getName() << "|" << customer.getPhone() << endl;
        }

        fout << cuisines.size() << endl;
        for (const auto &cuisine : cuisines)
        {
            cuisine.saveToFile(fout);
        }
    }

    bool loadFromFile(ifstream &fin) // load full branch data
    {
        string tag;
        getline(fin, tag);
        if (tag != "BRANCH")
            return false;

        employees.clear();
        customers.clear();
        cuisines.clear();
        pendingOrders.clear();
        completedOrders.clear();

        getline(fin, branchName);
        fin >> branchSales;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');

        fin >> hasManager;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (hasManager)
        {
            string name, phone;
            double salary;
            getline(fin, name, '|');
            getline(fin, phone, '|');
            fin >> salary;
            fin.ignore(numeric_limits<streamsize>::max(), '\n');
            manager = Manager(name, phone, salary);
        }

        int employeeCount;
        fin >> employeeCount;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        for (int i = 0; i < employeeCount; i++)
        {
            string name, phone, designation;
            double salary;
            getline(fin, name, '|');
            getline(fin, phone, '|');
            fin >> salary;
            fin.ignore(1, '|');
            getline(fin, designation);
            employees.push_back(Employee(name, phone, salary, designation));
        }

        int customerCount;
        fin >> customerCount;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        for (int i = 0; i < customerCount; i++)
        {
            string name, phone;
            getline(fin, name, '|');
            getline(fin, phone);
            customers.push_back(Customer(name, phone));
        }

        int cuisineCount;
        fin >> cuisineCount;
        fin.ignore(numeric_limits<streamsize>::max(), '\n');
        for (int i = 0; i < cuisineCount; i++)
        {
            Cuisine cuisine;
            cuisine.loadFromFile(fin);
            cuisines.push_back(cuisine);
        }

        return true;
    }

    void placeOrder(const Customer &customer) // interactive order placement
    {
        if (cuisines.empty())
        {
            cout << "No cuisines available in this branch.\n"; // no cuisines
            return;
        }

        Order order(customer.getName()); // create order
        bool addAnotherDish = true;      // loop flag

        while (addAnotherDish) // add dishes loop
        {
            cout << "\n========== Available Cuisines ==========\n";
            for (int i = 0; i < cuisines.size(); i++) // 5 cuisines, i = 0 to 4
            {
                cout << i + 1 << ". ";
                cuisines[i].displayCuisineName(); // list cuisines
            }

            int cuisineChoice;
            cout << "Select Cuisine Number: ";
            cin >> cuisineChoice; // choose cuisine

            Cuisine *selectedCuisine = findCuisineByIndex(cuisineChoice - 1); // find cuisine

            if (selectedCuisine == nullptr)
            {
                cout << "Invalid cuisine choice.\n"; // invalid selection
                continue;
            }

            cout << "\n========== Available Dishes ==========\n";
            selectedCuisine->showDishes(); // show dishes

            int dishChoice;
            cout << "Select Dish Number: ";
            cin >> dishChoice; // choose dish

            Menu *selectedDish = selectedCuisine->findDishByIndex(dishChoice - 1); // find dish

            if (selectedDish == nullptr)
            {
                cout << "Invalid dish choice.\n"; // invalid dish
                continue;                         // skip to next iteration
            }

            int quantity;
            cout << "Enter Quantity: ";
            cin >> quantity; // read quantity

            if (quantity <= 0)
            {
                cout << "Invalid quantity.\n"; // invalid quantity
                continue;
            }

            if (!selectedDish->reduceStock(quantity))
            {
                cout << "Not enough stock available.\n"; // not enough stock
                continue;
            }

            OrderItem item(*selectedDish, quantity); // create order item

            bool addMoreTopping;
            cout << "Do you want to add toppings? (1 for Yes, 0 for No): ";
            cin >> addMoreTopping; // ask topping choice

            while (addMoreTopping) // loop toppings
            {
                cout << "\n========== Available Toppings ==========\n";
                selectedCuisine->showToppings(); // show toppings

                int toppingChoice;
                cout << "Select Topping Number: ";
                cin >> toppingChoice; // choose topping

                Topping *selectedTopping = selectedCuisine->findToppingByIndex(toppingChoice - 1); // find topping

                if (selectedTopping != nullptr)
                {
                    item.addTopping(*selectedTopping); // add topping
                    cout << "Topping added.\n";
                }
                else
                {
                    cout << "Invalid topping choice.\n"; // invalid topping
                }

                cout << "Add another topping? (1 for Yes, 0 for No): ";
                cin >> addMoreTopping; // continue topping loop
            }

            item.calculateItemTotal(); // compute item total
            order.addItem(item);       // add item to order

            cout << "Do you want to add another dish? (1 for Yes, 0 for No): ";
            cin >> addAnotherDish; // continue order loop
        }

        if (order.getItemCount() == 0)
        {
            cout << "No items selected. Order cancelled.\n"; // cancel empty order
            return;
        }

        order.calculateTotal(); // compute order total
        addPendingOrder(order); // add order to pending
        cout << "\n========== Order Placed Successfully ==========\n";
        order.displayOrder(); // show order details
    }

    void displayBranchSummary() const // display branch summary
    {
        printLine('=');
        cout << "Branch Summary\n";
        printLine('=');

        cout << "Branch Name: " << branchName << endl;
        cout << "Sales: " << branchSales << endl;
        cout << "Employees: " << employees.size() << endl;
        cout << "Customers: " << customers.size() << endl;
        cout << "Cuisines: " << cuisines.size() << endl;
        cout << "Pending Orders: " << pendingOrders.size() << endl;
        cout << "Completed Orders: " << completedOrders.size() << endl;
    }
};

class Restaurant
{
    string restaurantName = "Unknown"; // restaurant name
    vector<Branch> branches;           // branch list

public:
    Restaurant();                                               // constructor declaration
    Restaurant(const string &name) { setRestaurantName(name); } // constructor with name

    bool setRestaurantName(const string &name) // set restaurant name if valid
    {
        if (name.empty())
            return false;      // fail empty name
        restaurantName = name; // store name
        return true;           // success
    }
    string getRestaurantName() const { return restaurantName; }; // return restaurant name

    void addBranch(const Branch &branch) { branches.push_back(branch); } // add branch
    bool removeBranch(int index)                                         // remove branch by index
    {
        if (index < 0 || index >= branches.size())
            return false; // invalid index

        branches.erase(branches.begin() + index); // erase branch
        return true;                              // success
    }
    int getBranchCount() const { return branches.size(); } // return branch count

    void showBranchesName() const // display branch names
    {
        string branchName;
        for (int i = 0; i < branches.size(); i++)
        {
            branchName = branches[i].getName();          // get branch name
            printLine('-', 60);                          // separator
            cout << i + 1 << ": " << branchName << endl; // print branch line
        }
    }

    void showAllBranches() const // display all branches with details
    {
        int totalCustomers = 0;
        string ManagerName;
        string branchName;
        double branchSales;

        for (int i = 0; i < branches.size(); i++)
        {
            ManagerName = branches[i].getManager().getName(); // get manager name
            branchName = branches[i].getName();               // get branch name
            branchSales = branches[i].getSales();             // get sales

            printLine('-', 60);
            cout << i + 1 << ": " << branchName;
            cout << "  | Sales: " << branchSales;
            cout << "  | Manager: " << (branches[i].managerAssigned() ? ManagerName : "No Manager Assigned") << endl; // show manager status
            totalCustomers += branches[i].getCustomerCount();                                                         // accumulate customers
        }
    }

    Branch *findBranchByIndex(int index) // find branch pointer by index
    {
        if (index < 0 || index >= branches.size())
            return nullptr;      // invalid index
        return &branches[index]; // return pointer
    }

    bool saveData(const string &fileName = "restaurant_data.csv") const; // save restaurant data
    bool loadData(const string &fileName = "restaurant_data.csv");       // load restaurant data

    void loadDefaultData() // populate default data
    {
        Branch b1("Main Branch", 0.0); // create default branch

        Cuisine italian("Italian");               // create Italian cuisine
        italian.addDish(Menu("Pizza", 1200, 10)); // add dish
        italian.addDish(Menu("Pasta", 900, 15));  // add dish

        italian.addTopping(Topping("Cheese", 150)); // add topping
        italian.addTopping(Topping("Sauce", 100));  // add topping

        Cuisine mexican("Mexican");                    // create Mexican cuisine
        mexican.addDish(Menu("Tacos", 600, 18));       // add dish
        mexican.addDish(Menu("Burritos", 1000, 12));   // add dish
        mexican.addDish(Menu("Enchiladas", 1100, 10)); // add dish

        mexican.addTopping(Topping("Salsa", 50));      // add topping
        mexican.addTopping(Topping("Guacamole", 70));  // add topping
        mexican.addTopping(Topping("Sour Cream", 60)); // add topping

        b1.addCuisine(italian); // add cuisine to branch
        b1.addCuisine(mexican); // add cuisine to branch

        b1.assignManager(Manager("Hamza", "03001234567", 50000));      // assign manager
        b1.addEmployee(Employee("Ali", "03001111111", 25000, "Chef")); // add employee
        b1.addCustomer(Customer("Ahmad"));                             // add customer

        addBranch(b1); // add branch to restaurant
    }

    void showRestaurantSummary() const // display restaurant summary
    {
        int totalEmployees = 0;
        int totalCustomers = 0;
        int totalPendingOrders = 0;
        int totalCompletedOrders = 0;
        double totalSales = 0.0;

        for (const auto &branch : branches)
        {
            totalEmployees += branch.getEmployeeCount();             // accumulate employees
            totalCustomers += branch.getCustomerCount();             // accumulate customers
            totalCompletedOrders += branch.getCompletedOrderCount(); // accumulate completed orders
            totalSales += branch.getSales();                         // accumulate sales
        }

        printLine('=');
        cout << "Restaurant Summary\n";
        printLine('=');

        cout << "Restaurant Name: " << restaurantName << endl;
        cout << "Total Branches: " << branches.size() << endl;
        cout << "Total Employees: " << totalEmployees << endl;
        cout << "Total Customers: " << totalCustomers << endl;
        cout << "Completed Orders: " << totalCompletedOrders << endl;
        cout << "Total Sales: " << fixed << setprecision(2) << totalSales << endl;
        cout << "Overall Cuisines Offered: " << endl;
        printLine('-', 60);
        branches[0].showCuisines(); // show cuisines of first branch
    }

    bool branchValidation() // check if any branch exists
    {
        if (branches.empty())
        {
            cout << "No branches available. Add a branch first.\n"; // no branches
            return false;                                           // invalid
        }
        return true; // valid
    }

    void addBranchFromInput() // input branch details and add
    {
        string branchName;
        double sales;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear input buffer
        cout << "Enter Branch Name: ";
        getline(cin, branchName); // read name

        cout << "Enter Branch Sales: ";
        cin >> sales; // read sales

        // Create a new branch object
        Branch newBranch(branchName, sales);

        if (!branches.empty()) // If there are already existing branches
        {
            // Take the first branch as reference
            // (we assume all cuisines are same across branches)
            Branch firstBranch = branches[0];
            int cuisineCount = firstBranch.getCuisineCount(); // get cuisine count from first branch

            for (int i = 0; i < cuisineCount; i++) // Loop through all cuisines of first branch
            {

                Cuisine *cuisine = firstBranch.findCuisineByIndex(i); // Get cuisine pointer by index

                if (cuisine != nullptr) // If cuisine exists (safety check)
                {
                    // Copy that cuisine into new branch
                    // This copies dishes + toppings inside it as well
                    newBranch.addCuisine(*cuisine);
                }
            }
        }

        // Finally add the new branch into restaurant
        addBranch(newBranch);
        cout << "Branch added successfully.\n";
    }

    void removeBranchFromInput() // remove branch chosen by user
    {
        int index;
        showAllBranches(); // show branches
        cout << "Enter Branch Index to Remove (starting from 1): ";
        cin >> index; // read index

        if (removeBranch(index - 1)) // remove branch
            cout << "Branch removed successfully.\n";
        else
            cout << "Invalid branch index.\n";
    }

    void assignManagerFromInput() // assign manager via user input
    {
        if (!branchValidation())
            return; // no branches

        showAllBranches(); // show branches
        int branchIndex;
        cout << "Enter Branch Number: ";
        cin >> branchIndex; // read branch number

        Branch *selectedBranch = findBranchByIndex(branchIndex - 1); // find branch
        if (selectedBranch == nullptr)
        {
            cout << "Invalid branch number.\n";
            return;
        }
        string name, phone;
        double salary;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer

        cout << "Enter Manager Name: ";
        getline(cin, name); // read name
        cout << "Enter Manager Phone: ";
        getline(cin, phone); // read phone
        cout << "Enter Manager Salary: ";
        cin >> salary; // read salary

        if (selectedBranch->managerAssigned())
        {
            cout << "Branch already has a manager. Remove the current manager first.\n"; // already assigned
            return;
        }
        else
        {
            selectedBranch->assignManager(Manager(name, phone, salary)); // assign manager
            cout << "Manager assigned successfully.\n";
        }
    }

    void removeManagerFromInput() // remove manager by input
    {
        if (!branchValidation())
            return; // no branches

        showAllBranches(); // show branches

        int branchIndex;
        cout << "Enter Branch Number: ";
        cin >> branchIndex; // read branch number

        Branch *selectedBranch = findBranchByIndex(branchIndex - 1); // find branch

        if (selectedBranch == nullptr)
        {
            cout << "Invalid branch number.\n";
            return;
        }

        if (selectedBranch->removeManager()) // remove manager
            cout << "Manager removed successfully.\n";
        else
            cout << "No manager assigned to this branch.\n";
    }

    void addCuisineFromInput() // input cuisine data and add to branches
    {

        string cuisineName;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
        cout << "Enter Cuisine Name: ";
        getline(cin, cuisineName); // read cuisine name

        Cuisine cuisine(cuisineName); // create cuisine

        int dishCount;
        cout << "How many dishes do you want to add? ";
        cin >> dishCount; // read dish count

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
        for (int i = 0; i < dishCount; i++)
        {
            string dishName;
            double price;
            int stock;

            cout << "\nDish " << i + 1 << " Name: ";
            getline(cin, dishName); // read dish name

            cout << "Price: ";
            cin >> price; // read price

            cout << "Stock: ";
            cin >> stock; // read stock

            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
            cuisine.addDish(Menu(dishName, price, stock));       // add dish
        }

        int toppingCount;
        cout << "\nHow many toppings do you want to add? ";
        cin >> toppingCount; // read topping count

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
        for (int i = 0; i < toppingCount; i++)
        {
            string toppingName;
            double toppingPrice;

            cout << "\nTopping " << i + 1 << " Name: ";
            getline(cin, toppingName); // read topping name

            cout << "Price: ";
            cin >> toppingPrice; // read topping price

            cin.ignore(numeric_limits<streamsize>::max(), '\n');    // clear buffer
            cuisine.addTopping(Topping(toppingName, toppingPrice)); // add topping
        }

        for (auto &branch : branches)
        {
            branch.addCuisine(cuisine); // add cuisine to each branch
        }
        cout << "Cuisine added successfully.\n";
    }

    void adminPortal();    // declare admin portal
    void managerPortal();  // declare manager portal
    void employeePortal(); // declare employee portal
    void customerPortal(); // declare customer portal
};

bool Restaurant::saveData(const string &fileName) const // save all restaurant data
{
    ofstream fout(fileName);
    if (!fout)
        return false;

    fout << restaurantName << endl;
    fout << branches.size() << endl;

    for (const auto &branch : branches)
    {
        branch.saveToFile(fout);
    }

    return true;
}

bool Restaurant::loadData(const string &fileName) // load all restaurant data
{
    ifstream fin(fileName);
    if (!fin)
        return false;

    branches.clear();
    getline(fin, restaurantName);

    int branchCount;
    fin >> branchCount;
    fin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < branchCount; i++)
    {
        Branch branch;
        if (branch.loadFromFile(fin))
            branches.push_back(branch);
    }

    return true;
}

void Restaurant::adminPortal() // admin interface
{
    Admin admin("System Admin", "0300040040");

    string username, password;
    cout << "\n========== Admin Login ==========\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer

    cout << "Enter Username: ";
    getline(cin, username); // read username

    cout << "Enter Password: ";
    getline(cin, password); // read password

    if (!admin.login(username, password))
    {
        cout << "Invalid admin credentials.\n"; // login failed
        return;
    }

    int choice;
    do
    {
        cout << "\n========== Admin Portal ==========\n";

        cout << "1. Add Branch\n";
        cout << "2. Remove Branch\n";
        cout << "3. Show All Branches\n";
        cout << "4. Assign Manager to Branch\n";
        cout << "5. Remove Manager from Branch\n";
        cout << "6. Add Cuisine to Branch\n";
        cout << "7. Show Restaurant Summary\n";
        cout << "8. Show Admin Info\n";
        cout << "9. Back\n";
        cout << "Enter Choice: ";
        cin >> choice; // read choice

        switch (choice)
        {
        case 1:
            addBranchFromInput(); // add branch
            break;
        case 2:
            removeBranchFromInput(); // remove branch
            break;
        case 3:
            showAllBranches(); // list branches
            break;
        case 4:
            assignManagerFromInput(); // assign manager
            break;
        case 5:
            removeManagerFromInput(); // remove manager
            break;
        case 6:
            addCuisineFromInput(); // add cuisine
            break;
        case 7:
            showRestaurantSummary(); // show summary
            break;
        case 8:
            printLine('-', 60);
            admin.displayAdmin(); // show admin info
            printLine('-', 60);

            break;
        case 9:
            cout << "Returning...\n"; // exit
            return;
        default:
            cout << "Invalid choice.\n"; // invalid option
        }

    } while (choice != 9);
}

void Restaurant::managerPortal() // manager interface
{
    if (branches.empty())
    {
        cout << "No branches available.\n"; // no branches
        return;
    }

    int branchIndex;
    showBranchesName(); // show branches
    cout << "Select Branch Number: ";
    cin >> branchIndex; // read branch

    Branch *selectedBranch = findBranchByIndex(branchIndex - 1); // find branch

    if (selectedBranch == nullptr)
    {
        cout << "Invalid branch number.\n"; // invalid
        return;
    }

    cout << "\n========== Manager Portal ==========\n";
    cout << "Selected Branch: " << selectedBranch->getName() << endl;

    int choice;
    do
    {
        cout << "\n1. View Branch Summary\n";
        cout << "2. Add Employee\n";
        cout << "3. View Employees\n";
        cout << "4. Remove Employee\n";
        cout << "5. View Customers\n";
        cout << "6. View Cuisines\n";
        cout << "7. View Pending Orders\n";
        cout << "8. View Completed Orders\n";
        cout << "9. Show Admin Info\n";
        cout << "10. Back\n";
        cout << "Enter Choice: ";
        cin >> choice; // read manager choice

        switch (choice)
        {
        case 1:
            selectedBranch->displayBranchSummary(); // show summary
            break;

        case 2:
        {
            string name, phone, designation;
            double salary;

            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
            cout << "Enter Employee Name: ";
            getline(cin, name); // read employee name

            cout << "Enter Employee Phone: ";
            getline(cin, phone); // read phone

            cout << "Enter Employee Salary: ";
            cin >> salary; // read salary

            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
            cout << "Enter Employee Designation: ";
            getline(cin, designation); // read designation

            Employee employee(name, phone, salary, designation); // create employee
            selectedBranch->addEmployee(employee);               // add employee

            cout << "Employee added successfully.\n";
            break;
        }

        case 3:
            selectedBranch->showEmployees(); // show employees
            break;

        case 4:
            if (selectedBranch->getEmployeeCount() == 0)
            {
                cout << "No employees to remove.\n"; // none to remove
                break;
            }

            selectedBranch->showEmployees(); // list employees
            int empIndex;
            cout << "Enter Employee Number to Remove: ";
            cin >> empIndex; // read index

            if (selectedBranch->removeEmployee(empIndex - 1))
            {
                cout << "Employee removed successfully.\n";
            }
            else
            {
                cout << "Invalid employee number.\n"; // invalid index
            }
            break;

        case 5:
            selectedBranch->showCustomers(); // show customers
            break;

        case 6:
            selectedBranch->showCuisines(); // show cuisines
            break;

        case 7:
            if (selectedBranch->getPendingOrderCount() == 0)
            {
                cout << "No pending orders.\n"; // none pending
                break;
            }

            selectedBranch->showPendingOrders(); // show pending orders
            break;

        case 8:
            if (selectedBranch->getCompletedOrderCount() == 0)
            {
                cout << "No completed orders.\n"; // none completed
                break;
            }

            selectedBranch->showCompletedOrders(); // show completed
            break;

        case 9:
            printLine('-', 90);
            selectedBranch->getManager().displayManager(); // show manager info
            printLine('-', 90);

            break;

        case 10:
            cout << "Returning...\n"; // exit manager portal
            break;
        default:
            cout << "Invalid choice.\n"; // invalid option
        }

    } while (choice != 10);
}

void Restaurant::employeePortal() // employee interface
{
    if (branches.empty())
    {
        cout << "No branches available.\n"; // no branches
        return;
    }

    int branchIndex;
    cout << "\n========== Employee Portal ==========\n";
    showBranchesName(); // show branches
    cout << "Select Branch Number: ";
    cin >> branchIndex; // read branch index

    Branch *selectedBranch = findBranchByIndex(branchIndex - 1); // find branch

    if (selectedBranch == nullptr)
    {
        cout << "Invalid branch number.\n"; // invalid
        return;
    }

    int choice;
    do
    {
        cout << "\n========== Employee Portal ==========\n";
        cout << "Selected Branch: " << selectedBranch->getName() << endl;
        printLine('-', 60);

        cout << "1. View Pending Orders\n";
        cout << "2. Complete Order\n";
        cout << "3. Back\n";
        cout << "Enter Choice: ";
        cin >> choice; // read option

        switch (choice)
        {
        case 1:
            if (selectedBranch->getPendingOrderCount() == 0)
            {
                cout << "No pending orders.\n"; // none pending
                break;
            }

            selectedBranch->showPendingOrders(); // show pending orders
            break;
        case 2:
        {
            if (selectedBranch->getPendingOrderCount() == 0)
            {
                cout << "No pending orders.\n"; // none pending
                break;
            }

            selectedBranch->showPendingOrders(); // show pending
            int orderIndex;
            cout << "Enter Pending Order Number to Complete: ";
            cin >> orderIndex; // read order index

            if (selectedBranch->completeOrder(orderIndex - 1))
            {
                cout << "Order completed successfully.\n";
            }
            else
            {
                cout << "Invalid order number.\n"; // invalid index
            }
            break;
        }
        case 3:
            cout << "Returning...\n"; // exit portal
            return;
        default:
            cout << "Invalid choice.\n"; // invalid option
        }

    } while (choice != 3);
}

void Restaurant::customerPortal() // customer interface
{
    if (branches.empty())
    {
        cout << "No branches available.\n"; // no branches
        return;
    }

    string customerName, customerPhone;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
    cout << "\n========== Customer Details ==========\n";
    cout << "Enter Customer Name: ";
    getline(cin, customerName); // read customer name

    cout << "Enter Customer Phone: ";
    getline(cin, customerPhone); // read customer phone

    cout << "\n========== Available Branches ==========\n";
    showBranchesName(); // show branch list

    int branchIndex;
    cout << "Select Branch Number: ";
    cin >> branchIndex; // read selected branch

    Branch *selectedBranch = findBranchByIndex(branchIndex - 1); // find branch

    if (selectedBranch == nullptr)
    {
        cout << "Invalid branch number.\n"; // invalid
        return;
    }

    Customer customer(customerName, customerPhone); // create customer
    selectedBranch->addCustomer(customer);          // add to branch

    int choice;
    do
    {
        cout << "\n========== Customer Portal ==========\n";
        cout << "Customer Name: " << customer.getName() << endl;
        cout << "Selected Branch: " << selectedBranch->getName() << endl;
        cout << "1. Place Order\n";
        cout << "2. Back\n";
        cout << "Enter Choice: ";
        cin >> choice; // read option

        switch (choice)
        {
        case 1:
            selectedBranch->placeOrder(customer); // place order
            break;
        case 2:
            cout << "Returning...\n"; // exit portal
            return;
        default:
            cout << "Invalid choice.\n"; // invalid option
        }

    } while (choice != 2);
}

int main()
{
    Restaurant r("My Restaurant"); // create restaurant

    if (!r.loadData()) // load saved data; if file does not exist, create default data once
    {
        r.loadDefaultData();
        r.saveData();
    }

    int choice;
    do
    {
        cout << "\n========== Main Menu ==========\n";
        cout << "1. Admin\n";
        cout << "2. Manager\n";
        cout << "3. Employee\n";
        cout << "4. Customer\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice; // read main menu choice

        switch (choice)
        {
        case 1:
            r.adminPortal(); // admin portal
            break;

        case 2:
            r.managerPortal(); // manager portal
            break;

        case 3:
            r.employeePortal(); // employee portal
            break;

        case 4:
            r.customerPortal(); // customer portal
            break;

        case 5:
            r.saveData();                       // save all changes before exit
            cout << "Data saved. Exiting...\n"; // exit program
            break;

        default:
            cout << "Invalid choice.\n"; // invalid option
        }

    } while (choice != 5); // repeat until exit

    return 0; // end program
}