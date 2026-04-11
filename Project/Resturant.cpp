#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
#include <limits>
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
        time_t timeInSecond = time(nullptr); // get current time in second since Jan1, 1970
        tm *ltm = localtime(&timeInSecond);  // converts it into local broken-down time (tm structure)

        day = ltm->tm_mday;         // we get current day
        month = ltm->tm_mon + 1;    // get Current Month(month = 0-11, so by +1, month = 1-12)
        year = ltm->tm_year + 1900; // get Current Year
                                    // tm_year does this = current year - 1900
                                    // so we get how many years has passed since 1900
                                    // But here as we showing the current date so we add 1900 again to get actual year
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
        cout << day << "/" << month << "/" << year << endl;
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
    void display() const
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
    }
};

class Employee : public Person
{
    string employeeRole = "Unknown";

public:
    Employee() {}
    Employee(string name, string role) : Person(name) { setRole(role); }

    bool setRole(string role)
    {
        if (!role.empty())
        {
            employeeRole = role;
            return true;
        }
        return false;
    }

    string getEmployeeRole() const { return employeeRole; }

    void displayEmployeeData() const
    {
        display();
        cout << "Role: " << employeeRole << endl;
    }
};

class Admin : public Employee
{

public:
    Admin();
    Admin(string name) : Employee(name, "Admin") {};

    bool login(const string username, string password) const
    {
        if (username == "Admin" && password == "1234")
        {
            return true;
        }
        return false;
    };
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

    void addDish(const Menu &dish)
    {
        dishes.push_back(dish);
    };
    void addTopping(const Topping &topping)
    {
        toppings.push_back(topping);
    };

    void showDishes() const
    {
        Menu::displayMenuTitle();
        for (const auto &dish : dishes)
        {
            dish.displayMenuMember();
        }
    };

    void showToppings() const
    {
        Topping::displayToppingTitle();
        for (const auto &topping : toppings)
        {
            topping.displayTopping();
        }
    };

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
    };
};

class Order
{
    Menu selectedDish;
    vector<Topping> selectedToppings;
    Date orderDate;
    int quantity = 1;
    double totalPrice = 0.0;
    bool completed = false;

public:
    Order() {}

    Order(const Menu &dish, int q = 1)
        : selectedDish(dish)
    {
        setQuantity(q);
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
        return selectedToppings.size();
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
        cout << "Dish: " << selectedDish.getName() << endl;
        cout << "Quantity: " << quantity << endl;

        cout << "Order Date: ";
        orderDate.showDate();

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

class Restaurant
{
    string restaurantName = "Unknown";
    vector<Branch> branches;
    vector<Customer> customers;
    vector<Cuisine> cuisines;
    vector<Order> pendingOrders;
    vector<Order> completedOrders;

public:
    Restaurant() {}
    Restaurant(const string &name) { setRestaurantName(name); }

    bool setRestaurantName(const string &name)
    {
        if (!name.empty())
        {
            restaurantName = name;
            return true;
        }
        return false;
    }

    string getRestaurantName() const { return restaurantName; }

    void addBranch(const Branch &branch) { branches.push_back(branch); }
    void addCustomer(const Customer &customer) { customers.push_back(customer); }
    void addCuisine(const Cuisine &cuisine) { cuisines.push_back(cuisine); }

    bool getBranch(int index, Branch &branch) const
    {
        if (index >= 0 && index < branches.size())
        {
            branch = branches[index];
            return true;
        }
        return false;
    }

    bool getCustomer(int index, Customer &customer) const
    {
        if (index >= 0 && index < customers.size())
        {
            customer = customers[index];
            return true;
        }
        return false;
    }

    bool getCuisine(int index, Cuisine &cuisine) const
    {
        if (index >= 0 && index < cuisines.size())
        {
            cuisine = cuisines[index];
            return true;
        }
        return false;
    }

    bool removeBranch(int index)
    {
        if (index >= 0 && index < branches.size())
        {
            branches.erase(branches.begin() + index);
            return true;
        }
        return false;
    }

    bool removeCustomer(int index)
    {
        if (index >= 0 && index < customers.size())
        {
            customers.erase(customers.begin() + index);
            return true;
        }
        return false;
    }

    bool removeCuisine(int index)
    {
        if (index >= 0 && index < cuisines.size())
        {
            cuisines.erase(cuisines.begin() + index);
            return true;
        }
        return false;
    }

    void showAllBranches() const
    {
        for (const auto &branch : branches)
        {
            branch.displayBranch();
            cout << "------------------\n";
        }
    }

    void showAllCuisines() const
    {

        for (const auto &cuisine : cuisines)
        {
            cuisine.displayCusineDishes();
            cout << "------------------\n";
        }
    }

    void showAllCustomers() const
    {
        for (const auto &customer : customers)
        {
            customer.displayInfo();
            cout << "------------------\n";
        }
    }

    void addPendingOrder(const Order &pendingOrder) { pendingOrders.push_back(pendingOrder); }

    bool addCompleteOrder(int index)
    {
        if (index >= 0 && index < pendingOrders.size())
        {
            pendingOrders[index].markCompleted();               // You Mark that pending order complete
            Order completeOrder = pendingOrders[index];         // store in temp completeOrder
            completedOrders.push_back(completeOrder);           // store that temp completeOrder in CompleteOrders array
            pendingOrders.erase(pendingOrders.begin() + index); // Remove that Order From Pending Order

            return true;
        }
        return false;
    }

    void showPendingOrder() const
    {
        for (const auto &pendingOrder : pendingOrders) // show All Remainng Pending Orders
        {
            pendingOrder.showOrder();
            cout << "----------------------\n\n";
        }
    }

    void showCompleteOrder() const
    {
        for (const auto &completeOrder : completedOrders) // show All Completed Orders
        {
            completeOrder.showOrder();
            cout << "----------------------\n\n";
        }
    }
};

int main()
{

    // ===== 1. Create Cuisine =====
    Cuisine italian("Italian Cuisine");

    italian.addDish(Menu("Pasta", 500, 10));
    italian.addDish(Menu("Pizza", 800, 5));

    italian.addTopping(Topping("Cheese", 100));
    italian.addTopping(Topping("Sauce", 50));

    // ===== 2. Display Cuisine =====
    cout << "\n===== Cuisine Menu =====\n";
    italian.displayCusineDishes();

    // ===== 3. Select Dish =====
    Menu *selectedDish = italian.findDishByIndex(0); // Pasta

    if (selectedDish == nullptr)
    {
        cout << "Invalid dish selection!\n";
        return 0;
    }

    // ===== 4. Create Order =====
    Order order(*selectedDish, 2); // 2 Pasta

    // ===== 5. Select Toppings =====
    Topping *t1 = italian.findToppingByIndex(0); // Cheese
    Topping *t2 = italian.findToppingByIndex(1); // Sauce

    if (t1)
        order.addTopping(*t1);
    if (t2)
        order.addTopping(*t2);

    // ===== 6. Calculate Total =====
    order.calculateTotal();

    // ===== 7. Show Order =====
    order.showOrder();

    // ===== 8. Complete Order =====
    order.markCompleted();

    cout << "\nAfter completing order:\n";
    order.showOrder();

    // ===== 9. Branch Sales Test =====
    Branch branch("Main Branch", 10000);

    cout << "\nBefore Sales Update:\n";
    branch.displayBranch();

    branch.addSales(order.getTotalPrice());

    cout << "\nAfter Sales Update:\n";
    branch.displayBranch();

    return 0;
}
