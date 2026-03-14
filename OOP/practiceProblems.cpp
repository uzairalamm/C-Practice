#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
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
//     BroadcastStation(string stationName, float frequency,
//                      string brandType, string genre) : stationName(stationName),
//                                                        brandType(brandType),
//                                                        frequency(frequency),
//                                                        genre(genre) {};

//     void setStation(string stationName)
//     {
//         this->stationName = stationName;
//     }
//     void setFrequency(float frequency)
//     {
//         this->frequency = frequency;
//     }
//     void setBrand(string brandType)
//     {
//         this->brandType = brandType;
//     }
//     void setGenre(string genre)
//     {
//         this->genre = genre;
//     }

//     string getBrand() const
//     {
//         return brandType;
//     }
//     string getStation() const
//     {
//         return stationName;
//     }
//     string getGenre() const
//     {
//         return genre;
//     }
//     float getFrequency()
//     {
//         return frequency;
//     }
// };

// class RadioReceiver
// {
//     float volume;
//     BroadcastStation currentStation;
//     BroadcastStation preset1, preset2;

// public:
//     RadioReceiver() : currentStation("Unknown", 0.00f, "FM", "NONE"),
//                       preset1("Unknown", 0.00f, "FM", "NONE"),
//                       preset2("Unknown", 0.00f, "FM", "NONE"), volume(0.00f) {};

//     void increaseVolume()
//     {
//         volume = min(volume + 1, 100.00f);
//     }
//     void decreaseVolume()
//     {
//         volume = max(volume - 1, 0.00f);
//     }
//     void storePreset1() {}
// }; // -----------------I will do this later----------------

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

// void line()
// {
//     cout << "--------------------------------------\n";
// }
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

// } // not good, have logical error. i have to fix them...
