#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
#include <limits>
using namespace std;

// class Date
// {
//     int day, month, year;

//     bool isLeapYear(int year)
//     {
//         if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//             return true;
//         else
//             return false;
//     }

//     int daysInMonth(int m, int y)
//     {
//         int days[] = {31, 28, 31, 30, 31, 30,
//                       31, 31, 30, 31, 30, 31};

//         if (m == 2 && isLeapYear(y))
//             return 29;

//         return days[m - 1];
//     }

//     int validateMonth(int m)
//     {
//         return (m >= 1 && m <= 12) ? m : 1;
//     }

//     int validateDay(int d, int m, int y)
//     {
//         int maxDays = daysInMonth(m, y);
//         return (d >= 1 && d <= maxDays) ? d : 1;
//     }

//     int validateYear(int y)
//     {
//         return (y >= 1900) ? y : 1900;
//     }

// public:
//     Date()
//     {
//         currentDateTime();
//     }

//     Date(int d, int m, int y) { setDate(d, m, y); }

//     void setDate(int d, int m, int y)
//     {
//         month = validateMonth(m);
//         year = validateYear(y);
//         day = validateDay(d, month, year);
//     }

//     void currentDateTime()
//     {
//         time_t timeInSecond = time(nullptr); // get current time in second since Jan1, 1970
//         tm *ltm = localtime(&timeInSecond);  // converts it into local broken-down time (tm structure)

//         day = ltm->tm_mday;         // we get current day
//         month = ltm->tm_mon + 1;    // get Current Month(month = 0-11, so by +1, month = 1-12)
//         year = ltm->tm_year + 1900; // get Current Year
//                                     // tm_year does this = current year - 1900
//                                     // so we get how many years has passed since 1900
//                                     // But here as we showing the current date so we add 1900 again to get actual year
//     }

//     int getDay() const { return day; }
//     int getMonth() const { return month; }
//     int getYear() const { return year; }
//     void showDate() const
//     {
//         cout << right << setfill('0') << setw(2) << day << "-"
//              << setw(2) << month << "-"
//              << setw(4) << year << setfill(' ');
//     }
// };
// void printLine(char ch = '-', int width = 70)
// {
//     for (int i = 0; i < width; i++)
//         cout << ch;
//     cout << endl;
// };
// void printTitle(const string &title)
// {
//     cout << "\n";
//     printLine('=');
//     cout << " " << title << endl;
//     printLine('=');
// }

// class Person
// {
// protected:
//     string personName = "Unknown";

// public:
//     Person() {};
//     Person(const string &name) { setName(name); }

//     bool setName(const string &name)
//     {
//         if (!name.empty())
//         {
//             personName = name;
//             return true;
//         }
//         return false;
//     }

//     string getName() const { return personName; }
//     void display() const
//     {
//         cout << left << setw(18) << "Name:" << personName << endl;
//     }
// };

// class Customer : public Person
// {
//     Date joinDate;

// public:
//     Customer() {};
//     Customer(const string &name) : Person(name) {};

//     void displayInfo() const
//     {
//         cout << left << setw(18) << "Customer Name:" << personName << endl;
//         cout << left << setw(18) << "Join Date:";
//         joinDate.showDate();
//         cout << endl;
//     }
// };

// class Employee : public Person
// {
//     string employeeRole = "Unknown";

// public:
//     Employee() {}
//     Employee(string name, string role) : Person(name) { setRole(role); }

//     bool setRole(string role)
//     {
//         if (!role.empty())
//         {
//             employeeRole = role;
//             return true;
//         }
//         return false;
//     }

//     string getEmployeeRole() const { return employeeRole; }

//     void displayEmployeeData() const
//     {
//         cout << left << setw(18) << "Employee Name:" << personName << endl;
//         cout << left << setw(18) << "Role:" << employeeRole << endl;
//     }
// };

// class Admin : public Employee
// {

// public:
//     Admin();
//     Admin(string name) : Employee(name, "Admin") {};

//     bool login(const string username, string password) const
//     {
//         if (username == "Admin" && password == "1234")
//         {
//             return true;
//         }
//         return false;
//     };
// };

// class Branch
// {
//     string branchName = "Unknown";
//     double branchSales = 0;

// public:
//     Branch() {}
//     Branch(const string &name) { setName(name); }
//     Branch(const string &name, double sales)
//     {
//         setName(name);
//         setSales(sales);
//     }

//     bool setName(const string &name)
//     {
//         if (!name.empty())
//         {
//             branchName = name;
//             return true;
//         }
//         return false;
//     }

//     bool setSales(double sales)
//     {
//         if (sales > 0)
//         {
//             branchSales = sales;
//             return true;
//         }
//         return false;
//     }

//     string getName() const { return branchName; }
//     double getSales() const { return branchSales; }
//     bool addSales(double amount)
//     {
//         if (amount > 0)
//         {
//             branchSales += amount;
//             return true;
//         }
//         return false;
//     }

//     void displayBranch() const
//     {
//         cout << "Branch Name: " << branchName << endl;
//         cout << "Branch Sales: " << branchSales << endl;
//     }
// };

// class Menu
// {
//     string dishName = "Unknown";
//     double dishPrice = 0.00;
//     int stock = 0;

// public:
//     Menu() {}
//     Menu(const string &name) { setName(name); }
//     Menu(const string &name, double price)
//     {
//         setName(name);
//         setPrice(price);
//     }

//     Menu(const string &name, double price, int stock)
//     {
//         setName(name);
//         setPrice(price);
//         setStock(stock);
//     }

//     bool setName(const string &name)
//     {
//         if (!name.empty())
//         {
//             dishName = name;
//             return true;
//         }
//         return false;
//     }

//     bool setPrice(double price)
//     {
//         if (price > 0)
//         {
//             dishPrice = price;
//             return true;
//         }
//         return false;
//     }

//     bool setStock(int stock)
//     {
//         if (stock >= 0)
//         {
//             this->stock = stock;
//             return true;
//         }
//         return false;
//     }

//     string getName() const { return dishName; }
//     double getPrice() const { return dishPrice; }
//     int getStock() const { return stock; }

//     bool reduceStock(int quantity)
//     {
//         if (quantity > 0 && stock >= quantity)
//         {
//             stock -= quantity;
//             return true;
//         }
//         return false;
//     }

//     bool increaseStock(int amount)
//     {
//         if (amount > 0)
//         {
//             stock += amount;
//             return true;
//         }
//         return false;
//     }

//     bool isAvailable() const
//     {
//         if (stock > 0)
//             return true;
//         return false;
//     }

//     static void displayMenuTitle();
//     static void displayPurchasedTitle();

//     void displayMenuMember() const
//     {
//         cout << left << setw(25) << dishName
//              << setw(15) << fixed << setprecision(2) << dishPrice
//              << setw(10) << stock << endl;
//     }
// };

// void Menu::displayMenuTitle()
// {
//     printLine();
//     cout << left
//          << setw(25) << "Dish Name"
//          << setw(15) << "Price"
//          << setw(10) << "Stock" << endl;
//     printLine();
// }

// void Menu::displayPurchasedTitle()
// {
//     cout << "------------------------------------------------\n";
//     cout << left << setw(25) << "Name" << setw(15) << "price " << setw(15) << "Qunatity" << endl;
//     cout << "------------------------------------------------\n";
// }

// class Topping
// {
//     string toppingName = "Unknown";
//     double toppingPrice = 0.00;

// public:
//     Topping() {}
//     Topping(const string &name) { setToppingName(name); }
//     Topping(const string &name, double price)
//     {
//         setToppingName(name);
//         setToppingPrice(price);
//     }

//     bool setToppingName(const string &name)
//     {
//         if (!name.empty())
//         {
//             toppingName = name;
//             return true;
//         }
//         return false;
//     }

//     bool setToppingPrice(double price)
//     {
//         if (price > 0)
//         {
//             toppingPrice = price;
//             return true;
//         }
//         return false;
//     }

//     string getToppingName() const { return toppingName; }
//     double getToppingPrice() const { return toppingPrice; }

//     static void displayToppingTitle();
//     void displayTopping() const
//     {
//         cout << left << setw(30) << toppingName
//              << setw(15) << fixed << setprecision(2) << toppingPrice << endl;
//     }
// };
// void Topping::displayToppingTitle()
// {
//     printLine();
//     cout << left
//          << setw(30) << "Topping Name"
//          << setw(15) << "Price" << endl;
//     printLine();
// }

// class Cuisine
// {
//     string cuisineName = "Unknown";
//     vector<Menu> dishes;
//     vector<Topping> toppings;

// public:
//     Cuisine() {}
//     Cuisine(const string &name) { setCuisineName(name); }

//     bool setCuisineName(const string &name)
//     {
//         if (!name.empty())
//         {
//             cuisineName = name;
//             return true;
//         }
//         return false;
//     }

//     void addDish(const Menu &dish)
//     {
//         dishes.push_back(dish);
//     };
//     void addTopping(const Topping &topping)
//     {
//         toppings.push_back(topping);
//     };

//     void showDishes() const
//     {
//         Menu::displayMenuTitle();
//         for (const auto &dish : dishes)
//         {
//             dish.displayMenuMember();
//         }
//     };

//     void showToppings() const
//     {
//         Topping::displayToppingTitle();
//         for (const auto &topping : toppings)
//         {
//             topping.displayTopping();
//         }
//     };

//     int getDishCount() const { return dishes.size(); };
//     int getToppingCount() const { return toppings.size(); }

//     Menu *findDishByIndex(int index)
//     {
//         if (index >= 0 && index < dishes.size())
//         {
//             return &dishes[index];
//         }
//         return nullptr;
//     };

//     Topping *findToppingByIndex(int index)
//     {
//         if (index >= 0 && index < toppings.size())
//         {
//             return &toppings[index];
//         }
//         return nullptr;
//     }

//     void displayCusine() const
//     {
//         cout << cuisineName << endl;
//     }
// };

// class Order
// {
//     Menu selectedDish;
//     vector<Topping> selectedToppings;
//     Date orderDate;
//     int quantity = 1;
//     double totalPrice = 0.0;
//     bool completed = false;

// public:
//     Order() {}

//     Order(const Menu &dish, int q = 1)
//         : selectedDish(dish)
//     {
//         setQuantity(q);
//     }

//     bool setDish(const Menu &dish)
//     {
//         selectedDish = dish;
//         return true;
//     }

//     bool setQuantity(int q)
//     {
//         if (q > 0)
//         {
//             quantity = q;
//             return true;
//         }
//         return false;
//     }

//     const Menu &getDish() const
//     {
//         return selectedDish;
//     }

//     int getQuantity() const
//     {
//         return quantity;
//     }

//     double getTotalPrice() const
//     {
//         return totalPrice;
//     }

//     bool isCompleted() const
//     {
//         return completed;
//     }

//     void addTopping(const Topping &topping)
//     {
//         selectedToppings.push_back(topping);
//     }

//     int getToppingCount() const
//     {
//         return selectedToppings.size();
//     }

//     bool calculateTotal()
//     {
//         if (quantity <= 0)
//             return false;

//         totalPrice = 0.0;

//         totalPrice += selectedDish.getPrice() * quantity;

//         for (const auto &topping : selectedToppings)
//         {
//             totalPrice += topping.getToppingPrice() * quantity;
//         }

//         return true;
//     }

//     void markCompleted()
//     {
//         completed = true;
//     }

//     void showOrder() const
//     {
//         printLine('=');
//         cout << "Order Details\n";
//         printLine('=');

//         cout << left << setw(18) << "Dish:" << selectedDish.getName() << endl;
//         cout << left << setw(18) << "Quantity:" << quantity << endl;
//         cout << left << setw(18) << "Order Date:";
//         orderDate.showDate();
//         cout << endl;

//         cout << left << setw(18) << "Status:" << (completed ? "Completed" : "Pending") << endl;
//         cout << left << setw(18) << "Total Price:" << fixed << setprecision(2) << totalPrice << endl;

//         cout << left << setw(18) << "Toppings:";
//         if (selectedToppings.empty())
//         {
//             cout << "None";
//         }
//         else
//         {
//             cout << endl;
//             for (int i = 0; i < selectedToppings.size(); i++)
//             {
//                 cout << "   - " << selectedToppings[i].getToppingName()
//                      << " (" << fixed << setprecision(2)
//                      << selectedToppings[i].getToppingPrice() << ")\n";
//             }
//         }
//         cout << endl;
//     }
// };

// class Restaurant
// {
//     string restaurantName = "Unknown";
//     vector<Branch> branches;
//     vector<Customer> customers;
//     vector<Cuisine> cuisines;
//     vector<Order> pendingOrders;
//     vector<Order> completedOrders;

// public:
//     Restaurant() {}
//     Restaurant(const string &name) { setRestaurantName(name); }

//     bool setRestaurantName(const string &name)
//     {
//         if (!name.empty())
//         {
//             restaurantName = name;
//             return true;
//         }
//         return false;
//     }

//     string getRestaurantName() const { return restaurantName; }

//     void addBranch(const Branch &branch) { branches.push_back(branch); }
//     void addCustomer(const Customer &customer) { customers.push_back(customer); }
//     void addCuisine(const Cuisine &cuisine) { cuisines.push_back(cuisine); }

//     bool getBranch(int index, Branch &branch) const
//     {
//         if (index >= 0 && index < branches.size())
//         {
//             branch = branches[index];
//             return true;
//         }
//         return false;
//     }

//     bool getCustomer(int index, Customer &customer) const
//     {
//         if (index >= 0 && index < customers.size())
//         {
//             customer = customers[index];
//             return true;
//         }
//         return false;
//     }

//     bool getCuisine(int index, Cuisine &cuisine) const
//     {
//         if (index >= 0 && index < cuisines.size())
//         {
//             cuisine = cuisines[index];
//             return true;
//         }
//         return false;
//     }

//     bool removeBranch(int index)
//     {
//         if (index >= 0 && index < branches.size())
//         {
//             branches.erase(branches.begin() + index);
//             return true;
//         }
//         return false;
//     }

//     bool removeCustomer(int index)
//     {
//         if (index >= 0 && index < customers.size())
//         {
//             customers.erase(customers.begin() + index);
//             return true;
//         }
//         return false;
//     }

//     bool removeCuisine(int index)
//     {
//         if (index >= 0 && index < cuisines.size())
//         {
//             cuisines.erase(cuisines.begin() + index);
//             return true;
//         }
//         return false;
//     }

//     void showAllBranches() const
//     {
//         for (const auto &branch : branches)
//         {
//             branch.displayBranch();
//             cout << "------------------\n";
//         }
//     }

//     void showAllCuisines() const
//     {
//         for (const auto &cuisine : cuisines)
//         {
//             cuisine.displayCusine();
//             cuisine.showDishes();
//             cout << endl;
//         }
//     }

//     void showAllCustomers() const
//     {
//         for (const auto &customer : customers)
//         {
//             customer.displayInfo();
//             cout << "------------------\n";
//         }
//     }

//     void addPendingOrder(const Order &pendingOrder) { pendingOrders.push_back(pendingOrder); }
//     void showPendingOrdersCompact() const
//     {
//         if (pendingOrders.empty())
//         {
//             cout << "No pending orders!\n";
//             return;
//         }

//         for (size_t i = 0; i < pendingOrders.size(); i++)
//         {
//             cout << i + 1 << ". " << pendingOrders[i].getDish().getName()
//                  << " | Quantity: " << pendingOrders[i].getQuantity()
//                  << " | Price: " << fixed << setprecision(2)
//                  << pendingOrders[i].getTotalPrice() << endl;
//         }
//     }

//     bool addCompleteOrder(int index)
//     {
//         if (index >= 0 && index < pendingOrders.size())
//         {
//             pendingOrders[index].markCompleted();               // You Mark that pending order complete
//             Order completeOrder = pendingOrders[index];         // store in temp completeOrder
//             completedOrders.push_back(completeOrder);           // store that temp completeOrder in CompleteOrders array
//             pendingOrders.erase(pendingOrders.begin() + index); // Remove that Order From Pending Order

//             return true;
//         }
//         return false;
//     }
//     void showCompleteOrder() const
//     {
//         for (const auto &completeOrder : completedOrders) // show All Completed Orders
//         {
//             completeOrder.showOrder();
//             cout << "----------------------\n\n";
//         }
//     }

//     int getBranchCount() const { return branches.size(); }
//     int getCustomerCount() const { return customers.size(); }
//     int getCuisineCount() const { return cuisines.size(); }
//     int getPendingOrderCount() const { return pendingOrders.size(); }
//     int getCompletedOrderCount() const { return completedOrders.size(); }

//     void loadDefaultData()
//     {
//         Cuisine italian("Italian");
//         italian.addDish(Menu("Pizza", 1200, 10));
//         italian.addDish(Menu("Pasta", 900, 15));
//         italian.addDish(Menu("Risotto", 1500, 8));

//         italian.addTopping(Topping("Tomato Sauce", 100));
//         italian.addTopping(Topping("Mozzarella", 150));
//         italian.addTopping(Topping("Basil", 120));

//         cuisines.push_back(italian);

//         Cuisine chinese("Chinese");
//         chinese.addDish(Menu("Dumplings", 700, 20));
//         chinese.addDish(Menu("Sweet and Sour", 800, 15));
//         chinese.addDish(Menu("Kung Pao Chicken", 500, 25));

//         chinese.addTopping(Topping("Soy Sauce", 80));
//         chinese.addTopping(Topping("Ginger", 70));
//         chinese.addTopping(Topping("Garlic", 60));

//         cuisines.push_back(chinese);

//         Cuisine mexican("Mexican");
//         mexican.addDish(Menu("Tacos", 600, 18));
//         mexican.addDish(Menu("Burritos", 1000, 12));
//         mexican.addDish(Menu("Enchiladas", 1100, 10));

//         mexican.addTopping(Topping("Salsa", 50));
//         mexican.addTopping(Topping("Guacamole", 70));
//         mexican.addTopping(Topping("Sour Cream", 60));

//         cuisines.push_back(mexican);
//     }

//     void placeOrder()
//     {
//         if (cuisines.empty())
//         {
//             cout << "No cuisines available.\n";
//             return;
//         }

//         int cuisineChoice, dishChoice, toppingChoice, quantity;
//         bool addMoreTopping;

//         cout << "\n========== Available Cuisines ==========\n";
//         for (int i = 0; i < cuisines.size(); i++)
//         {
//             cout << i + 1 << ". ";
//             Cuisine tempCuisine;
//             if (getCuisine(i, tempCuisine))
//                 tempCuisine.displayCusine();
//         }

//         cout << "\nSelect Cuisine Number: ";
//         cin >> cuisineChoice;

//         if (cuisineChoice < 1 || cuisineChoice > cuisines.size())
//         {
//             cout << "Invalid cuisine choice.\n";
//             return;
//         }

//         Cuisine &selectedCuisine = cuisines[cuisineChoice - 1];

//         cout << "\nSelected Cuisine Dishes:\n";
//         selectedCuisine.showDishes();

//         cout << "Select Dish Number: ";
//         cin >> dishChoice;

//         Menu *selectedDish = selectedCuisine.findDishByIndex(dishChoice - 1);

//         if (selectedDish == nullptr)
//         {
//             cout << "Invalid dish choice.\n";
//             return;
//         }

//         cout << "Enter Quantity: ";
//         cin >> quantity;

//         if (quantity <= 0)
//         {
//             cout << "Invalid quantity.\n";
//             return;
//         }

//         if (!selectedDish->reduceStock(quantity))
//         {
//             cout << "Not enough stock available.\n";
//             return;
//         }

//         Order order(*selectedDish, quantity);

//         cout << "Do you want to add toppings? (1 for Yes, 0 for No): ";
//         cin >> addMoreTopping;

//         while (addMoreTopping)
//         {
//             cout << "\nAvailable Toppings:\n";
//             selectedCuisine.showToppings();

//             cout << "Select Topping Number: ";
//             cin >> toppingChoice;

//             Topping *selectedTopping = selectedCuisine.findToppingByIndex(toppingChoice - 1);

//             if (selectedTopping != nullptr)
//             {
//                 order.addTopping(*selectedTopping);
//                 cout << "Topping added.\n";
//             }
//             else
//             {
//                 cout << "Invalid topping choice.\n";
//             }

//             cout << "Add another topping? (1 for Yes, 0 for No): ";
//             cin >> addMoreTopping;
//         }

//         order.calculateTotal();
//         addPendingOrder(order);

//         cout << "\nOrder placed successfully!\n";
//         order.showOrder();
//     }

//     void customerPortal()
//     {
//         int choice;

//         do
//         {
//             cout << "\n========== Customer Portal ==========\n";
//             cout << "1. Place Order\n";
//             cout << "2. View Pending Orders\n";
//             cout << "3. Back\n";
//             cout << "Enter Choice: ";
//             cin >> choice;

//             switch (choice)
//             {
//             case 1:
//                 placeOrder();
//                 break;

//             case 2:
//                 showPendingOrdersCompact();
//                 break;

//             case 3:
//                 cout << "Returning...\n";
//                 break;

//             default:
//                 cout << "Invalid choice.\n";
//             }

//         } while (choice != 3);
//     }

//     void employeePortal()
//     {
//         cout << "\n--- Employee Portal ---\n";

//         if (pendingOrders.empty())
//         {
//             cout << "No pending orders!\n";
//             return;
//         }

//         showPendingOrdersCompact();

//         int idx;
//         cout << "Select order number to complete (0 to exit): ";
//         cin >> idx;

//         if (idx > 0 && idx <= pendingOrders.size())
//         {
//             addCompleteOrder(idx - 1);
//             cout << "Order completed!\n";
//         }
//     }

//     void managerPortal()
//     {
//         int choice;

//         do
//         {
//             cout << "\n========== Manager Portal ==========\n";
//             cout << "1. View All Cuisines and Dishes\n";
//             cout << "2. View Pending Orders\n";
//             cout << "3. View Completed Orders\n";
//             cout << "4. Restaurant Summary\n";
//             cout << "5. Back\n";
//             cout << "Enter Choice: ";
//             cin >> choice;

//             switch (choice)
//             {
//             case 1:
//                 showAllCuisines();
//                 break;

//             case 2:
//                 showPendingOrdersCompact();
//                 break;

//             case 3:
//                 showCompleteOrder();
//                 break;

//             case 4:
//                 showRestaurantSummary();
//                 break;

//             case 5:
//                 cout << "Returning...\n";
//                 break;

//             default:
//                 cout << "Invalid choice.\n";
//             }

//         } while (choice != 5);
//     }

//     void adminPortal()
//     {
//         Admin admin("System Admin");

//         string username, password;
//         cout << "\n========== Admin Login ==========\n";
//         cout << "Enter Username: ";
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         getline(cin, username);

//         cout << "Enter Password: ";
//         getline(cin, password);

//         if (!admin.login(username, password))
//         {
//             cout << "Invalid admin credentials.\n";
//             return;
//         }

//         int choice;

//         do
//         {
//             cout << "\n========== Admin Portal ==========\n";
//             cout << "1. Add Branch\n";
//             cout << "2. Remove Branch\n";
//             cout << "3. Show All Branches\n";
//             cout << "4. Add Customer\n";
//             cout << "5. Remove Customer\n";
//             cout << "6. Show All Customers\n";
//             cout << "7. Restaurant Summary\n";
//             cout << "8. Back\n";
//             cout << "Enter Choice: ";
//             cin >> choice;

//             switch (choice)
//             {
//             case 1:
//             {
//                 string branchName;
//                 double sales;

//                 cin.ignore(numeric_limits<streamsize>::max(), '\n');
//                 cout << "Enter Branch Name: ";
//                 getline(cin, branchName);

//                 cout << "Enter Branch Sales: ";
//                 cin >> sales;

//                 addBranch(Branch(branchName, sales));
//                 cout << "Branch added successfully.\n";
//                 break;
//             }

//             case 2:
//             {
//                 int index;
//                 showAllBranches();
//                 cout << "Enter Branch Index to Remove (starting from 1): ";
//                 cin >> index;

//                 if (removeBranch(index - 1))
//                     cout << "Branch removed successfully.\n";
//                 else
//                     cout << "Invalid branch index.\n";
//                 break;
//             }

//             case 3:
//                 showAllBranches();
//                 break;

//             case 4:
//             {
//                 string customerName;
//                 cin.ignore(numeric_limits<streamsize>::max(), '\n');
//                 cout << "Enter Customer Name: ";
//                 getline(cin, customerName);

//                 addCustomer(Customer(customerName));
//                 cout << "Customer added successfully.\n";
//                 break;
//             }

//             case 5:
//             {
//                 int index;
//                 showAllCustomers();
//                 cout << "Enter Customer Index to Remove (starting from 1): ";
//                 cin >> index;

//                 if (removeCustomer(index - 1))
//                     cout << "Customer removed successfully.\n";
//                 else
//                     cout << "Invalid customer index.\n";
//                 break;
//             }

//             case 6:
//                 showAllCustomers();
//                 break;

//             case 7:
//                 showRestaurantSummary();
//                 break;

//             case 8:
//                 cout << "Returning...\n";
//                 break;

//             default:
//                 cout << "Invalid choice.\n";
//             }

//         } while (choice != 8);
//     }

//     void showRestaurantSummary() const
//     {
//         cout << "\n===== Restaurant Summary =====\n";
//         cout << "Restaurant Name: " << restaurantName << endl;
//         cout << "Total Branches: " << getBranchCount() << endl;
//         cout << "Total Customers: " << getCustomerCount() << endl;
//         cout << "Total Cuisines: " << getCuisineCount() << endl;
//         cout << "Pending Orders: " << getPendingOrderCount() << endl;
//         cout << "Completed Orders: " << getCompletedOrderCount() << endl;
//     }
// };

// int main()
// {
//     Restaurant r("My Restaurant");
//     r.loadDefaultData();

//     int choice;
//     do
//     {
//         cout << "\n========== Main Menu ==========\n";
//         cout << "1. Admin\n";
//         cout << "2. Manager\n";
//         cout << "3. Employee\n";
//         cout << "4. Customer\n";
//         cout << "5. Exit\n";
//         cout << "Enter Choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             r.adminPortal();
//             break;
//         case 2:
//             r.managerPortal();
//             break;
//         case 3:
//             r.employeePortal();
//             break;
//         case 4:
//             r.customerPortal();
//             break;
//         case 5:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice.\n";
//         }

//     } while (choice != 5);

//     return 0;
// }

int main()
{
    // time_t timeInSecond = time(nullptr); // get current time in seconds since Jan 1, 1970
    // tm *ltm = localtime(&timeInSecond);  // convert to local time structure

    // cout << "Time in Seconds since Jan 1, 1970: " << timeInSecond << "s" << endl;

    // cout << "Day: " << ltm->tm_mday << endl;         // set day 1-31 from tm structure
    // cout << "Month: " << ltm->tm_mon + 1 << endl;    // set month (tm_mon is 0-based) = 0-11, so add 1 to get 1-12
    // cout << "Year: " << ltm->tm_year + 1900 << endl; // set year 2026 - 1900 = 126 + 1900 = 2026
    // cout << "Hour: " << ltm->tm_hour << endl;        // set hour 0-23
    // cout << "Minute: " << ltm->tm_min << endl;       // set
    // cout << "Second: " << ltm->tm_sec << endl;       // set second 0-59

    // vector<int> numbers;
    // int n;
    // cout << "Enter number of elements: ";
    // cin >> n;

    // cout << "Capacity: " << numbers.capacity() << endl;
    // cout << "Size: " << numbers.size() << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     int num;
    //     cout << "Enter number " << i + 1 << ": ";
    //     cin >> num;

    //     numbers.push_back(num);
    // }

    // cout << "\nAfter " << n << " insertions:\n";
    // cout << "Capacity: " << numbers.capacity() << endl;
    // cout << "Size: " << numbers.size() << endl;

    // int count = 1;
    // for (const int &num : numbers)
    // {
    //     cout << count++ << ". " << num << "\n";
    // }

    // int index = 0;
    // cout << "Enter index To Remove: ";
    // cin >> index;

    // if (index < 0 || index >= numbers.size())
    // {
    //     cout << "Invalid index!\n";
    // }

    // else
    // {
    //     numbers.erase(numbers.begin() + index);
    //     cout << "\nAfter Removing index " << index << ":\n";
    //     cout << "Capacity: " << numbers.capacity() << endl;
    //     cout << "Size: " << numbers.size() << endl;
    // }

    // count = 1;
    // for (const int &num : numbers)
    // {
    //     cout << count++ << ". " << num << "\n";
    // }
}
