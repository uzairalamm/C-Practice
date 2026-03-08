#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Programming Challenges

// Problem 1 ---- Chapter 13
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

// Problem 2 ---- Chapter 13
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

// Problem 3 ---- Chapter 13
class Car
{
    int yearModel;
    string make;
    int speed;
    static constexpr int MAX_SPEED = 220; // or if you donot want to make this..
    static constexpr int MIN_SPEED = 0;   // as for this, all car start from 0, so this value is for all Car Obj
    // another way to do it, and i think this is better
    int maxSpeed; // if we use this, then we donot have static constexpr int MAX_SPEED
    // in short you can comment it out...

public:
    Car(int yearModel, string make) : yearModel(yearModel), make(make), speed(0) {};
    Car(int yearModel, string make, int maxSpeed) : yearModel(yearModel), make(make), speed(0), maxSpeed(maxSpeed) {}; // for max speed, all cars have different max Speed

    int getModelYear() const
    {
        return yearModel;
    }

    string getMake() const
    {
        return make;
    }

    float getSpeed() const
    {
        return speed;
    }

    void accelerate()
    {
        speed = min(speed + 5, maxSpeed); // you can simply put here your max speed like this min(speed + 5, 220) it will still work
        // here is another one, and better

        // speed = min(speed + 5, maxSpeed);
        // ok, so what min function will do,
        // if speed + 5 exceed 220 or whatever max speed is,
        // it will give use the minimum of them which is in that case will be 220..
        // inshort it will not exceed 220 or whatever max speed will be...
    }

    void brake()
    {
        speed = max(speed - 5, MIN_SPEED);
    }

    void showDetail() const
    {
        cout << "Model Year: " << yearModel << endl;
        cout << "Maker: " << make << endl;
    }
};

int main()
{
    Car toyota(2019, "Totoya", 250);
    toyota.showDetail();

    cout << toyota.getMake() << " is Getting Started\n";
    for (int i = 1; i <= 5; i++)
    {
        toyota.accelerate();
        cout << "Curent Speed: " << toyota.getSpeed() << endl;
        cout << "---------------------------------\n";
    }

    cout << "\nHit the Break\n";
    for (int i = 1; i <= 6; i++)
    {
        toyota.brake();
        cout << "Curent Speed: " << toyota.getSpeed() << endl;
        cout << "---------------------------------\n";
    }
}
// I maybe wrong, I am just learning... all those comments
