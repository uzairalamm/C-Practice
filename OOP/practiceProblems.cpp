#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

// Programming Challenges

// ======================Problem 2 ---- Chapter 13======================
// class Date
// {
//     int day, month, year;

// public:
//     Date(int day, int month, int year) : day((day >= 1 && day <= 31) ? day : 1),
//                                          month((month >= 1 && month <= 12) ? month : 1),
//                                          year(year) {}; // I will improve it later

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
//     Date today(04, 03, 2026);
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
//     Employee() : name(""), id(0), department(""), position("") {};
//     Employee(string name, int id, string department) : name(name), id(id), department(department), position("") {};
//     Employee(string name, int id, string department, string position) : name(name), id(id), department(department), position(position) {};

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
//     BroadcastStation() : stationName("Unknown"), frequency(0.0f), brandType("FM"), genre("None") {}
//     BroadcastStation(string name, float freq, string brand, string genre)
//         : stationName(name), frequency(freq), brandType(brand), genre(genre) {}

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

//     double getTotalCost() const
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
//     vector<Inventory> items;
//     vector<Inventory> cart;

//     int products;

//     cout << "How many products to stock: ";
//     cin >> products;

//     for (int i = 0; i < products; i++)
//     {
//         string name;
//         int quantity;
//         double cost;

//         cout << "\nProduct " << i + 1 << endl;

//         cout << "Name: ";
//         cin >> name;

//         cout << "Quantity: ";
//         cin >> quantity;

//         cout << "Cost: ";
//         cin >> cost;

//         Inventory item(name, i + 1, quantity, cost);

//         items.push_back(item);
//     }

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
//         total += p.getTotalCost();
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

// ======================Problem 9 ---- Chapter 13======================
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
//     }

//     void storeNumber(int index, float num)
//     {
//         if (index >= 0 && index < size)
//             numbers[index] = num;
//         else
//             cout << "Invalid Index\n";
//     }

//     float getNumber(int index)
//     {
//         if (index >= 0 && index < size)
//             return numbers[index];
//         else
//         {
//             cout << "Invalid Index\n";
//             return 0;
//         }
//     }

//     float highestNum()
//     {
//         float highest = numbers[0];
//         for (int i = 1; i < size; i++)
//         {
//             if (highest < numbers[i])
//                 highest = numbers[i];
//         }

//         return highest;
//     }
//     float lowestNum()
//     {
//         float lowest = numbers[0];
//         for (int i = 1; i < size; i++)
//         {
//             if (lowest > numbers[i])
//                 lowest = numbers[i];
//         }

//         return lowest;
//     }

//     float average()
//     {
//         float sum = 0;
//         for (int i = 1; i < size; i++)
//         {
//             sum += numbers[i];
//         }

//         return sum / size;
//     }

//     void display()
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

// ======================Problem 10 ---- Chapter 13======================
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
//         cout << "Color Of Ball  : " << setprecision(2) << color << endl;
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