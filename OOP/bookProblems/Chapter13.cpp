#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;

// Programming Challenges

// ======================Problem 2 ---- Chapter 13======================
// class Date
// {
//     int day, month, year;

// public:
//     Date(int day, int month, int year) : month((month >= 1 && month <= 12) ? month : 1), year(year)
//     {
//         // if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//         // {
//         //     if (day <= 31)
//         //         this->day = day;
//         //     else
//         //         this->day = 1;
//         // }

//         // else if (month == 4 || month == 6 || month == 9 || month == 11)
//         // {
//         //     if (day <= 30)
//         //         this->day = day;
//         //     else
//         //         this->day = 1;
//         // }

//         // else if (month == 2)
//         // {
//         //     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//         //     {
//         //         if (day <= 29)
//         //             this->day = day;
//         //         else
//         //             this->day = 1;
//         //     }
//         //     else
//         //     {
//         //         if (day <= 28)
//         //             this->day = day;
//         //         else
//         //             this->day = 1;
//         //     }
//         // }

// ......A much Cleaner Code
//         int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//         if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
//         {
//             daysInMonth[month - 1] = 29;
//         }

//         if (day >= 1 && day <= daysInMonth[month - 1])
//         {
//             this->day = day;
//         }
//         else
//             this->day = daysInMonth[month - 1];
//     }

//     int getDay() const
//     {
//         return day;
//     }
//     int getMonth() const
//     {
//         return month;
//     }
//     int getYear() const
//     {
//         return year;
//     }

//     void showDate() const
//     {
//         cout << day << "/" << month << "/" << year << endl;
//     }

//     void dateWithMonthName() const
//     {
//         static const string months[] = {"January", "February", "March", "April",
//                                         "May", "June", "July", "August",
//                                         "September", "October", "November", "December"};

//         cout << months[month - 1] << " " << day << ", " << year << endl;
//     }
// };

// int main()
// {
//     Date today(28, 2, 2025);
//     cout << "Date Formate is (DD/MM/YY)\n";
//     today.showDate();

//     cout << "Date Formate is (MonthName/Day/Year)\n";
//     today.dateWithMonthName();
// }

// ======================Problem 2 ---- Chapter 13======================
// class Employee
// {
//     string name;
//     int id;
//     string department, position;

// public:
// Employee() : name(""),
//              id(0),
//              department(""),
//              position(""){};

// Employee(string name, int id, string department) : name(name),
//                                                    id(id),
//                                                    department(department),
//                                                    position(""){};

// Employee(string name, int id, string department, string position) : name(name),
//                                                                     id(id),
//                                                                     department(department),
//                                                                     position(position){}; // these are the requirements

//     void setName(string name)
//     {
//         this->name = name;
//     }

//     void setID(int id)
//     {
//         this->id = id;
//     }

//     void setDepartment(string department)
//     {
//         this->department = department;
//     }

//     void setPosition(string position)
//     {
//         this->position = position;
//     }

//     string getName() const
//     {
//         return name;
//     }
//     int getID() const
//     {
//         return id;
//     }
//     string getDepartment() const
//     {
//         return department;
//     }
//     string getPosition() const
//     {
//         return position;
//     }

//     void static showMemberName()
//     {
//         cout << "NAME\tID\tDEPARTMENT\tPOSITION\n";
//     }
//     void displayValues()
//     {
//         cout << name << "\t" << id << "\t" << department << "\t" << position << endl;
//     }
// };

// int main()
// {
//     Employee::showMemberName();
//     Employee emp1("ALI", 21, "Accounting", "Vice President");
//     emp1.displayValues();

//     Employee emp2("ALI2", 21, "Accounting", "Vice President");
//     emp1.displayValues();
// }

// ======================Problem 3 ---- Chapter 13======================
// class Car
// {
//     int yearModel;
//     string make;
//     int speed;
//     static constexpr int MAX_SPEED = 220; // or if you donot want to make this..
//     static constexpr int MIN_SPEED = 0;   // as for this, all car start from 0, so this value is for all Car Obj
//     // another way to do it, and i think this is better
//     int maxSpeed; // if we use this, then we donot have static constexpr int MAX_SPEED
//     // in short you can comment it out...

// public:
//     Car(int yearModel, string make) : yearModel(yearModel), make(make), speed(0) {};
//     Car(int yearModel, string make, int maxSpeed) : yearModel(yearModel), make(make), speed(0), maxSpeed(maxSpeed) {}; // for max speed, all cars have different max Speed

//     int getModelYear() const
//     {
//         return yearModel;
//     }

//     string getMake() const
//     {
//         return make;
//     }

//     float getSpeed() const
//     {
//         return speed;
//     }

//     void accelerate()
//     {
//         speed = min(speed + 5, maxSpeed); // you can simply put here your max speed like this min(speed + 5, 220) it will still work
//         // here is another one, and better

//         // speed = min(speed + 5, maxSpeed);
//         // ok, so what min function will do,
//         // if speed + 5 exceed 220 or whatever max speed is,
//         // it will give use the minimum of them which is in that case will be 220..
//         // inshort it will not exceed 220 or whatever max speed will be...
//     }

//     void brake()
//     {
//         speed = max(speed - 5, MIN_SPEED);
//     }

//     void showDetail() const
//     {
//         cout << "Model Year: " << yearModel << endl;
//         cout << "Maker: " << make << endl;
//     }
// };

// int main()
// {
//     Car toyota(2019, "Totoya", 250);
//     toyota.showDetail();

//     cout << toyota.getMake() << " is Getting Started\n";
//     for (int i = 1; i <= 5; i++)
//     {
//         toyota.accelerate();
//         cout << "Curent Speed: " << toyota.getSpeed() << endl;
//         cout << "---------------------------------\n";
//     }

//     cout << "\nHit the Break\n";
//     for (int i = 1; i <= 6; i++)
//     {
//         toyota.brake();
//         cout << "Curent Speed: " << toyota.getSpeed() << endl;
//         cout << "---------------------------------\n";
//     }
// }
// I maybe wrong, I am just learning... all those comments

// ======================Problem 4 ---- Chapter 13======================

// class BroadcastStation
// {
//     string stationName;
//     float frequency;
//     string brandType;
//     string genre;

// public:
//     BroadcastStation() : stationName("Unknown"), frequency(0.0f), brandType("FM"), genre("None") {};
//     BroadcastStation(string name, float freq, string brand, string genre)
//         : stationName(name), frequency(freq), brandType(brand), genre(genre) {};

//     void setStation(string name) { stationName = name; }
//     void setFrequency(float freq) { frequency = freq; }
//     void setBrand(string brand) { brandType = brand; }
//     void setGenre(string g) { genre = g; }

//     string getStation() const { return stationName; }
//     float getFrequency() const { return frequency; }
//     string getBrand() const { return brandType; }
//     string getGenre() const { return genre; }

//     void display() const
//     {
//         cout << "Station: " << stationName
//              << " | Frequency: " << frequency
//              << " | Brand: " << brandType
//              << " | Genre: " << genre << endl;
//     }
// };

// class RadioReceiver
// {
//     float volume;
//     BroadcastStation currentStation;
//     vector<BroadcastStation> presets;

// public:
//     RadioReceiver()
//         : volume(5.0f),
//           currentStation("Default FM", 99.5f, "FM", "Music")
//     {
//         presets.push_back(BroadcastStation("News One", 101.2f, "FM", "News"));
//         presets.push_back(BroadcastStation("Rock FM", 98.3f, "FM", "Rock"));
//     }

//     void increaseVolume() { volume = min(volume + 1.0f, 10.0f); }
//     void decreaseVolume() { volume = max(volume - 1.0f, 0.0f); }

//     void frequencyUp() { currentStation.setFrequency(currentStation.getFrequency() + 0.1f); }
//     void frequencyDown() { currentStation.setFrequency(currentStation.getFrequency() - 0.1f); }

//     void selectPreset(int presetNumber)
//     {
//         if (presetNumber < 1 || presetNumber > presets.size())
//         {
//             cout << "Invalid preset number!\n";
//             return;
//         }
//         currentStation = presets[presetNumber - 1];
//     }

//     void display() const
//     {
//         cout << fixed << setprecision(1);
//         cout << "\n================ RADIO STATE ================\n";
//         cout << "Volume: " << volume << endl;
//         cout << "Current Station: \n";
//         currentStation.display();
//         cout << "\nPresets: \n";
//         for (int i = 0; i < presets.size(); i++)
//         {
//             cout << i + 1 << ". ";
//             presets[i].display();
//         }
//         cout << "============================================\n";
//     }
// };

// int main()
// {
//     RadioReceiver radio;

//     radio.display();
//     radio.increaseVolume();
//     radio.frequencyUp();
//     cout << "\nAfter increasing volume and frequency:\n";
//     radio.display();

//     radio.selectPreset(2);
//     cout << "\nAfter selecting preset 2:\n";
//     radio.display();
// }

// ======================Problem 5 ---- Chapter 13======================

// class RetailItem
// {
//     string description;
//     int unitsOnHand;
//     float price;

// public:
//     RetailItem() : description("Unknown"), unitsOnHand(0), price(0.00f) {};
//     RetailItem(string description, int unitsOnHand, float price) : description(description), unitsOnHand(unitsOnHand), price(price) {};
//     void setDescription(const string &description)
//     {
//         this->description = description;
//     }

//     void setUnitOnHand(int unitOnHand)
//     {
//         this->unitsOnHand = unitOnHand;
//     }

//     void setPrice(float price)
//     {
//         this->price = price;
//     }

//     string getDescription() const
//     {
//         return description;
//     }

//     int getUnitOnHand() const
//     {
//         return unitsOnHand;
//     }

//     float getPrice() const
//     {
//         return price;
//     }

//     float getTotal() const
//     {
//         return price * unitsOnHand;
//     }

//     static void displayShopItemTitle()
//     {
//         cout << "------------------------------------------------------\n";
//         cout << left << setw(25) << "Product Description" << setw(15) << "Unit" << setw(15) << "PricePerUnit";
//         cout << "\n-----------------------------------------------------\n";
//     }
//     void displayShopItems() const
//     {
//         cout << left << setw(25) << description << setw(15) << unitsOnHand << fixed << setprecision(2) << setw(15) << price << endl;
//     }

//     static void displayTitle()
//     {
//         cout << left << setw(25) << "Product Description" << setw(15) << "Unit" << setw(15) << "PricePerUnit" << setw(15) << "TotalPrice";
//         cout << "\n-------------------------------------------------\n";
//     }
//     void display() const
//     {
//         cout << left << setw(25) << description << setw(15) << unitsOnHand << fixed << setprecision(2) << setw(15) << price << setw(15) << getTotal() << endl;
//     }
// };

void line()
{
    cout << "--------------------------------------------------------------------\n";
}
// int main()
// {
//     RetailItem item1("Eggs", 2, 90.12f);
//     RetailItem item2;
//     RetailItem item3("Butter", 6, 190.12f);

//     RetailItem::displayTitle();
//     item1.display();
//     item2.display();
//     item3.display();
// }

// -------------Improved Version------------------

// int main()
// {
//     RetailItem items[4];
//     string products[4] = {"Butter", "Milk", "Bread", "Eggs"};
//     float prices[4] = {12.10, 8.00, 2.31, 2.00};
//     int units[4] = {7, 13, 30, 50};
//     // here is a better way
//     // RetailItem items[4] = {
//     //     {"butter", 12.10f, 7},
//     //     {"Milk", 8.00f, 13},
//     //     {"Bread", 2.31f, 30},
//     //     {"Eggs", 2.00f, 50}};
//     // we will improve this later. I hope so

//     char choice = 'y';
//     int itemChoice, unit;
//     vector<RetailItem> purchaseItems;

//     cout << "           Ruman k Thela\n";
//     cout << "           Items Available\n\n";
//     RetailItem::displayShopItemTitle();
//     for (int i = 0; i < 4; i++)
//     {
//         cout << i + 1 << " ";
//         items[i].setDescription(products[i]);
//         items[i].setPrice(prices[i]);
//         items[i].setUnitOnHand(units[i]);
//         items[i].displayShopItems();
//     }

//     cout << "Buy Our Fresh Products\n";
//     do
//     {
//         cout << "Which One You Want To Buy: ";
//         cin >> itemChoice;

//         if (itemChoice < 1 || itemChoice > 4)
//         {
//             cout << "Invalid Choice\n";
//             continue;
//         }

//         cout << "How many units: ";
//         cin >> unit;

//         if (unit > items[itemChoice - 1].getUnitOnHand())
//         {
//             cout << "Sorry, not enough stock!\n";
//             continue;
//         }

//         RetailItem purchased(items[itemChoice - 1].getDescription(), unit, items[itemChoice - 1].getPrice());
//         purchaseItems.push_back(purchased);

//         items[itemChoice - 1].setUnitOnHand(items[itemChoice - 1].getUnitOnHand() - unit);
//         cout << "Do you want to buy more? (y/n): ";
//         cin >> choice;
//         choice = tolower(choice);
//     } while (choice == 'y');

//     cout << "Final Result\n";
//     RetailItem::displayTitle();
//     float grandTotal = 0;
//     for (auto &p : purchaseItems)
//     {
//         p.display();
//         grandTotal += p.getTotal();
//     }
//     cout << "\nGrand Total: " << fixed << setprecision(2) << grandTotal << endl;

//     cout << "\nUpdated Stocks\n";
//     RetailItem::displayShopItemTitle();
//     for (int i = 0; i < 4; i++)
//     {
//         items[i].displayShopItems();
//     }

// }
// ======================Problem 6 ---- Chapter 13======================

// class Inventory
// {
//     string name;
//     int itemNumber;
//     int quantity;
//     double cost;

// public:
//     Inventory() : name("Unknown"), itemNumber(0), quantity(0), cost(0) {}

//     Inventory(string name, int number, int quantity, double cost)
//         : name(name), itemNumber(number), quantity(quantity), cost(cost) {}

//     void setName(const string &n) { name = n; }
//     void setNumber(int n) { itemNumber = n; }
//     void setQuantity(int q) { quantity = q; }
//     void setCost(double c) { cost = c; }

//     string getName() const { return name; }
//     int getItemNumber() const { return itemNumber; }
//     int getQuantity() const { return quantity; }
//     double getCost() const { return cost; }

//     double getTotalItemCost() const
//     {
//         return quantity * cost;
//     }

//     void reduceStock(int q)
//     {
//         quantity -= q;
//     }

//     void display() const
//     {
//         cout << left
//              << setw(10) << itemNumber
//              << setw(20) << name
//              << setw(10) << quantity
//              << setw(10) << cost
//              << endl;
//     }
// };

// int main()
// {
//     vector<Inventory> items = {
//         Inventory("Eggs", 1, 23, 3.43),
//         Inventory("Bread", 2, 45, 4.53),
//         Inventory("Butter", 3, 32, 4.12)};
//     vector<Inventory> cart;

//     // int products;

//     // cout << "How many products to stock: ";
//     // cin >> products;

//     // for (int i = 0; i < products; i++)
//     // {
//     //     string name;
//     //     int quantity;
//     //     double cost;

//     //     cout << "\nProduct " << i + 1 << endl;

//     //     cout << "Name: ";
//     //     cin >> name;

//     //     cout << "Quantity: ";
//     //     cin >> quantity;

//     //     cout << "Cost: ";
//     //     cin >> cost;

//     //     Inventory item(name, i + 1, quantity, cost);

//     //     items.push_back(item);
//     // }

//     line();
//     cout << "Available Products\n";
//     line();

//     for (const auto &item : items)
//         item.display();

//     char choice = 'y';

//     while (choice == 'y')
//     {
//         int number, quantity;

//         cout << "\nEnter item number to buy: ";
//         cin >> number;

//         if (number < 1 || number > items.size())
//         {
//             cout << "Invalid item number\n";
//             continue;
//         }

//         Inventory &selected = items[number - 1];

//         cout << "How many: ";
//         cin >> quantity;

//         if (quantity > selected.getQuantity())
//         {
//             cout << "Not enough stock\n";
//             continue;
//         }

//         Inventory purchase(
//             selected.getName(),
//             selected.getItemNumber(),
//             quantity,
//             selected.getCost());

//         cart.push_back(purchase);

//         selected.reduceStock(quantity);

//         cout << "Buy more? (y/n): ";
//         cin >> choice;
//     }

//     line();
//     cout << "Receipt\n";
//     line();

//     double total = 0;

//     for (const auto &p : cart)
//     {
//         p.display();
//         total += p.getTotalItemCost();
//     }

//     line();
//     cout << "Grand Total: " << total << endl;
// }

// ======================Problem 7 ---- Chapter 13======================
// class Lenght
// {
//     float meter;
//     float centimeter;

// public:
//     Lenght(float meter, float centimeter) : meter(meter), centimeter(centimeter) {};

//     void setCentimeter(int centimeter)
//     {
//         this->centimeter = centimeter;
//     }
//     void setMeter(float meter)
//     {
//         this->meter = meter;
//     }

//     float getLenghtinCM() const
//     {
//         return (meter * 100) + centimeter;
//     }

//     float getLenghtinM() const
//     {
//         return meter + (centimeter / 100);
//     }

//     void displayLenghtInCM() const
//     {
//         cout << "Lenght in Centimeter: " << getLenghtinCM() << "cm" << endl;
//     }

//     void displayLenghtInM() const
//     {
//         cout << "Lenght In Meter: " << fixed << setprecision(2) << getLenghtinM() << "m" << endl;
//     }
// };

// int main()
// {
//     Lenght l1(132, 142);
//     Lenght l2(12, 32);

//     if (l1.getLenghtinCM() > l2.getLenghtinCM())
//     {
//         l1.displayLenghtInCM();
//         l1.displayLenghtInM();
//     }
//     else
//     {
//         l2.displayLenghtInCM();
//         l2.displayLenghtInM();
//     }
// }

// ======================Problem 8 ---- Chapter 13======================
// class Cricle
// {
//     double radius;
//     const float PI = 3.14;

// public:
//     Cricle() : radius(0) {};
//     Cricle(double radius) : radius(radius) {};

//     void setRadius(double radius)
//     {
//         if (radius <= 0)
//             return;
//         this->radius = radius;
//     }

//     double getRadius() const
//     {
//         return radius;
//     }

//     double getArea() const
//     {
//         return PI * pow(radius, 2);
//     }

//     double getDiameter() const
//     {
//         return radius * 2;
//     }

//     double getCircumference() const
//     {
//         return 2 * PI * radius;
//     }

//     void display() const
//     {
//         cout << fixed;
//         cout << "Area of Circle         : " << setprecision(2) << getArea() << endl;
//         cout << "Diameter of Circle     : " << setprecision(2) << getDiameter() << endl;
//         cout << "Circumference of Circle: " << setprecision(2) << getCircumference() << endl;
//     }
// };

// int main()
// {
//     Cricle cricle(3.21);
//     cricle.display();
// }
// ..............Before we move forward, there are some problem i extended,
// because i was learning how certain function can do..............
// ======================Problem 9 ---- Chapter 13======================
// class VisitorCounter
// {
//     int currentVisitor;
//     int maxVisitor;

// public:
//     VisitorCounter(int maxVisitor) : maxVisitor(maxVisitor), currentVisitor(0) {
//                                      };

//     bool addVisitor()
//     {
//         if (currentVisitor < maxVisitor)
//         {
//             currentVisitor++;
//             return true;
//         }
//         else
//             return false;
//     }

//     bool removeVisitor()
//     {
//         if (currentVisitor > 0)
//         {
//             currentVisitor--;
//             return true;
//         }
//         else
//             return false;
//     }

//     void visitorInc()
//     {
//         if (!addVisitor())
//             cout << "Sorry the Maximum Limit has Reached\n";
//     }

//     void visitorDec()
//     {
//         if (!removeVisitor())
//             cout << "Its Empty~!\n";
//     }

//     void display() const
//     {
//         cout << "Current Visitors : " << currentVisitor << endl;
//         cout << "Maximum Capacity : " << maxVisitor << endl;
//         cout << "Available Space  : " << maxVisitor - currentVisitor << endl;
//     }
// };

// int main()
// {
//     VisitorCounter club(5);
//     club.visitorInc();
//     club.visitorDec();
//     club.display();
// }

// ======================Problem 10 ---- Chapter 13======================
// class NumberArray
// {
//     float *numbers;
//     int size;

// public:
//     NumberArray(int size) : numbers(nullptr), size(size)
//     {
//         numbers = new float[size];
//     }

//     ~NumberArray()
//     {
//         delete[] numbers;
//         numbers = nullptr;
//     }

//     void storeNumber(int index, float num)
//     {
//         if (index >= 0 && index < size)
//             numbers[index] = num;
//         else
//             cout << "Invalid Index\n";
//     }

//     float getNumber(int index) const
//     {
//         if (index >= 0 && index < size)
//             return numbers[index];
//         else
//         {
//             cout << "Invalid Index\n";
//             return 0;
//         }
//     }

//     float highestNum() const
//     {
//         float highest = numbers[0];
//         for (int i = 1; i < size; i++)
//         {
//             if (highest < numbers[i])
//                 highest = numbers[i];
//         }

//         return highest;
//     }
//     float lowestNum() const
//     {
//         float lowest = numbers[0];
//         for (int i = 1; i < size; i++)
//         {
//             if (lowest > numbers[i])
//                 lowest = numbers[i];
//         }

//         return lowest;
//     }

//     float average() const
//     {
//         float sum = 0;
//         for (int i = 1; i < size; i++)
//         {
//             sum += numbers[i];
//         }

//         return sum / size;
//     }

//     void display() const
//     {
//         line();
//         cout << "Elements in Array : ";
//         for (int i = 0; i < size; i++)
//         {
//             cout << getNumber(i) << " ";
//         }
//         cout << fixed << "\n";
//         cout << "Highest Num       : " << setprecision(2) << highestNum() << endl;
//         cout << "Lowest Num        : " << setprecision(2) << lowestNum() << endl;
//         cout << "Average           : " << setprecision(2) << average() << endl;
//         line();
//     }
// };

// int main()
// {
//     NumberArray number(4);
//     float num;
//     cout << "Enter Element in Array\n";
//     for (int i = 0; i < 4; i++)
//     {
//         cout << "Enter Number " << i + 1 << ": ";
//         cin >> num;
//         number.storeNumber(i, num);
//     }

//     number.display();
// }

// ======================Problem 11 ---- Chapter 13======================
// class Ball
// {
//     float radius;
//     string color;
//     const float PI = 3.14;

// public:
//     Ball() : radius(0), color("Unknown") {};
//     Ball(float radius, string color) : radius(radius), color(color) {};
//     void setRadius(float radius)
//     {
//         this->radius = radius;
//     }

//     void setColor(string color)
//     {
//         this->color = color;
//     }

//     string getColor() const
//     {
//         return color;
//     }

//     float getRadius() const
//     {
//         return radius;
//     }

//     float getVolume() const
//     {
//         return (4 * PI * pow(radius, 3)) / 3;
//     }

//     void display() const
//     {
//         cout << fixed;
//         cout << "Color Of Ball  : " << color << endl;
//         cout << "Radius Of Ball : " << setprecision(2) << radius << endl;
//         cout << "Volume Of Ball : " << setprecision(2) << getVolume() << endl;
//     }
// };

// int main()
// {
//     vector<Ball> balls;
//     int quantity;
//     float radius;
//     string color;

//     cout << "How many Ball You Want to Store: ";
//     cin >> quantity;

//     cout << "Enter the Color and Radius of the Balls\n";
//     for (int i = 0; i < quantity; i++)
//     {
//         cout << "Ball #" << i + 1 << ":\n";
//         cout << "Color: ";
//         cin >> color;

//         cout << "Radius: ";
//         cin >> radius;

//         Ball ball(radius, color);
//         balls.push_back(ball);
//     }
//     cout << '\n';

//     line();
//     cout << "Detail of Ball With Highest Volume\n";
//     line();

//     float highestRadius = balls[0].getRadius();
//     int index = 0;

//     for (int i = 1; i < balls.size(); i++)
//     {
//         if (highestRadius < balls[i].getRadius())
//         {
//             highestRadius = balls[i].getRadius();
//             index = i;
//         }
//     }

//     balls[index].display();

//     return 0;
// }

// ======================Problem 12-13 ---- Chapter 13======================
// class CardDeck
// {
//     vector<string> allCards;
//     vector<string> remainingCards;

// public:
//     CardDeck()
//     {
//         vector<string> suits = {"Hearts", "Diamonds", "Clubs", "Spades"};
//         vector<string> ranks = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

//         for (const string &suit : suits)
//         {
//             for (const string &rank : ranks)
//             {
//                 allCards.push_back(rank + " of " + suit);
//             }
//         }

//         remainingCards = allCards;
//     }

//     void deal()
//     {
//         remainingCards = allCards;
//     }

//     int getRemainingCards() const
//     {
//         return remainingCards.size();
//     }

//     string drawCard()
//     {
//         if (remainingCards.empty())
//         {
//             cout << "Deck is Empty. Reseting......\n";
//             deal();
//         }

//         int i = rand() % remainingCards.size();
//         string card = remainingCards[i];
//         remainingCards.erase(remainingCards.begin() + i);
//         return card;
//     }

//     void
//     display()
//     {
//         int i = 0;
//         for (const string &card : remainingCards)
//         {
//             cout << ++i << ": " << card << endl;
//         }
//     }
// };

// int getRankValue(string card)
// {
//     string rank = card.substr(0, card.find(" "));
//     if (rank == "Ace")
//         return 14;
//     if (rank == "King")
//         return 13;
//     if (rank == "Queen")
//         return 12;
//     if (rank == "Jack")
//         return 11;

//     return stoi(rank);
// }
// int main()
// {
//     srand(time(0));

//     CardDeck cards;
//     // cards.display();
//     vector<string> drawCards;

//     // Problem 12
//     //  line();
//     //  cout << "Two Random Cards are  Drawn\n";
//     //  for (int i = 0; i < 2; i++)
//     //  {
//     //      cout << cards.drawCard() << endl;
//     //  }
//     //  line();

//     // cout << "Remaining Cards: " << endl;
//     // cards.display();

//     // problem 13
//     for (int i = 0; i < 7; i++)
//     {
//         drawCards.push_back(cards.drawCard());
//         cout << drawCards[i] << endl;
//     }

//     cout << "Game of 7 Cards\n";
//     cout << "First Card: " << drawCards[0] << endl;

//     for (int i = 1; i < 7; i++)
//     {
//         char guess;
//         bool correct = false;

//         cout << "Will the next card be Higher(h) or Lower(l): ";
//         cin >> guess;

//         guess = tolower(guess);
//         int prev = getRankValue(drawCards[i - 1]);
//         int cur = getRankValue(drawCards[i]);

//         if ((guess == 'h' && cur > prev) || (guess == 'l' && cur < prev))
//         {
//             correct = true;
//         }
//         else
//             correct = false;

//         cout << "Next Card: " << drawCards[i] << endl;

//         if (!correct)
//         {
//             cout << "Wrong! Game Over!\n";
//             return 0;
//         }
//         cout << "Correct Guess\n";
//     }

//     cout << "\nCongratulations! You guessed all cards correctly!\n";
// }

// ======================Problem 14 ---- Chapter 13======================
// class Dice
// {
//     int die;

// public:
//     Dice() { rollDie(); }

//     void rollDie()
//     {
//         die = rand() % 6 + 1;
//     }

//     int getDice() const
//     {
//         return die;
//     }
// };

// class Fishing
// {
//     int points = 0, totalPoints = 0;

// public:
//     int setPoints(int diceValue)
//     {
//         int point[] = {10, 2, 5, 8, 15, 20};

//         points = point[diceValue - 1];
//         totalPoints += points;

//         return points;
//     }

//     int getTotal() const
//     {
//         return totalPoints;
//     }
// };

// int main()
// {
//     srand(time(0));

//     Dice die;
//     Fishing fish;

//     string items[] = {
//         "Huge Fish",
//         "Old Shoe",
//         "Little Fish",
//         "Boot",
//         "Big Fish",
//         "Golden Fish"};

//     char choice = 'y';
//     int count = 0;

//     cout << "Fishing Game\n";
//     cout << "Try your luck!\n";

//     while (choice == 'y')
//     {
//         line();
//         cout << "Rolling...\n";

//         die.rollDie();
//         int diceValue = die.getDice();

//         int earned = fish.setPoints(diceValue);

//         cout << "You caught: " << items[diceValue - 1] << endl;
//         cout << "Points earned: " << earned << endl;

//         count++;

//         cout << "\nFish again? (y/n): ";
//         cin >> choice;
//         choice = tolower(choice);
//     }

//     // Final result
//     line();
//     cout << "Final Result\n";
//     line();

//     cout << "Total Rolls: " << count << endl;
//     cout << "Total Points: " << fish.getTotal() << endl;

//     // Result message
//     if (fish.getTotal() < 10)
//         cout << "Bad luck! Better next time.\n";

//     else if (fish.getTotal() < 30)
//         cout << "Not bad! You caught some fish.\n";

//     else if (fish.getTotal() < 50)
//         cout << "Good job! Nice fishing.\n";

//     else
//         cout << "Excellent! You're a pro fisherman!\n";

//     return 0;
// }

// ======================Problem 15 ---- Chapter 13======================
// class MortgagePayment
// {
//     double loan, rate;
//     int year;

// public:
//     MortgagePayment() : loan(0.00), rate(0.00), year(0) {};

//     MortgagePayment(double loan, double rate, int year) : loan((loan > 0) ? loan : 0),
//                                                           rate((rate > 0) ? rate / 100 : 0.01),
//                                                           year((year > 0) ? year : 1) {};

//     void setLoanAmount(double loan)
//     {
//         this->loan = (loan > 0) ? loan : 0;
//     }

//     void setInterestRate(double rate)
//     {
//         this->rate = (rate > 0) ? rate / 100 : 0.01;
//     }

//     void setNumberOfYears(int year)
//     {
//         this->year = (year > 0) ? year : 1;
//     }

//     double getMonthlyPayment() const
//     {
//         if (loan > 0 && year > 0 && rate >= 0)
//         {
//             int months = year * 12;
//             double monthlyRate = rate / 12;

//             double term = pow(1 + monthlyRate, months);

//             return (loan * monthlyRate * term) / (term - 1);
//         }
//         else
//             return 0;
//     }

//     double getTotalPayment() const
//     {
//         return getMonthlyPayment() * year * 12;
//     }

//     void display() const
//     {
//         if (loan > 0 && year > 0 && rate >= 0)
//         {
//             double payment = getMonthlyPayment();
//             double totalPayment = getTotalPayment();

//             cout << "Monthly Payment is: " << payment << endl;
//             cout << "Total Payment is: " << totalPayment << endl;
//         }
//         else
//         {
//             cout << "Invalid input values!\n";
//         }
//     }
// };

// int main()
// {
//     MortgagePayment payment(4500.78, 21.21, 2);
//     payment.display();
//     MortgagePayment payment1;
//     payment1.display();
// }

// ======================Problem 16 ---- Chapter 13======================
// class Temperature
// {
//     float temperature;

// public:
//     Temperature(float temp) : temperature(temp) {};

//     void setTemp(float temp)
//     {
//         temperature = temp;
//     }

//     float getTemp()
//     {
//         return temperature;
//     }

//     bool isEthylFreezing()
//     {
//         if (temperature <= -173)
//             return true;
//         else
//             return false;
//     }

//     bool isEthylBoiling()
//     {
//         if (temperature >= 172)
//             return true;
//         else
//             return false;
//     }

//     bool isOxygenFreezing()
//     {
//         if (temperature <= -362)
//             return true;
//         else
//             return false;
//     }

//     bool isOxygenBoiling()
//     {
//         if (temperature >= -306)
//             return true;
//         else
//             return false;
//     }

//     bool isWaterFreezing()
//     {
//         if (temperature <= 32)
//             return true;
//         else
//             return false;
//     }

//     bool isWaterBoiling()
//     {
//         if (temperature >= 212)
//             return true;
//         else
//             return false;
//     }

//     void pointChecker()
//     {
//         if (isEthylFreezing())
//             cout << "Etyle is Freezing at: " << temperature << endl;

//         if (isEthylBoiling())
//             cout << "Etyle is Boiling at: " << temperature << endl;

//         if (isOxygenFreezing())
//             cout << "Oxygen is Freezing at: " << temperature << endl;

//         if (isOxygenBoiling())
//             cout << "Oxygen is Boiling at: " << temperature << endl;

//         if (isWaterFreezing())
//             cout << "Water is Freezing at: " << temperature << endl;

//         if (isWaterBoiling())
//             cout << "Water is Boiling at: " << temperature << endl;
//     }
// };
// // this is working, but its very redundant
// int main()
// {
//     Temperature temp(-307);
//     temp.pointChecker();
// }

// ======================Problem 16.1 ---- Chapter 13======================
// Improve version, litle bit

// struct Substance
// {
//     string name;
//     float freezing;
//     float boiling;
// };

// class Temperature
// {
//     float temp;
//     static vector<Substance> substances;

// public:
//     Temperature(float t) : temp(t) {}

//     void setTemp(float t) { temp = t; }
//     float getTemp() const { return temp; }

//     static void addSubstances(const string &name, float freezing, float boiling)
//     {
//         substances.push_back({name, freezing, boiling});
//     }

//     static void showSubstance()
//     {
//         for (auto &s : substances)
//         {
//             cout << "Name: " << s.name << "\n"
//                  << "Freezing Point: " << s.freezing << "\n"
//                  << "Boiling Point: " << s.boiling << endl;
//             line();
//         }
//     }

//     void pointChecker() const
//     {
//         cout << "At temperature " << temp << "F:\n";

//         cout << "Freezing substances: ";
//         bool anyFreezing = false;

//         for (auto s : substances)
//         {
//             if (temp <= s.freezing)
//             {
//                 cout << s.name << " ";
//                 anyFreezing = true;
//             }
//         }

//         if (!anyFreezing)
//             cout << "None";
//         cout << endl;

//         cout << "Boiling substances: ";
//         bool anyBoiling = false;

//         for (auto s : substances)
//         {
//             if (temp >= s.boiling)
//             {
//                 cout << s.name << " ";
//                 anyBoiling = true;
//             }
//         }
//         if (!anyBoiling)
//             cout << "None";
//         cout << endl;
//     }
// };

// vector<Substance> Temperature::substances = {
//     {"Ethyl", -173, 172},
//     {"Oxygen", -362, -306},
//     {"Water", 32, 212}};

// int main()
// {
//     Temperature temp(-306);
//     temp.pointChecker();
//     line();

//     Temperature::addSubstances("Mercury", -38.83, 674);
//     Temperature::showSubstance();
// } // a more scalable program

// ======================Problem 17 ---- Chapter 13======================
// class Time
// {
//     int hours = 0, minutes = 0, seconds = 0;
//     string am_pm = "am";

// public:
//     bool setAmPM(string am_pm)
//     {
//         for (auto &c : am_pm)
//             c = tolower(c);

//         if (am_pm == "am" || am_pm == "pm")
//         {
//             this->am_pm = am_pm;
//             return true;
//         }
//         return false;
//     }

//     bool setHours(int hours)
//     {
//         if (hours >= 1 && hours <= 12)
//         {
//             this->hours = hours;
//             return true;
//         }
//         return false;
//     }

//     bool setMinutes(int minutes)
//     {
//         if (minutes >= 0 && minutes <= 59)
//         {
//             this->minutes = minutes;
//             return true;
//         }
//         return false;
//     }

//     bool setSeconds(int seconds)
//     {
//         if (seconds >= 0 && seconds <= 59)
//         {
//             this->seconds = seconds;
//             return true;
//         }
//         return false;
//     }

//     void display12Hours() const
//     {
//         cout << setfill('0')
//              << setw(2) << hours << ": "
//              << setw(2) << minutes << ": "
//              << setw(2) << seconds << " " << am_pm << endl;
//     }

//     void display24Hours() const
//     {
//         int h = hours;
//         if (am_pm == "am")
//         {
//             if (h == 12)
//                 h = 0;
//         }

//         else
//         {
//             if (h != 12)
//                 h += 12;
//         }

//         cout << setfill('0')
//              << setw(2) << h << ": "
//              << setw(2) << minutes << ": "
//              << setw(2) << seconds << endl;
//     }
// };

// void inputValidation(int &input) // validation for int datatype
// {
//     if (!cin.fail())
//         return;

//     while (cin.fail())
//     {
//         cin.clear();
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         cout << "Invalid input, try again: ";
//         cin >> input;
//     }
// }

// int main()
// {
//     Time watch;
//     int hours, minutes, second;
//     string am_pm;

//     do
//     {
//         cout << "Enter Hours: ";
//         cin >> hours;
//         inputValidation(hours);

//     } while (!watch.setHours(hours));

//     do
//     {
//         cout << "Enter Minutes: ";
//         cin >> minutes;
//         inputValidation(minutes);

//     } while (!watch.setMinutes(minutes));

//     do
//     {
//         cout << "Enter Seconds: ";
//         cin >> second;
//         inputValidation(second);

//     } while (!watch.setSeconds(second));

//     do
//     {
//         cout << "Am or Pm: ";
//         cin >> am_pm;
//     } while (!watch.setAmPM(am_pm));

//     cout << "Time In Both Formate\n";

//     line();
//     watch.display12Hours();
//     watch.display24Hours();
//     line();
// }

// ======================Problem 10 ---- Chapter 13======================
// let me solve this using vectors

// class NumberArray
// {
//     vector<float> numbers;

// public:
//     void storeNumber(float num)
//     {
//         numbers.push_back(num);
//     }

//     float getNumber(int index) const
//     {
//         if (index >= 0 && index < numbers.size())
//             return numbers[index];

//         else
//             throw out_of_range("Invalid index");
//     }

//     float highestNum() const
//     {
//         if (numbers.empty())
//         {
//             cout << "Array is Empty\n";
//             return -1;
//         }

//         float highest = numbers[0];
//         for (int i = 1; i < numbers.size(); i++)
//         {
//             if (highest < numbers[i])
//                 highest = numbers[i];
//         }

//         return highest;
//     }

//     float lowestNum() const
//     {
//         if (numbers.empty())
//         {
//             cout << "Array is Empty\n";
//             return -1;
//         }

//         float lowest = numbers[0];
//         for (int i = 1; i < numbers.size(); i++)
//         {
//             if (lowest > numbers[i])
//                 lowest = numbers[i];
//         }

//         return lowest;
//     }

//     float average() const
//     {
//         if (numbers.empty())
//         {
//             cout << "Array is Empty\n";
//             return -1;
//         }

//         float sum = 0;
//         for (int i = 0; i < numbers.size(); i++)
//             sum += numbers[i];

//         return sum / numbers.size();
//     }

//     void display() const
//     {
//         line();
//         if (numbers.empty())
//         {
//             cout << "Array is Empty\n";
//             line();

//             return;
//         }

//         cout << "Elements in Array : ";
//         for (int i = 0; i < numbers.size(); i++)
//             cout << getNumber(i) << " ";

//         cout << fixed << "\n";
//         cout << "Highest Num       : " << setprecision(2) << highestNum() << endl;
//         cout << "Lowest Num        : " << setprecision(2) << lowestNum() << endl;
//         cout << "Average           : " << setprecision(2) << average() << endl;

//         line();
//     }
// };

// int main()
// {
//     NumberArray number;
//     float num;
//     cout << "Enter Element in Array\n";
//     for (int i = 0; i < 4; i++)
//     {
//         cout << "Enter Number " << i + 1 << ": ";
//         cin >> num;
//         number.storeNumber(num);
//     }

//     number.display();
// }

// ======================Problem 17 ---- Chapter 13======================
// Improve Version
// class Time
// {
//     int hours, minutes, seconds;

// public:
//     Time() : hours(0), minutes(0), seconds(0) {};

//     Time(int h, int m, int s)

//         : hours((h >= 0 && h <= 23) ? h : 0),
//           minutes((m >= 0 && m <= 59) ? m : 0),

//           seconds((s >= 0 && s <= 59) ? s : 0) {};

//     bool setHours(int h)
//     {

//         if (h >= 0 && h <= 23)
//         {
//             hours = h;
//             return true;
//         }
//         return false;
//     }

//     bool setMinutes(int m)
//     {

//         if (m >= 0 && m <= 59)
//         {
//             minutes = m;
//             return true;
//         }
//         return false;
//     }

//     bool setSeconds(int s)
//     {

//         if (s >= 0 && s <= 59)
//         {
//             seconds = s;
//             return true;
//         }
//         return false;
//     }

//     void timeIn24Hours() const
//     {
//         cout << setfill('0')
//              << setw(2) << hours << ": "
//              << setw(2) << minutes << ": "
//              << setw(2) << seconds << endl;
//     }

//     void timeIn12Hours() const
//     {
//         int h = hours;
//         string am_pm;

//         if (h == 0)
//         {
//             h = 12;
//             am_pm = "am";
//         }

//         else if (h < 12)
//         {
//             am_pm = "am";
//         }

//         else if (h == 12)
//         {
//             am_pm = "pm";
//         }

//         else
//         {
//             h -= 12;
//             am_pm = "pm";
//         }

//         cout << setfill('0')
//              << setw(2) << h << ": "
//              << setw(2) << minutes << ": "
//              << setw(2) << seconds << " "
//              << am_pm << endl;
//     }

//     void displayTime() const
//     {
//         timeIn12Hours();
//         timeIn24Hours();
//     }
// };

// void inputValidation(int &input)
// {
//     while (cin.fail())
//     {
//         cin.clear();
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         cout << "Invalid Input. Try Again: ";
//         cin >> input;
//     }
// }

// int main()
// {
//     Time watch;
//     int hours, minutes, seconds;

//     do
//     {
//         cout << "Enter Hours: ";
//         cin >> hours;
//         inputValidation(hours);

//     } while (!watch.setHours(hours));

//     do
//     {
//         cout << "Enter Minutes: ";
//         cin >> minutes;
//         inputValidation(minutes);

//     } while (!watch.setMinutes(minutes));

//     do
//     {
//         cout << "Enter Seconds: ";
//         cin >> seconds;
//         inputValidation(seconds);

//     } while (!watch.setSeconds(seconds));

//     watch.displayTime();
// }

// ======================Problem 18 ---- Chapter 13======================
// class Dice
// {
//     int die;

// public:
//     int rollDie()
//     {
//         return die = rand() % 6 + 1;
//     }
// };

// class Blackjack
// {
//     int computerScore = 0, playerScore = 0;

// public:
//     // Add Score
//     void addPlayerScore(int score) { playerScore += score; }
//     void addComputer(int score) { computerScore += score; }

//     // Get Score
//     int getPlayerScore() const { return playerScore; }
//     int getComputerScore() const { return computerScore; }

//     void showWinner() const
//     {
//         line();
//         cout << "Final Result\n";
//         line();

//         cout << "Player Score: " << playerScore << endl;
//         cout << "Computer Score: " << computerScore << endl;

//         if (computerScore > 21)
//             cout << "Computer Score busted. You Win\n";

//         else if (playerScore > 21)
//             cout << "Your Score busted. Computer Win\n";

//         else if (playerScore == computerScore)
//             cout << "Its a Tie\n";

//         else if (computerScore > playerScore)
//             cout << "Computer Wins\n";

//         else
//             cout << "You Wins\n";
//     }
// };

// int main()
// {
//     srand(time(0));
//     Dice die;
//     Blackjack game;
//     char choice;

//     cout << "==============Game of 21=================\n";
//     do
//     {
//         cout << "Want to ROll(y/n): ";
//         cin >> choice;
//         choice = tolower(choice); // to lowercase the user input
//     } while (choice != 'y' && choice != 'n');

//     if (choice == 'y')
//     {
//         do
//         {
//             game.addComputer(die.rollDie());
//             game.addComputer(die.rollDie());

//             int d1 = die.rollDie();
//             int d2 = die.rollDie();

//             game.addPlayerScore(d1 + d2);
//             cout << "You Roll 2 Dice\n";
//             cout << "Dice 1: " << d1 << "\nDice 2: " << d2 << endl;
//             cout << "Current Score is: " << game.getPlayerScore() << endl;

//             if (game.getPlayerScore() > 21)
//             {
//                 cout << "Your Score Busted\n";
//                 break;
//             }

//             do
//             {
//                 cout << "Want to ROll More(y/n): ";
//                 cin >> choice;
//                 choice = tolower(choice);
//             } while (choice != 'y' && choice != 'n');

//         } while (choice == 'y');

//         game.showWinner();
//     }

//     else
//     {
//         cout << "Have a good day\n";
//         return 0;
//     }
//     return 0;
// }

// ======================Problem 19 ---- Chapter 13======================

// class QuestionBank
// {
//     string question;
//     vector<string> options;
//     char answer;

// public:
//     void setQuestion(string q) { question = q; }
//     void setOption(string op) { options.push_back(op); }
//     void setAnswer(char ans) { answer = ans; }

//     string getQuestion() const { return question; }
//     string getOption(int index) const
//     {
//         if (index >= 0 && index < options.size())
//             return options[index];
//         return "Invalid Index";
//     }

//     char getAnswer() const { return answer; }
// };

// class trivaGame
// {
//     vector<QuestionBank> questions;
//     int score = 0;

// public:
//     void addQuestion()
//     {
//         QuestionBank q;

//         string text;

//         do
//         {
//             cout << "Enter Question: ";
//             getline(cin, text);
//         } while (text.empty());

//         cout << endl;
//         q.setQuestion(text);

//         for (int i = 0; i < 4; i++)
//         {
//             string option;
//             do
//             {
//                 cout << "Option " << char('A' + i) << ": ";
//                 getline(cin, option);
//             } while (option.empty());

//             q.setOption(option);
//         }
//         cout << endl;

//         char answer;
//         do
//         {
//             cout << "Enter Answer(A-D): ";
//             cin >> answer;
//             answer = toupper(answer);
//         } while (answer < 'A' || answer > 'D');

//         cin.ignore();
//         cout << endl;

//         q.setAnswer(answer);
//         questions.push_back(q);
//     }

//     void play()
//     {

//         for (int i = 0; i < questions.size(); i++)
//         {
//             cout << "Question Number " << i + 1 << "\n";
//             line();
//             cout << questions[i].getQuestion() << endl;
//             line();

//             for (int j = 0; j < 4; j++)
//             {
//                 cout << char('A' + j) << ") " << questions[i].getOption(j) << endl;
//             }

//             char guess;
//             do
//             {
//                 cout << "Answer: ";
//                 cin >> guess;
//                 guess = toupper(guess);
//             } while (guess < 'A' || guess > 'D');

//             if (guess == questions[i].getAnswer())
//             {
//                 cout << "***************************************\n";
//                 cout << "******         Correct         ********\n";
//                 cout << "***************************************\n";
//                 score++;
//             }

//             else
//             {
//                 cout << "***************************************\n";
//                 cout << "****     Wrong! Correct Answer: " << questions[i].getAnswer() << "  ****" << endl;
//                 cout << "***************************************\n";
//             }

//             cin.ignore();
//             cout << endl;
//         }
//     }

//     void finalScore() const
//     {
//         cout << "Final Score: " << score << "/" << questions.size() << endl;
//     }
// };

// int main()
// {
//     trivaGame quiz;
//     int numofQuestions;

//     cout << "How Many Question?: ";
//     cin >> numofQuestions;
//     cin.ignore();

//     for (int i = 0; i < numofQuestions; i++)
//     {
//         cout << "-----------Question " << i + 1 << " -------------------\n";
//         quiz.addQuestion();
//     }

//     cout << "==============Quiz===============\n";
//     quiz.play();
//     quiz.finalScore();
//     return 0;
// }
