#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
#include <limits>
using namespace std;

// date class to manage date related operations
class Date
{
    int day = 1, month = 1, year = 1970; // default date is set to 1st Jan 1970

    bool isLeapYear(int year) // check if the year is leap year or not
    {
        return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0); // if leap year then return true otherwise false
    }

    int daysInMonth(int m, int y) // check how many days in a month of a specific year
    {
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // array to store number of days in each month

        if (m == 2 && isLeapYear(y)) // if month is February and year is leap year
            return 29;               // then return 29 days for February

        return days[m - 1]; // return the number of days for the given month (m-1 because array index starts from 0)
    }

    int validateMonth(int m) // validate month input
    {
        return (m >= 1 && m <= 12) ? m : 1; // if month is between 1 and 12 return month otherwise return default month 1
    }

    int validateDay(int d, int m, int y) // validate day input based on the month and year
    {
        int maxDays = daysInMonth(m, y);         // to get the maximum number of days in the given month and year
        return (d >= 1 && d <= maxDays) ? d : 1; // if day is between 1 and maxDays return day otherwise return default day 1
    }

    int validateYear(int y) // validate year input and return valid year (1970 or above), if invalid return default year 1970
    {
        return (y >= 1970) ? y : 1970;
    }

public:
    Date() // default constructor to set current date as default date
    {
        currentDateTime(); // set current date as default date when object is created using default constructor
    }

    Date(int d, int m, int y) { setDate(d, m, y); } // parameterized constructor to set date based on user input

    void setDate(int d, int m, int y) // set date based on user input after validating the input values
    {
        month = validateMonth(m);
        year = validateYear(y);
        day = validateDay(d, month, year); // validate day based on the month and year and set the date
    }

    void currentDateTime()
    {
        time_t timeInSecond = time(nullptr); // get current time in second since Jan1, 1970
        tm *ltm = localtime(&timeInSecond);  // convert time in seconds to local time structure
                                             //(tm structure contains various fields to represent date and time components)

        day = ltm->tm_mday;         // we get current day of the month (1-31) from tm structure
        month = ltm->tm_mon + 1;    // get current month (0-11) from tm structure and add 1 to get actual month (1-12)
        year = ltm->tm_year + 1900; // get Current Year from tm structure, as tm_year gives us the number of years since 1900
                                    // tm_year does this = current year - 1900
                                    // so we get how many years has passed since 1900
                                    // But here as we showing the current date so we add 1900 again to get actual year
    }

    int getDay() const { return day; }     // get day
    int getMonth() const { return month; } // get month
    int getYear() const { return year; }   // get year

    void showDate() const // display date in DD-MM-YYYY format with leading zeros for day and month if they are single digit
    {
        cout << right << setfill('0') << setw(2) << day << "-"
             << setw(2) << month << "-"
             << setw(4) << year << setfill(' ');
    }
};

void printLine(char ch = '-', int width = 100) // line function to print a line
{
    for (int i = 0; i < width; i++) // loop to print the line character 'ch' for the specified width
        cout << ch;
    cout << endl;
};

// Base class Person to store common attributes and functions for all types of people (Customer, Staff, Employee, Manager, Admin)
class Person
{
protected:
    string personName = "Unknown"; // default name is set to "Unknown"
    string phone = "Unknown";      //  default phone number is set to "Unknown"

public:
    Person() {};                                    // default constructor for Person class
    Person(const string &name) { setName(name); }   // parameterized constructor to set name based on user input
    Person(const string &name, const string &phone) // parameterized constructor to set name and phone based on user input
    {
        setName(name);   // set name using setName function with validation
        setPhone(phone); // set phone using setPhone function with validation
    }

    bool setName(const string &name) // using const reference to avoid unnecessary copying of string
    {
        if (!name.empty()) // if string is not empty then set the name and return true
        {
            personName = name;
            return true;
        }
        return false; // otherwise return false
    }

    bool setPhone(const string &phone) // to set phone number with validation
    {
        if (phone.empty()) // if phone number is empty then return false
            return false;

        for (char c : phone) // to ensure it contains only digits
        {
            if (!isdigit(c)) // if any character is not a digit then return false
            {
                return false;
            }
        }

        this->phone = phone; // otherwise set the phone number
        return true;         // and return true
    }

    string getName() const { return personName; } // get name
    string getPhone() const { return phone; }     // get phone number

    void displayBasicInfo() const // function to display basic information of a person
    {
        cout << "Name:" << personName << "   | ";
        cout << "Phone:" << phone << endl;
    }
};

// Derived class Customer to represent customers of the restaurant, inherits from Person class
class Customer : public Person
{
    int customerID; // to store unique customer ID for each customer
    Date joinDate;  // to store join date of customer
    static int nextCustomerID;

public:
    Customer() : customerID(nextCustomerID++) {};
    Customer(const string &name) : Person(name), customerID(nextCustomerID++) {};
    Customer(const string &name, const string &phone) : Person(name, phone), customerID(nextCustomerID++) {};

    int getCustomerID() const { return customerID; }

    void displayCustomer() const
    {
        printLine();
        cout << "Join Date: ";
        joinDate.showDate();

        cout << "   | Customer ID: " << customerID << "   | ";
        displayBasicInfo();
    }
};
int Customer::nextCustomerID = 1;

class Staff : public Person
{
protected:
    int staffID;
    double salary = 0.00;
    static int nextStaffID;

public:
    Staff() : staffID(nextStaffID++) {};
    Staff(const string &name) : Person(name), staffID(nextStaffID++) {};
    Staff(const string &name, const string &phone) : Person(name, phone), staffID(nextStaffID++) {};
    Staff(const string &name, const string &phone, double salary) : Person(name, phone), staffID(nextStaffID++) { setSalary(salary); }

    bool setSalary(double salary)
    {
        if (salary > 0)
        {
            this->salary = salary;
            return true;
        }
        return false;
    }

    int getStaffID() const { return staffID; }
    double getSalary() const { return salary; }

    void displayStaffInfo() const
    {
        cout << "ID: " << staffID << "   | ";
        cout << "Name: " << getName() << "   | ";
        cout << "Phone No: " << getPhone() << "   | ";
        cout << "Salary: " << salary << endl;
    };
};
int Staff::nextStaffID = 1;

class Employee : public Staff
{
    string designation = "Unknown";

public:
    Employee() : Staff() {}
    Employee(const string &name, const string &phone, double salary) : Staff(name, phone, salary) {}
    Employee(const string &name, const string &phone, double salary, const string &designation) : Staff(name, phone, salary) { setDesignation(designation); }

    bool setDesignation(const string &designation)
    {
        if (designation.empty())
            return false;

        this->designation = designation;
        return true;
    }

    void displayEmployee() const
    {
        cout << "Designation: " << designation << "   | ";
        displayStaffInfo();
    }
};

class Manager : public Staff
{
public:
    Manager() : Staff() {}
    Manager(const string &name, const string &phone, double salary) : Staff(name, phone, salary) {}

    void displayManager() const
    {
        displayStaffInfo();
    };
};

class Admin : public Staff
{
    string username = "Admin";
    string password = "1234";

public:
    Admin() : Staff() {}
    Admin(const string &name) : Staff(name) {}
    Admin(const string &name, const string &phone, double income) : Staff(name, phone, income) {}

    bool login(const string &username, const string &password) const
    {

        if (username == this->username && password == this->password)
            return true;
        return false;
    };
    void displayAdmin() const
    {
        cout << "Name: " << getName() << endl;
        cout << "Phone Number: " << getPhone() << endl;
        cout << "Income: " << getSalary() << endl;
    };
};

class Menu
{
    int dishID;
    string dishName = "Unknown";
    double dishPrice = 0.00;
    int stock = 0;

    static int nextDishID;

public:
    Menu() : dishID(nextDishID++) {}
    Menu(const string &name) : dishID(nextDishID++) { setName(name); }
    Menu(const string &name, double price) : dishID(nextDishID++)
    {
        setName(name);
        setPrice(price);
    }

    Menu(const string &name, double price, int stock) : dishID(nextDishID++)
    {
        setName(name);
        setPrice(price);
        setStock(stock);
    }

    bool setName(const string &name)
    {
        if (!name.empty())
        {
            dishName = name;
            return true;
        }
        return false;
    }

    bool setPrice(double price)
    {
        if (price > 0)
        {
            dishPrice = price;
            return true;
        }
        return false;
    }

    bool setStock(int stock)
    {
        if (stock >= 0)
        {
            this->stock = stock;
            return true;
        }
        return false;
    }

    string getName() const { return dishName; }
    double getPrice() const { return dishPrice; }
    int getDishID() const { return dishID; }
    int getStock() const { return stock; }

    bool reduceStock(int quantity)
    {
        if (quantity > 0 && stock >= quantity)
        {
            stock -= quantity;
            return true;
        }
        return false;
    }

    bool increaseStock(int amount)
    {
        if (amount > 0)
        {
            stock += amount;
            return true;
        }
        return false;
    }

    bool isAvailable() const
    {
        if (stock > 0)
            return true;
        return false;
    }

    static void displayMenuTitle();
    static void displayPurchasedTitle();

    void displayMenuMember() const
    {
        cout << left
             << setw(25) << dishName
             << setw(15) << fixed << setprecision(2) << dishPrice
             << setw(10) << stock << endl;
    }
};

int Menu::nextDishID = 1;
void Menu::displayMenuTitle()
{
    printLine();
    cout << left
         << setw(8) << "No#"
         << setw(25) << "Dish Name"
         << setw(15) << "Price"
         << setw(10) << "Stock" << endl;
    printLine();
}

void Menu::displayPurchasedTitle()
{
    cout << "------------------------------------------------\n";
    cout << left << setw(8) << "No#" << setw(25) << "Name" << setw(15) << "price " << setw(15) << "Qunatity" << endl;
    cout << "------------------------------------------------\n";
}

class Topping
{
    int toppingID;
    string toppingName = "Unknown";
    double toppingPrice = 0.00;
    static int nextToppingID;

public:
    Topping() : toppingID(nextToppingID++) {}
    Topping(const string &name) : toppingID(nextToppingID++) { setToppingName(name); }
    Topping(const string &name, double price) : toppingID(nextToppingID++)
    {
        setToppingName(name);
        setToppingPrice(price);
    }

    bool setToppingName(const string &name)
    {
        if (!name.empty())
        {
            toppingName = name;
            return true;
        }
        return false;
    }

    bool setToppingPrice(double price)
    {
        if (price > 0)
        {
            toppingPrice = price;
            return true;
        }
        return false;
    }

    int getToppingID() const { return toppingID; }
    string getToppingName() const { return toppingName; }
    double getToppingPrice() const { return toppingPrice; }

    static void displayToppingTitle();
    void displayTopping() const
    {
        cout << left << setw(30) << toppingName
             << setw(15) << fixed << setprecision(2) << toppingPrice << endl;
    }
};
void Topping::displayToppingTitle()
{
    printLine();
    cout << left << setw(8) << "No#"
         << setw(30) << "Topping Name"
         << setw(15) << "Price" << endl;
    printLine();
}
int Topping::nextToppingID = 1;

class Cuisine
{
    int cuisineID;
    string cuisineName = "Unknown";
    vector<Menu> dishes;
    vector<Topping> toppings;

    static int nextCuisineID;

public:
    Cuisine() : cuisineID(nextCuisineID++) {}
    Cuisine(const string &name) : cuisineID(nextCuisineID++) { setCuisineName(name); }

    bool setCuisineName(const string &name)
    {
        if (!name.empty())
        {
            cuisineName = name;
            return true;
        }
        return false;
    }

    void addDish(const Menu &dish) { dishes.push_back(dish); }
    void addTopping(const Topping &topping) { toppings.push_back(topping); }

    bool removeDish(int index)
    {
        if (index >= 0 && index < dishes.size())
        {
            dishes.erase(dishes.begin() + index);
            return true;
        }
        return false;
    }
    bool removeTopping(int index)
    {
        if (index >= 0 && index < toppings.size())
        {
            toppings.erase(toppings.begin() + index);
            return true;
        }
        return false;
    }

    void showDishes() const
    {
        Menu::displayMenuTitle();
        int index = 0;
        for (const auto &dish : dishes)
        {
            cout << left << setw(8) << ++index;
            dish.displayMenuMember();
        }
    };

    void showToppings() const
    {
        Topping::displayToppingTitle();
        int index = 0;
        for (const auto &topping : toppings)
        {
            cout << left << setw(8) << ++index;
            topping.displayTopping();
        }
    };

    int getCuisineID() const { return cuisineID; }
    int getDishCount() const { return dishes.size(); };
    int getToppingCount() const { return toppings.size(); }

    Menu *findDishByIndex(int index)
    {
        if (index >= 0 && index < dishes.size())
        {
            return &dishes[index];
        }
        return nullptr;
    };

    Topping *findToppingByIndex(int index)
    {
        if (index >= 0 && index < toppings.size())
        {
            return &toppings[index];
        }
        return nullptr;
    }

    void displayCuisineName() const
    {
        cout << cuisineName << endl;
    }
};
int Cuisine::nextCuisineID = 1;

class OrderItem
{
    Menu selectedDish;
    vector<Topping> selectedToppings;
    int quantity = 1;
    double itemTotal = 0.0;

public:
    OrderItem() {}
    OrderItem(const Menu &dish, int quantity = 1)
    {
        setDish(dish);
        setQuantity(quantity);
    };

    bool setDish(const Menu &dish)
    {
        selectedDish = dish;
        return true;
    }
    bool setQuantity(int q)
    {
        if (q <= 0)
            return false;
        quantity = q;
        return true;
    }

    const Menu &getDish() const { return selectedDish; }
    int getQuantity() const { return quantity; }
    double getItemTotal() const { return itemTotal; }

    void addTopping(const Topping &topping) { selectedToppings.push_back(topping); }
    int getToppingCount() const { return selectedToppings.size(); }

    bool calculateItemTotal()
    {
        if (quantity <= 0)
            return false;
        itemTotal = selectedDish.getPrice() * quantity;

        for (const auto &topping : selectedToppings)
            itemTotal += topping.getToppingPrice() * quantity;

        return true;
    }

    void displayItem() const
    {
        cout << left << setw(18) << "Dish:" << selectedDish.getName() << endl;
        cout << left << setw(18) << "Quantity:" << quantity << endl;
        cout << left << setw(18) << "Item Total:" << fixed << setprecision(2) << itemTotal << endl;

        cout << left << setw(18) << "Toppings:";
        if (selectedToppings.empty())
        {
            cout << "None";
        }
        else
        {
            cout << endl;
            for (const auto &topping : selectedToppings)
            {
                cout << "   - " << topping.getToppingName()
                     << " (" << fixed << setprecision(2)
                     << topping.getToppingPrice() << ")\n";
            }
        }
        cout << endl;
    }
};

class Order
{
    int orderID;
    int customerID = 0;
    string customerName = "Unknown";
    vector<OrderItem> items;
    Date orderDate;
    double totalPrice = 0.0;
    bool completed = false;
    string handledByEmployee = "Not Assigned";

    static int nextOrderID;

public:
    Order() : orderID(nextOrderID++) {};
    Order(int customerID, const string &customerName) : orderID(nextOrderID++)
    {
        setCustomerID(customerID);
        setCustomerName(customerName);
    }

    bool setCustomerID(int id)
    {
        if (id < 0)
            return false;

        customerID = id;
        return true;
    }
    bool setCustomerName(const string &name)
    {
        if (name.empty())
            return false;

        customerName = name;
        return true;
    }
    bool setHandledByEmployee(const string &employeeName)
    {
        if (employeeName.empty())
            return false;

        handledByEmployee = employeeName;
        return true;
    }

    int getOrderID() const { return orderID; }
    int getCustomerID() const { return customerID; }
    string getCustomerName() const { return customerName; }
    int getItemCount() const { return items.size(); }
    double getTotalPrice() const { return totalPrice; }
    bool isCompleted() const { return completed; }
    string getHandledByEmployee() const { return handledByEmployee; }

    void addItem(const OrderItem &item) { items.push_back(item); }
    bool removeItem(int index)
    {
        if (index < 0 || index >= items.size())
            return false;

        items.erase(items.begin() + index);
        return true;
    }

    bool calculateTotal()
    {
        if (items.size() <= 0)
            return false;

        for (const auto &item : items)
        {
            totalPrice += item.getItemTotal();
        }
        return true;
    }
    void markCompleted() { completed = true; }

    void displayOrderCompact() const
    {
        cout << "Order ID: " << orderID
             << " | Customer: " << customerName
             << " | Items: " << items.size()
             << " | Total: " << fixed << setprecision(2) << totalPrice
             << " | Status: " << (completed ? "Completed" : "Pending") << endl;
    }

    void displayOrder() const
    {
        printLine('=');
        cout << "Order Details\n";
        printLine('=');

        cout << left << setw(18) << "Order ID:" << orderID << endl;
        cout << left << setw(18) << "Customer ID:" << customerID << endl;
        cout << left << setw(18) << "Customer Name:" << customerName << endl;
        cout << left << setw(18) << "Order Date:";
        orderDate.showDate();
        cout << endl;

        cout << left << setw(18) << "Status:" << (completed ? "Completed" : "Pending") << endl;
        cout << left << setw(18) << "Handled By:" << handledByEmployee << endl;
        cout << left << setw(18) << "Total Price:" << fixed << setprecision(2) << totalPrice << endl;

        cout << "\nOrdered Items:\n";
        for (int i = 0; i < items.size(); i++)
        {
            printLine('-', 50);
            cout << "Item " << i + 1 << endl;
            items[i].displayItem();
        }
    }
};
int Order::nextOrderID = 1;

class Branch
{
    string branchName = "Unknown";
    double branchSales = 0.0;

    Manager manager;
    bool hasManager = false;

    vector<Employee> employees;
    vector<Customer> customers;
    vector<Cuisine> cuisines;
    vector<Order> pendingOrders;
    vector<Order> completedOrders;

public:
    Branch() {}
    Branch(const string &name) { setName(name); }
    Branch(const string &name, double sales)
    {
        setName(name);
        setSales(sales);
    }

    bool setName(const string &name)
    {
        if (!name.empty())
        {
            branchName = name;
            return true;
        }
        return false;
    }

    bool setSales(double sales)
    {
        if (sales > 0)
        {
            branchSales = sales;
            return true;
        }
        return false;
    }

    string getName() const { return branchName; }
    double getSales() const { return branchSales; }
    bool addSales(double amount)
    {
        if (amount > 0)
        {
            branchSales += amount;
            return true;
        }
        return false;
    }

    // Manager functions
    void assignManager(const Manager &manager)
    {
        this->manager = manager;
        hasManager = true;
    }
    bool removeManager()
    {
        if (!hasManager)
            return false;

        hasManager = false;
        return true;
    }
    bool managerAssigned() const { return hasManager; }
    Manager getManager() const { return manager; }

    // Employee functions
    void addEmployee(const Employee &employee) { employees.push_back(employee); }
    bool removeEmployee(int index)
    {
        if (index < 0 || index >= employees.size())
            return false;

        employees.erase(employees.begin() + index);
        return true;
    }

    int getEmployeeCount() const { return employees.size(); }

    void showEmployees() const
    {
        for (const auto &employee : employees)
        {
            printLine();
            employee.displayEmployee();
        }
    }

    Employee *findEmployeeByIndex(int index)
    {
        if (index < 0 || index >= employees.size())
            return nullptr;

        return &employees[index];
    }

    // Customer functions
    void addCustomer(const Customer &customer) { customers.push_back(customer); }
    bool removeCustomer(int index)
    {
        if (index < 0 || index >= customers.size())
            return false;

        customers.erase(customers.begin() + index);
        return true;
    }
    int getCustomerCount() const { return customers.size(); }

    void showCustomers() const
    {
        for (const auto &customer : customers)
        {
            customer.displayCustomer();
        }
    }

    Customer *findCustomerByIndex(int index)
    {
        if (index <= 0 || index > customers.size())
            return nullptr;

        return &customers[index];
    }

    // Cuisine functions
    void addCuisine(const Cuisine &cuisine) { cuisines.push_back(cuisine); }
    bool removeCuisine(int index)
    {
        if (index < 0 || index >= cuisines.size())
            return false;

        cuisines.erase(cuisines.begin() + index);
        return true;
    }
    int getCuisineCount() const { return cuisines.size(); }

    void showCuisines() const
    {
        for (int i = 0; i < cuisines.size(); i++)
        {
            printLine('-', 50);
            cout << i + 1 << ". ";
            cuisines[i].displayCuisineName();
        }
    }

    Cuisine *findCuisineByIndex(int index)
    {
        if (index < 0 || index >= cuisines.size())
            return nullptr;

        return &cuisines[index];
    }

    // Order functions
    void addPendingOrder(const Order &order) { pendingOrders.push_back(order); }
    bool completeOrder(int index, const string &employeeName)
    {
        if (index < 0 || index >= pendingOrders.size())
            return false;

        pendingOrders[index].markCompleted();
        pendingOrders[index].setHandledByEmployee(employeeName);

        completedOrders.push_back(pendingOrders[index]);
        pendingOrders.erase(pendingOrders.begin() + index);
        return true;
    }

    int getPendingOrderCount() const { return pendingOrders.size(); }
    int getCompletedOrderCount() const { return completedOrders.size(); }

    void showPendingOrders() const
    {
        for (const auto &pendingOrder : pendingOrders)
        {
            pendingOrder.displayOrderCompact();
        }
    }
    void showCompletedOrders() const
    {
        for (auto &completeOrder : completedOrders)
        {
            completeOrder.displayOrderCompact();
        }
    }

    void placeOrder(const Customer &customer)
    {
        if (cuisines.empty())
        {
            cout << "No cuisines available in this branch.\n";
            return;
        }

        Order order(customer.getCustomerID(), customer.getName());

        bool addAnotherDish = true;

        while (addAnotherDish)
        {
            cout << "\n========== Available Cuisines ==========\n";
            for (int i = 0; i < cuisines.size(); i++)
            {
                cout << i + 1 << ". ";
                cuisines[i].displayCuisineName();
            }

            int cuisineChoice;
            cout << "Select Cuisine Number: ";
            cin >> cuisineChoice;

            Cuisine *selectedCuisine = findCuisineByIndex(cuisineChoice - 1);

            if (selectedCuisine == nullptr)
            {
                cout << "Invalid cuisine choice.\n";
                continue;
            }

            cout << "\n========== Available Dishes ==========\n";
            selectedCuisine->showDishes();

            int dishChoice;
            cout << "Select Dish Number: ";
            cin >> dishChoice;

            Menu *selectedDish = selectedCuisine->findDishByIndex(dishChoice - 1);

            if (selectedDish == nullptr)
            {
                cout << "Invalid dish choice.\n";
                continue;
            }

            int quantity;
            cout << "Enter Quantity: ";
            cin >> quantity;

            if (quantity <= 0)
            {
                cout << "Invalid quantity.\n";
                continue;
            }

            if (!selectedDish->reduceStock(quantity))
            {
                cout << "Not enough stock available.\n";
                continue;
            }

            OrderItem item(*selectedDish, quantity);

            bool addMoreTopping;
            cout << "Do you want to add toppings? (1 for Yes, 0 for No): ";
            cin >> addMoreTopping;

            while (addMoreTopping)
            {
                cout << "\n========== Available Toppings ==========\n";
                selectedCuisine->showToppings();

                int toppingChoice;
                cout << "Select Topping Number: ";
                cin >> toppingChoice;

                Topping *selectedTopping = selectedCuisine->findToppingByIndex(toppingChoice - 1);

                if (selectedTopping != nullptr)
                {
                    item.addTopping(*selectedTopping);
                    cout << "Topping added.\n";
                }
                else
                {
                    cout << "Invalid topping choice.\n";
                }

                cout << "Add another topping? (1 for Yes, 0 for No): ";
                cin >> addMoreTopping;
            }

            item.calculateItemTotal();
            order.addItem(item);

            cout << "Do you want to add another dish? (1 for Yes, 0 for No): ";
            cin >> addAnotherDish;
        }

        if (order.getItemCount() == 0)
        {
            cout << "No items selected. Order cancelled.\n";
            return;
        }

        order.calculateTotal();
        addPendingOrder(order);

        cout << "\n========== Order Placed Successfully ==========\n";
        order.displayOrder();
    }

    // Show Branch Summary
    void displayBranchSummary() const
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
    string restaurantName = "Unknown";
    vector<Branch> branches;

public:
    Restaurant();
    Restaurant(const string &name) { setRestaurantName(name); }

    bool setRestaurantName(const string &name)
    {
        if (name.empty())
            return false;

        restaurantName = name;
        return true;
    }
    string getRestaurantName() const { return restaurantName; };

    // Branch management functions
    void addBranch(const Branch &branch) { branches.push_back(branch); }
    bool removeBranch(int index)
    {
        if (index < 0 || index >= branches.size())
            return false;

        branches.erase(branches.begin() + index);
        return true;
    }
    int getBranchCount() const { return branches.size(); }

    void showBranchesName() const
    {
        string branchName;
        for (int i = 0; i < branches.size(); i++)
        {
            branchName = branches[i].getName();
            printLine();
            cout << i + 1 << ": " << branchName << endl;
        }
    }

    void showAllBranches() const
    {
        int totalCustomers = 0;
        string ManagerName;
        string branchName;
        double branchSales;

        for (int i = 0; i < branches.size(); i++)
        {
            ManagerName = branches[i].getManager().getName();
            branchName = branches[i].getName();
            branchSales = branches[i].getSales();

            printLine();
            cout << i + 1 << ": " << branchName;
            cout << "  | Sales: " << branchSales;
            cout << "  | Manager: " << (branches[i].managerAssigned() ? ManagerName : "No Manager Assigned") << endl;
            totalCustomers += branches[i].getCustomerCount();
        }
    }
    Branch *findBranchByIndex(int index)
    {
        if (index < 0 || index >= branches.size())
            return nullptr;

        return &branches[index];
    }

    // Default Data To test If Program is Working Properly
    void loadDefaultData()
    {
        Branch b1("Main Branch", 0.0);

        Cuisine italian("Italian");
        italian.addDish(Menu("Pizza", 1200, 10));
        italian.addDish(Menu("Pasta", 900, 15));

        italian.addTopping(Topping("Cheese", 150));
        italian.addTopping(Topping("Sauce", 100));

        Cuisine mexican("Mexican");
        mexican.addDish(Menu("Tacos", 600, 18));
        mexican.addDish(Menu("Burritos", 1000, 12));
        mexican.addDish(Menu("Enchiladas", 1100, 10));

        mexican.addTopping(Topping("Salsa", 50));
        mexican.addTopping(Topping("Guacamole", 70));
        mexican.addTopping(Topping("Sour Cream", 60));

        b1.addCuisine(italian);
        b1.addCuisine(mexican);

        b1.assignManager(Manager("Hamza", "03001234567", 50000));
        b1.addEmployee(Employee("Ali", "03001111111", 25000, "Chef"));
        b1.addCustomer(Customer("Ahmad"));

        addBranch(b1);
    }

    // Our Resturant Whole Summary
    void showRestaurantSummary() const
    {
        int totalEmployees = 0;
        int totalCustomers = 0;
        int totalPendingOrders = 0;
        int totalCompletedOrders = 0;
        double totalSales = 0.0;

        for (const auto &branch : branches)
        {
            totalEmployees += branch.getEmployeeCount();
            totalCustomers += branch.getCustomerCount();
            totalCompletedOrders += branch.getCompletedOrderCount();
            totalSales += branch.getSales();
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
        branches[0].showCuisines();
    }

    bool branchValidation()
    {
        if (branches.empty())
        {
            cout << "No branches available. Add a branch first.\n";
            return false;
        }
        return true;
    }

    void adminPortal();
    void managerPortal();
    void employeePortal();
    void customerPortal();
};

void Restaurant::adminPortal()
{
    Admin admin("System Admin");

    string username, password;
    cout << "\n========== Admin Login ==========\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Username: ";
    getline(cin, username);

    cout << "Enter Password: ";
    getline(cin, password);

    if (!admin.login(username, password))
    {
        cout << "Invalid admin credentials.\n";
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
        cout << "8. Back\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {

        // Add Branch
        case 1:
        {
            string branchName;
            double sales;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter Branch Name: ";
            getline(cin, branchName);

            cout << "Enter Branch Sales: ";
            cin >> sales;

            addBranch(Branch(branchName, sales));
            cout << "Branch added successfully.\n";
            break;
        }

        // Remove Branch
        case 2:
        {
            int index;
            showAllBranches();
            cout << "Enter Branch Index to Remove (starting from 1): ";
            cin >> index;

            if (removeBranch(index - 1))
                cout << "Branch removed successfully.\n";
            else
                cout << "Invalid branch index.\n";
            break;
        }

        // Show All Branches
        case 3:
            showAllBranches();
            break;

        // Assign Manager
        case 4:
        {
            if (!branchValidation())
                break;

            showAllBranches();
            int branchIndex;
            cout << "Enter Branch Number: ";
            cin >> branchIndex;

            Branch *selectedBranch = findBranchByIndex(branchIndex - 1);
            if (selectedBranch == nullptr)
            {
                cout << "Invalid branch number.\n";
                break;
            }
            string name, phone;
            double salary;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter Manager Name: ";
            getline(cin, name);
            cout << "Enter Manager Phone: ";
            getline(cin, phone);
            cout << "Enter Manager Salary: ";
            cin >> salary;

            if (selectedBranch->managerAssigned())
            {
                cout << "Branch already has a manager. Remove the current manager first.\n";
                break;
            }
            else
            {
                selectedBranch->assignManager(Manager(name, phone, salary));
                cout << "Manager assigned successfully.\n";
            }
            break;
        }

        // Remove Manager
        case 5:
        {
            if (!branchValidation())
                break;

            showAllBranches();

            int branchIndex;
            cout << "Enter Branch Number: ";
            cin >> branchIndex;

            Branch *selectedBranch = findBranchByIndex(branchIndex - 1);

            if (selectedBranch == nullptr)
            {
                cout << "Invalid branch number.\n";
                break;
            }

            if (selectedBranch->removeManager())
                cout << "Manager removed successfully.\n";
            else
                cout << "No manager assigned to this branch.\n";
            break;
        }

        // Add Cuisine
        case 6:
        {
            if (branches.empty())
            {
                cout << "No branches available. Add a branch first.\n";
                break;
            }

            showAllBranches();

            string cuisineName;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter Cuisine Name: ";
            getline(cin, cuisineName);

            Cuisine cuisine(cuisineName);

            int dishCount;
            cout << "How many dishes do you want to add? ";
            cin >> dishCount;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            for (int i = 0; i < dishCount; i++)
            {
                string dishName;
                double price;
                int stock;

                cout << "\nDish " << i + 1 << " Name: ";
                getline(cin, dishName);

                cout << "Price: ";
                cin >> price;

                cout << "Stock: ";
                cin >> stock;

                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cuisine.addDish(Menu(dishName, price, stock));
            }

            int toppingCount;
            cout << "\nHow many toppings do you want to add? ";
            cin >> toppingCount;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            for (int i = 0; i < toppingCount; i++)
            {
                string toppingName;
                double toppingPrice;

                cout << "\nTopping " << i + 1 << " Name: ";
                getline(cin, toppingName);

                cout << "Price: ";
                cin >> toppingPrice;

                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cuisine.addTopping(Topping(toppingName, toppingPrice));
            }

            for (auto &branch : branches)
            {
                branch.addCuisine(cuisine);
            }
            cout << "Cuisine added successfully.\n";
            break;
        }
        // Show Summary
        case 7:
        {
            showRestaurantSummary();
            break;
        }

        case 8:
            cout << "Returning...\n";
            return;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 8);
}

void Restaurant::managerPortal()
{
    if (branches.empty())
    {
        cout << "No branches available.\n";
        return;
    }

    int branchIndex;
    cout << "\n========== Manager Portal ==========\n";
    showAllBranches();
    cout << "Select Branch Number: ";
    cin >> branchIndex;

    Branch *selectedBranch = findBranchByIndex(branchIndex - 1);

    if (selectedBranch == nullptr)
    {
        cout << "Invalid branch number.\n";
        return;
    }

    int choice;
    do
    {
        cout << "\n========== Manager Portal ==========\n";
        cout << "Branch: " << selectedBranch->getName() << endl;
        cout << "1. View Branch Summary\n";
        cout << "2. Add Employee\n";
        cout << "3. View Employees\n";
        cout << "4. Remove Employee\n";
        cout << "5. View Customers\n";
        cout << "6. View Cuisines\n";
        cout << "7. View Pending Orders\n";
        cout << "8. View Completed Orders\n";
        cout << "9. Back\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            selectedBranch->displayBranchSummary();
            break;
            // Add Employee
        case 2:
        {

            string name, phone, designation;
            double salary;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter Employee Name: ";
            getline(cin, name);

            cout << "Enter Employee Phone: ";
            getline(cin, phone);

            cout << "Enter Employee Salary: ";
            cin >> salary;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter Employee Designation: ";
            getline(cin, designation);

            Employee employee(name, phone, salary, designation);
            selectedBranch->addEmployee(employee);

            cout << "Employee added successfully.\n";
            break;
        }

        case 3:
            selectedBranch->showEmployees();
            break;

        case 4:
        {
            // Implementation for removing employee
            if (selectedBranch->getEmployeeCount() == 0)
            {
                cout << "No employees to remove.\n";
                break;
            }

            selectedBranch->showEmployees();
            int empIndex;
            cout << "Enter Employee Number to Remove: ";
            cin >> empIndex;

            if (selectedBranch->removeEmployee(empIndex - 1))
            {
                cout << "Employee removed successfully.\n";
            }
            else
            {
                cout << "Invalid employee number.\n";
            }
        }

        case 5:
            selectedBranch->showCustomers();
            break;

        case 6:
            selectedBranch->showCuisines();
            break;

        case 7:
            selectedBranch->showPendingOrders();
            break;

        case 8:
            selectedBranch->showCompletedOrders();
            break;

        case 9:
            cout << "Returning...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 9);
}

void Restaurant::employeePortal()
{
    if (branches.empty())
    {
        cout << "No branches available.\n";
        return;
    }

    int branchIndex;
    cout << "\n========== Employee Portal ==========\n";
    showAllBranches();
    cout << "Select Branch Number: ";
    cin >> branchIndex;

    Branch *selectedBranch = findBranchByIndex(branchIndex - 1);

    if (selectedBranch == nullptr)
    {
        cout << "Invalid branch number.\n";
        return;
    }

    if (selectedBranch->getEmployeeCount() == 0)
    {
        cout << "No employees in this branch.\n";
        return;
    }

    cout << "\nEmployees in Branch:\n";
    selectedBranch->showEmployees();

    int employeeIndex;
    cout << "Select Employee Number: ";
    cin >> employeeIndex;

    Employee *selectedEmployee = selectedBranch->findEmployeeByIndex(employeeIndex - 1);

    if (selectedEmployee == nullptr)
    {
        cout << "Invalid employee number.\n";
        return;
    }

    int choice;
    do
    {
        cout << "\n========== Employee Portal ==========\n";
        cout << "Employee: " << selectedEmployee->getName() << endl;
        cout << "Branch: " << selectedBranch->getName() << endl;
        cout << "1. View Pending Orders\n";
        cout << "2. Complete Order\n";
        cout << "3. Back\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            selectedBranch->showPendingOrders();
            break;

        case 2:
        {
            if (selectedBranch->getPendingOrderCount() == 0)
            {
                cout << "No pending orders.\n";
                break;
            }

            selectedBranch->showPendingOrders();

            int orderIndex;
            cout << "Enter Pending Order Number to Complete: ";
            cin >> orderIndex;

            if (selectedBranch->completeOrder(orderIndex - 1, selectedEmployee->getName()))
            {
                cout << "Order completed successfully.\n";
            }
            else
            {
                cout << "Invalid order number.\n";
            }
            break;
        }

        case 3:
            cout << "Returning...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 3);
}

void Restaurant::customerPortal()
{
    if (branches.empty())
    {
        cout << "No branches available.\n";
        return;
    }

    string customerName, customerPhone;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n========== Customer Details ==========\n";
    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Customer Phone: ";
    getline(cin, customerPhone);

    cout << "\n========== Available Branches ==========\n";
    showBranchesName();

    int branchIndex;
    cout << "Select Branch Number: ";
    cin >> branchIndex;

    Branch *selectedBranch = findBranchByIndex(branchIndex - 1);

    if (selectedBranch == nullptr)
    {
        cout << "Invalid branch number.\n";
        return;
    }

    Customer customer(customerName, customerPhone);
    selectedBranch->addCustomer(customer);

    int choice;
    do
    {
        cout << "\n========== Customer Portal ==========\n";
        cout << "Customer Name: " << customer.getName() << endl;
        cout << "Selected Branch: " << selectedBranch->getName() << endl;
        cout << "1. Place Order\n";
        cout << "2. Back\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            selectedBranch->placeOrder(customer);
            break;

        case 2:
            cout << "Returning...\n";
            return;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 2);
}

int main()
{
    Restaurant r("My Restaurant");
    r.loadDefaultData();

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
        cin >> choice;

        switch (choice)
        {
        case 1:
            r.adminPortal();
            break;

        case 2:
            r.managerPortal();
            break;

        case 3:
            r.employeePortal();
            break;

        case 4:
            r.customerPortal();
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}