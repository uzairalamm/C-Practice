#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <limits>

using namespace std;

// ==================== DATA STRUCTURES ====================

struct DishInfo
{
    string name;
    double price;
    int stock;
};

struct Branch
{
    string name;
    double sales;
};

struct Customer
{
    string name;
    string joinDate;
};

struct MenuItem
{
    string name;
    double price;
};

struct Order
{
    string datetime;
    string dish;
    vector<string> toppings;
    double price;
};

// ==================== GLOBAL DATA ====================

DishInfo italianMenu[] = {{"Pizza", 1200, 10}, {"Pasta", 900, 15}, {"Risotto", 1500, 8}};
DishInfo chineseMenu[] = {{"Dumplings", 700, 20}, {"Sweet and Sour", 800, 15}, {"Kung Pao Chicken", 500, 25}};
DishInfo mexicanMenu[] = {{"Tacos", 600, 18}, {"Burritos", 1000, 12}, {"Enchiladas", 1100, 10}};

vector<Branch> branches;
vector<Customer> customers;
vector<MenuItem> menuItems;
vector<Order> pendingOrders;
vector<Order> completedOrders;

// ==================== UTILITY FUNCTIONS ====================

string currentDateTime()
{
    time_t now = time(0);
    char buf[80];
    tm *ltm = localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", ltm);
    return string(buf);
}

void line()
{
    cout << "========================================\n";
}

// ==================== ADMIN PORTAL ====================

bool adminLogin()
{
    string username, password;
    cout << "\n--- Admin Login ---\nUsername: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, username);
    cout << "Password: ";
    getline(cin, password);
    if (username == "admin" && password == "1234")
    {
        cout << "Login Successful!\n";
        return true;
    }
    cout << "Invalid credentials.\n";
    return false;
}

void manageBranches()
{
    int choice;
    do
    {
        cout << "\n--- Manage Branches ---\n1. Add Branch\n2. Remove Branch\n3. List Branches\n4. Back\nChoice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (choice == 1)
        {
            Branch b;
            cout << "Enter branch name: ";
            getline(cin, b.name);
            cout << "Enter sales: ";
            cin >> b.sales;
            branches.push_back(b);
        }
        else if (choice == 2)
        {
            string name;
            cout << "Enter branch name to remove: ";
            getline(cin, name);

            auto it = remove_if(branches.begin(), branches.end(), [&](Branch &b)
                                { return b.name == name; });
            if (it != branches.end())
                branches.erase(it, branches.end());
        }
        else if (choice == 3)
        {
            cout << "\nBranches:\n";
            for (auto &b : branches)
                cout << "- " << b.name << " | Sales: $" << b.sales << endl;
        }
    } while (choice != 4);
}

void manageCustomers()
{
    int choice;
    do
    {
        cout << "\n--- Manage Customers ---\n1. Add Customer\n2. Remove Customer\n3. List Customers\n4. Back\nChoice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (choice == 1)
        {
            Customer c;
            cout << "Enter customer name: ";
            getline(cin, c.name);
            c.joinDate = currentDateTime();
            customers.push_back(c);
        }
        else if (choice == 2)
        {
            string name;
            cout << "Enter customer name to remove: ";
            getline(cin, name);
            auto it = remove_if(customers.begin(), customers.end(), [&](Customer &c)
                                { return c.name == name; });
            if (it != customers.end())
                customers.erase(it, customers.end());
        }
        else if (choice == 3)
        {
            cout << "\nCustomers:\n";
            for (auto &c : customers)
                cout << "- " << c.name << " | Joined: " << c.joinDate << endl;
        }
    } while (choice != 4);
}

void manageMenu()
{
    int choice;
    do
    {
        cout << "\n--- Manage Menu ---\n1. Add Dish\n2. Remove Dish\n3. List Menu\n4. Back\nChoice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (choice == 1)
        {
            MenuItem m;
            cout << "Enter dish name: ";
            getline(cin, m.name);
            cout << "Enter price: ";
            cin >> m.price;
            menuItems.push_back(m);
        }
        else if (choice == 2)
        {
            string name;
            cout << "Enter dish name to remove: ";
            getline(cin, name);
            auto it = remove_if(menuItems.begin(), menuItems.end(), [&](MenuItem &m)
                                { return m.name == name; });
            if (it != menuItems.end())
                menuItems.erase(it, menuItems.end());
        }
        else if (choice == 3)
        {
            cout << "\nMenu:\n";
            for (auto &m : menuItems)
                cout << "- " << m.name << " | $" << m.price << endl;
        }
    } while (choice != 4);
}

void salesDashboard()
{
    double totalSales = 0;
    for (auto &b : branches)
        totalSales += b.sales;
    line();
    cout << "Total Branches: " << branches.size() << endl;
    cout << "Total Customers: " << customers.size() << endl;
    cout << "Total Menu Items: " << menuItems.size() << endl;
    cout << "Total Sales: $" << fixed << setprecision(2) << totalSales << endl;
    line();
}

// ==================== MANAGER PORTAL ====================

void managerPortal()
{
    cout << "\n--- Manager Portal ---\n";
    line();
    cout << "Inventory Status:\n";
    for (auto &dish : italianMenu)
        cout << dish.name << " | Price: " << dish.price << " | Stock: " << dish.stock << endl;
    for (auto &dish : chineseMenu)
        cout << dish.name << " | Price: " << dish.price << " | Stock: " << dish.stock << endl;
    for (auto &dish : mexicanMenu)
        cout << dish.name << " | Price: " << dish.price << " | Stock: " << dish.stock << endl;
    line();
}

// ==================== EMPLOYEE PORTAL ====================

void employeePortal()
{
    cout << "\n--- Employee Portal ---\n";
    if (pendingOrders.empty())
    {
        cout << "No pending orders!\n";
        return;
    }
    int idx;
    for (size_t i = 0; i < pendingOrders.size(); i++)
    {
        cout << i + 1 << ". " << pendingOrders[i].dish << " | Toppings: ";
        for (auto &t : pendingOrders[i].toppings)
            cout << t << " ";
        cout << "| Price: " << pendingOrders[i].price << endl;
    }
    cout << "Select order number to complete (0 to exit): ";
    cin >> idx;
    if (idx > 0 && idx <= pendingOrders.size())
    {
        completedOrders.push_back(pendingOrders[idx - 1]);
        pendingOrders.erase(pendingOrders.begin() + idx - 1);
        cout << "Order completed!\n";
    }
}

// ==================== CUSTOMER PORTAL ====================
void customerPortal()
{
    vector<string> orderedDishes;
    vector<vector<string>> dishToppings;
    float totalBill = 0.0;
    bool orderMore = true;

    // Dishes per cuisine
    string italianDishes[] = {"Pizza", "Pasta", "Risotto"};
    string chineseDishes[] = {"Dumplings", "Sweet and Sour", "Kung Pao Chicken"};
    string mexicanDishes[] = {"Tacos", "Burritos", "Enchiladas"};

    // Toppings per cuisine
    string italianToppings[] = {"Tomato Sauce", "Mozzarella", "Basil"};
    string chineseToppings[] = {"Soy Sauce", "Ginger", "Garlic"};
    string mexicanToppings[] = {"Salsa", "Guacamole", "Sour Cream"};

    // Topping prices per cuisine
    double italianToppingPrices[] = {100, 150, 120};
    double chineseToppingPrices[] = {80, 70, 60};
    double mexicanToppingPrices[] = {50, 70, 60};

    while (orderMore)
    {
        int choice, dishChoice, toppingChoice;
        bool addTopping;
        vector<string> currentToppings;
        double dishPrice = 0.0;

        cout << "\nSelect Cuisine:\n1. Italian\n2. Chinese\n3. Mexican\nChoice: ";
        cin >> choice;

        string *dishes;
        string *toppings;
        DishInfo *menu;
        double *toppingPrices;

        switch (choice)
        {
        case 1:
            dishes = italianDishes;
            toppings = italianToppings;
            menu = italianMenu;
            toppingPrices = italianToppingPrices;
            break;
        case 2:
            dishes = chineseDishes;
            toppings = chineseToppings;
            menu = chineseMenu;
            toppingPrices = chineseToppingPrices;
            break;
        case 3:
            dishes = mexicanDishes;
            toppings = mexicanToppings;
            menu = mexicanMenu;
            toppingPrices = mexicanToppingPrices;
            break;
        default:
            cout << "Invalid choice.\n";
            continue;
        }

        // Show dishes
        cout << "Select Dish:\n";
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << ". " << dishes[i] << " | Price: " << menu[i].price << " | Stock: " << menu[i].stock << endl;
        }
        cout << "Choice (1-3): ";
        cin >> dishChoice;

        if (dishChoice < 1 || dishChoice > 3)
        {
            cout << "Invalid dish choice.\n";
            continue;
        }
        if (menu[dishChoice - 1].stock <= 0)
        {
            cout << "Sorry, this dish is out of stock.\n";
            continue;
        }

        // Add dish
        orderedDishes.push_back(dishes[dishChoice - 1]);
        dishPrice = menu[dishChoice - 1].price;
        menu[dishChoice - 1].stock--;

        // Toppings
        cout << "Add toppings? (1 Yes, 0 No): ";
        cin >> addTopping;
        while (addTopping)
        {
            cout << "Select Topping:\n";
            for (int i = 0; i < 3; i++)
                cout << i + 1 << ". " << toppings[i] << " | Price: " << toppingPrices[i] << endl;

            cout << "Choice (1-3): ";
            cin >> toppingChoice;

            if (toppingChoice >= 1 && toppingChoice <= 3)
            {
                currentToppings.push_back(toppings[toppingChoice - 1]);
                dishPrice += toppingPrices[toppingChoice - 1]; // Add topping price
            }
            else
            {
                cout << "Invalid topping choice.\n";
            }

            cout << "Add another topping? (1 Yes, 0 No): ";
            cin >> addTopping;
        }

        dishToppings.push_back(currentToppings);
        totalBill += dishPrice;

        // Add to pending orders
        pendingOrders.push_back({currentDateTime(), dishes[dishChoice - 1], currentToppings, dishPrice});

        cout << "Order another dish? (1 Yes, 0 No): ";
        cin >> orderMore;
    }

    // Final Summary
    cout << "\n--- Final Order Summary ---\n";
    for (size_t i = 0; i < orderedDishes.size(); i++)
    {
        cout << i + 1 << ". " << orderedDishes[i] << " | Toppings: ";
        for (auto &t : dishToppings[i])
            cout << t << " ";
        cout << " | Price: " << pendingOrders[i].price << endl;
    }
    cout << "Total Bill: " << totalBill << endl;
}

// ==================== MAIN FUNCTION ====================

int main()
{
    int role;
    cout << "Welcome to Restaurant System\n";
    cout << "1. Admin\n2. Manager\n3. Employee\n4. Customer\nSelect role: ";
    cin >> role;

    switch (role)
    {
    case 1:
        if (adminLogin())
        {
            int choice;
            do
            {
                cout << "\n--- Admin Menu ---\n1. Branches\n2. Customers\n3. Menu\n4. Sales Dashboard\n5. Logout\nChoice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    manageBranches();
                    break;
                case 2:
                    manageCustomers();
                    break;
                case 3:
                    manageMenu();
                    break;
                case 4:
                    salesDashboard();
                    break;
                }
            } while (choice != 5);
        }
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
    default:
        cout << "Invalid role selection.\n";
    }

    return 0;
}
