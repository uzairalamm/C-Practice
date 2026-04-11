#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
#include <limits>
#include <string>
using namespace std;

class Date
{
    int day, month, year;

    bool isLeapYear(int year)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            return true;
        else
            return false;
    }

    int daysInMonth(int m, int y)
    {
        int days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};

        if (m == 2 && isLeapYear(y))
            return 29;

        return days[m - 1];
    }

    int validateMonth(int m)
    {
        return (m >= 1 && m <= 12) ? m : 1;
    }

    int validateDay(int d, int m, int y)
    {
        int maxDays = daysInMonth(m, y);
        return (d >= 1 && d <= maxDays) ? d : 1;
    }

    int validateYear(int y)
    {
        return (y >= 1900) ? y : 1900;
    }

    void setToToday()
    {
        time_t timeInSecond = time(nullptr);
        tm *ltm = localtime(&timeInSecond);

        day = ltm->tm_mday;
        month = ltm->tm_mon + 1;
        year = ltm->tm_year + 1900;
    }

public:
    Date()
    {
        setToToday();
    }

    Date(int d, int m, int y) { setDate(d, m, y); }

    void setDate(int d, int m, int y)
    {
        month = validateMonth(m);
        year = validateYear(y);
        day = validateDay(d, month, year);
    }

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    void showDate() const
    {
        cout << day << "/" << month << "/" << year;
    }
};

class Person
{
protected:
    string personName = "Unknown";

public:
    Person() {};
    Person(const string &name) { setName(name); }

    bool setName(const string &name)
    {
        if (!name.empty())
        {
            personName = name;
            return true;
        }
        return false;
    }

    string getName() const { return personName; }

    virtual void display() const
    {
        cout << "Name: " << personName << endl;
    }
};

class Customer : public Person
{
    Date joinDate;

public:
    Customer() {};
    Customer(const string &name) : Person(name) {};

    void displayInfo() const
    {
        display();
        cout << "Joining Date: ";
        joinDate.showDate();
        cout << endl;
    }
};

class Branch
{
    string branchName = "Unknown";
    double branchSales = 0;

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
        if (sales >= 0)
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

    void displayBranch() const
    {
        cout << "Branch Name: " << branchName << endl;
        cout << "Branch Sales: " << branchSales << endl;
    }
};

class Menu
{
    string dishName = "Unknown";
    double dishPrice = 0.00;
    int stock = 0;

public:
    Menu() {}
    Menu(const string &name) { setName(name); }
    Menu(const string &name, double price)
    {
        setName(name);
        setPrice(price);
    }

    Menu(const string &name, double price, int stock)
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
    int getStock() const { return stock; }

    bool reduceStock(int quantity)
    {
        if (stock > 0 && stock - quantity >= 0)
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
        cout << left << setw(25) << dishName << setw(15) << dishPrice << setw(15) << stock << endl;
    }
};

void Menu::displayMenuTitle()
{
    cout << "------------------------------------------------\n";
    cout << left << setw(25) << "Name" << setw(15) << "price" << setw(15) << "stock" << endl;
    cout << "------------------------------------------------\n";
}

void Menu::displayPurchasedTitle()
{
    cout << "------------------------------------------------\n";
    cout << left << setw(25) << "Name" << setw(15) << "price " << setw(15) << "Qunatity" << endl;
    cout << "------------------------------------------------\n";
}

class Topping
{
    string toppingName = "Unknown";
    double toppingPrice = 0.00;

public:
    Topping() {}
    Topping(const string &name) { setToppingName(name); }
    Topping(const string &name, double price)
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

    string getToppingName() const { return toppingName; }
    double getToppingPrice() const { return toppingPrice; }

    static void displayToppingTitle();
    void displayTopping() const
    {
        cout << left << setw(30) << toppingName << setw(30) << toppingPrice << endl;
    }
};

void Topping::displayToppingTitle()
{
    cout << "------------------------------------------------\n";
    cout << left << setw(30) << "Topping Name" << setw(30) << "Price" << endl;
    cout << "------------------------------------------------\n";
}

class Cuisine
{
    string cuisineName = "Unknown";
    vector<Menu> dishes;
    vector<Topping> toppings;

public:
    Cuisine() {}
    Cuisine(const string &name) { setCuisineName(name); }

    bool setCuisineName(const string &name)
    {
        if (!name.empty())
        {
            cuisineName = name;
            return true;
        }
        return false;
    }

    string getCuisineName() const
    {
        return cuisineName;
    }

    void addDish(const Menu &dish)
    {
        dishes.push_back(dish);
    }

    void addTopping(const Topping &topping)
    {
        toppings.push_back(topping);
    }

    void showDishes() const
    {
        Menu::displayMenuTitle();
        for (const auto &dish : dishes)
        {
            dish.displayMenuMember();
        }
    }

    void showToppings() const
    {
        Topping::displayToppingTitle();
        for (const auto &topping : toppings)
        {
            topping.displayTopping();
        }
    }

    int getDishCount() const { return static_cast<int>(dishes.size()); }
    int getToppingCount() const { return static_cast<int>(toppings.size()); }

    Menu *findDishByIndex(int index)
    {
        if (index >= 0 && index < static_cast<int>(dishes.size()))
        {
            return &dishes[index];
        }
        return nullptr;
    }

    Topping *findToppingByIndex(int index)
    {
        if (index >= 0 && index < static_cast<int>(toppings.size()))
        {
            return &toppings[index];
        }
        return nullptr;
    }

    void displayCusineDishes() const
    {
        cout << cuisineName << "=========================\n";
        cout << "--------------------------------------------------\n";
        cout << "------               Dishes                  -----\n";
        cout << "--------------------------------------------------\n";
        showDishes();

        cout << "--------------------------------------------------\n";
        cout << "-----               Toppins                  -----\n";
        cout << "--------------------------------------------------\n";
        showToppings();
    }
};

class Order
{
    string customerName = "Unknown";
    int branchIndex = -1;
    Menu selectedDish;
    vector<Topping> selectedToppings;
    Date orderDate;
    int quantity = 1;
    double totalPrice = 0.0;
    bool completed = false;

public:
    Order() {}

    Order(const Menu &dish, int q = 1)
        : selectedDish(dish), quantity(1), totalPrice(0.0), completed(false)
    {
        setQuantity(q);
    }

    Order(const string &customerName, int branchIndex, const Menu &dish, int q = 1)
        : customerName(customerName), branchIndex(branchIndex), selectedDish(dish), quantity(1), totalPrice(0.0), completed(false)
    {
        setQuantity(q);
    }

    bool setCustomerName(const string &name)
    {
        if (!name.empty())
        {
            customerName = name;
            return true;
        }
        return false;
    }

    bool setBranchIndex(int index)
    {
        if (index >= 0)
        {
            branchIndex = index;
            return true;
        }
        return false;
    }

    bool setDish(const Menu &dish)
    {
        selectedDish = dish;
        return true;
    }

    bool setQuantity(int q)
    {
        if (q > 0)
        {
            quantity = q;
            return true;
        }
        return false;
    }

    string getCustomerName() const
    {
        return customerName;
    }

    int getBranchIndex() const
    {
        return branchIndex;
    }

    const Menu &getDish() const
    {
        return selectedDish;
    }

    int getQuantity() const
    {
        return quantity;
    }

    double getTotalPrice() const
    {
        return totalPrice;
    }

    bool isCompleted() const
    {
        return completed;
    }

    void addTopping(const Topping &topping)
    {
        selectedToppings.push_back(topping);
    }

    int getToppingCount() const
    {
        return static_cast<int>(selectedToppings.size());
    }

    bool calculateTotal()
    {
        if (quantity <= 0)
            return false;

        totalPrice = 0.0;
        totalPrice += selectedDish.getPrice() * quantity;

        for (const auto &topping : selectedToppings)
        {
            totalPrice += topping.getToppingPrice() * quantity;
        }

        return true;
    }

    void markCompleted()
    {
        completed = true;
    }

    void showOrder() const
    {
        cout << "\n========== Order Details ==========\n";
        cout << "Customer Name: " << customerName << endl;
        cout << "Dish: " << selectedDish.getName() << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Order Date: ";
        orderDate.showDate();
        cout << endl;

        cout << "Toppings:\n";
        if (selectedToppings.empty())
        {
            cout << "No toppings added\n";
        }
        else
        {
            for (const auto &topping : selectedToppings)
            {
                cout << "- " << topping.getToppingName()
                     << " (" << topping.getToppingPrice() << ")\n";
            }
        }

        cout << "Total Price: " << totalPrice << endl;
        cout << "Status: " << (completed ? "Completed" : "Pending") << endl;
    }
};

class Employee : public Person
{
    string role = "Employee";

public:
    Employee() {}
    Employee(const string &name, const string &role) : Person(name)
    {
        setRole(role);
    }

    bool setRole(const string &r)
    {
        if (!r.empty())
        {
            role = r;
            return true;
        }
        return false;
    }

    string getRole() const
    {
        return role;
    }

    void display() const override
    {
        cout << "Name: " << personName << endl;
        cout << "Role: " << role << endl;
    }
};

class Admin : public Employee
{
public:
    Admin() : Employee("System Admin", "Admin") {}
    Admin(const string &name) : Employee(name, "Admin") {}

    bool login(const string &username, const string &password) const
    {
        if (username == "admin" && password == "1234")
            return true;
        return false;
    }
};

class RestaurantSystem
{
    vector<Branch> branches;
    vector<Customer> customers;
    vector<Cuisine> cuisines;
    vector<Order> pendingOrders;
    vector<Order> completedOrders;
    Admin admin;

    int inputInt()
    {
        int value;
        while (!(cin >> value))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Enter again: ";
        }
        return value;
    }

    string inputString()
    {
        string value;
        getline(cin >> ws, value);
        return value;
    }

public:
    RestaurantSystem()
    {
        loadDefaultData();
    }

    void line() const
    {
        cout << "\n===========================================================\n";
    }

    void loadDefaultData()
    {
        branches.push_back(Branch("Main Branch", 10000));
        branches.push_back(Branch("City Branch", 15000));

        customers.push_back(Customer("Ali"));
        customers.push_back(Customer("Ahmed"));

        Cuisine italian("Italian");
        italian.addDish(Menu("Pasta", 500, 15));
        italian.addDish(Menu("Pizza", 800, 10));
        italian.addTopping(Topping("Cheese", 100));
        italian.addTopping(Topping("Sauce", 50));

        Cuisine chinese("Chinese");
        chinese.addDish(Menu("Noodles", 450, 12));
        chinese.addDish(Menu("Fried Rice", 600, 8));
        chinese.addTopping(Topping("Chicken", 150));
        chinese.addTopping(Topping("Mayo", 70));

        cuisines.push_back(italian);
        cuisines.push_back(chinese);
    }

    bool adminLogin() const
    {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        return admin.login(username, password);
    }

    void addBranch()
    {
        string name;
        cout << "Enter Branch Name: ";
        name = inputString();
        branches.push_back(Branch(name, 0));
        cout << "Branch Added Successfully.\n";
    }

    void removeBranch()
    {
        listBranches();
        if (branches.empty())
            return;

        cout << "Enter branch number to remove: ";
        int choice = inputInt();

        if (choice >= 1 && choice <= static_cast<int>(branches.size()))
        {
            branches.erase(branches.begin() + (choice - 1));
            cout << "Branch Removed Successfully.\n";
        }
        else
        {
            cout << "Invalid Branch Number.\n";
        }
    }

    void listBranches() const
    {
        if (branches.empty())
        {
            cout << "No Branches Available.\n";
            return;
        }

        for (int i = 0; i < static_cast<int>(branches.size()); i++)
        {
            cout << "\nBranch No: " << i + 1 << endl;
            branches[i].displayBranch();
        }
    }

    void addCustomer()
    {
        string name;
        cout << "Enter Customer Name: ";
        name = inputString();

        customers.push_back(Customer(name));
        cout << "Customer Added Successfully.\n";
    }

    void removeCustomer()
    {
        listCustomers();
        if (customers.empty())
            return;

        cout << "Enter customer number to remove: ";
        int choice = inputInt();

        if (choice >= 1 && choice <= static_cast<int>(customers.size()))
        {
            customers.erase(customers.begin() + (choice - 1));
            cout << "Customer Removed Successfully.\n";
        }
        else
        {
            cout << "Invalid Customer Number.\n";
        }
    }

    void listCustomers() const
    {
        if (customers.empty())
        {
            cout << "No Customers Available.\n";
            return;
        }

        for (int i = 0; i < static_cast<int>(customers.size()); i++)
        {
            cout << "\nCustomer No: " << i + 1 << endl;
            customers[i].displayInfo();
        }
    }

    void listMenu() const
    {
        if (cuisines.empty())
        {
            cout << "No Cuisines Available.\n";
            return;
        }

        for (const auto &cuisine : cuisines)
        {
            cuisine.displayCusineDishes();
            cout << endl;
        }
    }

    void salesDashboard() const
    {
        cout << "\n========== Sales Dashboard ==========\n";
        listBranches();
    }

    void placeOrder()
    {
        if (customers.empty() || branches.empty() || cuisines.empty())
        {
            cout << "Required data is missing.\n";
            return;
        }

        cout << "\nSelect Customer:\n";
        for (int i = 0; i < static_cast<int>(customers.size()); i++)
        {
            cout << i + 1 << ". " << customers[i].getName() << endl;
        }
        cout << "Enter choice: ";
        int customerChoice = inputInt();

        if (customerChoice < 1 || customerChoice > static_cast<int>(customers.size()))
        {
            cout << "Invalid customer choice.\n";
            return;
        }

        cout << "\nSelect Branch:\n";
        for (int i = 0; i < static_cast<int>(branches.size()); i++)
        {
            cout << i + 1 << ". " << branches[i].getName() << endl;
        }
        cout << "Enter choice: ";
        int branchChoice = inputInt();

        if (branchChoice < 1 || branchChoice > static_cast<int>(branches.size()))
        {
            cout << "Invalid branch choice.\n";
            return;
        }

        cout << "\nSelect Cuisine:\n";
        for (int i = 0; i < static_cast<int>(cuisines.size()); i++)
        {
            cout << i + 1 << ". " << cuisines[i].getCuisineName() << endl;
        }
        cout << "Enter choice: ";
        int cuisineChoice = inputInt();

        if (cuisineChoice < 1 || cuisineChoice > static_cast<int>(cuisines.size()))
        {
            cout << "Invalid cuisine choice.\n";
            return;
        }

        Cuisine &selectedCuisine = cuisines[cuisineChoice - 1];

        cout << "\nAvailable Dishes:\n";
        selectedCuisine.showDishes();
        cout << "Select dish number: ";
        int dishChoice = inputInt();

        Menu *dish = selectedCuisine.findDishByIndex(dishChoice - 1);
        if (dish == nullptr)
        {
            cout << "Invalid dish selection.\n";
            return;
        }

        cout << "Enter quantity: ";
        int quantity = inputInt();

        if (quantity <= 0)
        {
            cout << "Invalid quantity.\n";
            return;
        }

        if (dish->getStock() < quantity)
        {
            cout << "Not enough stock available.\n";
            return;
        }

        Order order(customers[customerChoice - 1].getName(), branchChoice - 1, *dish, quantity);

        if (selectedCuisine.getToppingCount() > 0)
        {
            char moreTopping;
            do
            {
                cout << "\nAvailable Toppings:\n";
                selectedCuisine.showToppings();
                cout << "Select topping number (0 to stop): ";
                int toppingChoice = inputInt();

                if (toppingChoice == 0)
                    break;

                Topping *top = selectedCuisine.findToppingByIndex(toppingChoice - 1);
                if (top != nullptr)
                {
                    order.addTopping(*top);
                    cout << "Topping Added.\n";
                }
                else
                {
                    cout << "Invalid topping choice.\n";
                }

                cout << "Add more toppings? (y/n): ";
                cin >> moreTopping;
                moreTopping = tolower(moreTopping);

            } while (moreTopping == 'y');
        }

        order.calculateTotal();
        pendingOrders.push_back(order);

        cout << "\nOrder Placed Successfully.\n";
        order.showOrder();
    }

    void completeOrder()
    {
        if (pendingOrders.empty())
        {
            cout << "No Pending Orders Available.\n";
            return;
        }

        showPendingOrders();
        cout << "Enter pending order number to complete: ";
        int choice = inputInt();

        if (choice < 1 || choice > static_cast<int>(pendingOrders.size()))
        {
            cout << "Invalid order number.\n";
            return;
        }

        Order order = pendingOrders[choice - 1];

        int branchIdx = order.getBranchIndex();
        if (branchIdx >= 0 && branchIdx < static_cast<int>(branches.size()))
        {
            branches[branchIdx].addSales(order.getTotalPrice());
        }

        for (auto &cuisine : cuisines)
        {
            for (int i = 0; i < cuisine.getDishCount(); i++)
            {
                Menu *dish = cuisine.findDishByIndex(i);
                if (dish != nullptr && dish->getName() == order.getDish().getName())
                {
                    dish->reduceStock(order.getQuantity());
                    break;
                }
            }
        }

        order.markCompleted();
        completedOrders.push_back(order);
        pendingOrders.erase(pendingOrders.begin() + (choice - 1));

        cout << "Order Completed Successfully.\n";
    }

    void showPendingOrders() const
    {
        if (pendingOrders.empty())
        {
            cout << "No Pending Orders.\n";
            return;
        }

        for (int i = 0; i < static_cast<int>(pendingOrders.size()); i++)
        {
            cout << "\nPending Order No: " << i + 1 << endl;
            pendingOrders[i].showOrder();
        }
    }

    void showCompletedOrders() const
    {
        if (completedOrders.empty())
        {
            cout << "No Completed Orders.\n";
            return;
        }

        for (int i = 0; i < static_cast<int>(completedOrders.size()); i++)
        {
            cout << "\nCompleted Order No: " << i + 1 << endl;
            completedOrders[i].showOrder();
        }
    }

    void adminPortal()
    {
        if (!adminLogin())
        {
            cout << "Invalid Admin Credentials.\n";
            return;
        }

        int choice;
        do
        {
            line();
            cout << "Admin Portal\n";
            cout << "1. Add Branch\n";
            cout << "2. Remove Branch\n";
            cout << "3. List Branches\n";
            cout << "4. Add Customer\n";
            cout << "5. Remove Customer\n";
            cout << "6. List Customers\n";
            cout << "7. List Menu\n";
            cout << "8. Show Pending Orders\n";
            cout << "9. Show Completed Orders\n";
            cout << "10. Complete Order\n";
            cout << "11. Sales Dashboard\n";
            cout << "0. Back\n";
            cout << "Enter Choice: ";
            choice = inputInt();

            switch (choice)
            {
            case 1:
                addBranch();
                break;
            case 2:
                removeBranch();
                break;
            case 3:
                listBranches();
                break;
            case 4:
                addCustomer();
                break;
            case 5:
                removeCustomer();
                break;
            case 6:
                listCustomers();
                break;
            case 7:
                listMenu();
                break;
            case 8:
                showPendingOrders();
                break;
            case 9:
                showCompletedOrders();
                break;
            case 10:
                completeOrder();
                break;
            case 11:
                salesDashboard();
                break;
            case 0:
                cout << "Returning...\n";
                break;
            default:
                cout << "Invalid Choice.\n";
            }

        } while (choice != 0);
    }

    void managerPortal()
    {
        int choice;
        do
        {
            line();
            cout << "Manager Portal\n";
            cout << "1. List Branches\n";
            cout << "2. Sales Dashboard\n";
            cout << "3. Show Pending Orders\n";
            cout << "4. Show Completed Orders\n";
            cout << "5. Complete Order\n";
            cout << "0. Back\n";
            cout << "Enter Choice: ";
            choice = inputInt();

            switch (choice)
            {
            case 1:
                listBranches();
                break;
            case 2:
                salesDashboard();
                break;
            case 3:
                showPendingOrders();
                break;
            case 4:
                showCompletedOrders();
                break;
            case 5:
                completeOrder();
                break;
            case 0:
                cout << "Returning...\n";
                break;
            default:
                cout << "Invalid Choice.\n";
            }

        } while (choice != 0);
    }

    void employeePortal()
    {
        int choice;
        do
        {
            line();
            cout << "Employee Portal\n";
            cout << "1. List Menu\n";
            cout << "2. Show Pending Orders\n";
            cout << "3. Show Completed Orders\n";
            cout << "4. Complete Order\n";
            cout << "0. Back\n";
            cout << "Enter Choice: ";
            choice = inputInt();

            switch (choice)
            {
            case 1:
                listMenu();
                break;
            case 2:
                showPendingOrders();
                break;
            case 3:
                showCompletedOrders();
                break;
            case 4:
                completeOrder();
                break;
            case 0:
                cout << "Returning...\n";
                break;
            default:
                cout << "Invalid Choice.\n";
            }

        } while (choice != 0);
    }

    void customerPortal()
    {
        int choice;
        do
        {
            line();
            cout << "Customer Portal\n";
            cout << "1. Show Menu\n";
            cout << "2. Place Order\n";
            cout << "3. Show Pending Orders\n";
            cout << "0. Back\n";
            cout << "Enter Choice: ";
            choice = inputInt();

            switch (choice)
            {
            case 1:
                listMenu();
                break;
            case 2:
                placeOrder();
                break;
            case 3:
                showPendingOrders();
                break;
            case 0:
                cout << "Returning...\n";
                break;
            default:
                cout << "Invalid Choice.\n";
            }

        } while (choice != 0);
    }

    void run()
    {
        int choice;
        do
        {
            line();
            cout << "Restaurant Management System\n";
            cout << "1. Admin Portal\n";
            cout << "2. Manager Portal\n";
            cout << "3. Employee Portal\n";
            cout << "4. Customer Portal\n";
            cout << "0. Exit\n";
            cout << "Enter Choice: ";
            choice = inputInt();

            switch (choice)
            {
            case 1:
                adminPortal();
                break;
            case 2:
                managerPortal();
                break;
            case 3:
                employeePortal();
                break;
            case 4:
                customerPortal();
                break;
            case 0:
                cout << "Exiting System...\n";
                break;
            default:
                cout << "Invalid Choice.\n";
            }

        } while (choice != 0);
    }
};

int main()
{
    RestaurantSystem system;
    system.run();
}