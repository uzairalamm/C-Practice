#include <iostream>
#include <string>
using namespace std;

// ========================basic Program=========================

// class Student
// {
//     string name;
//     string rollNo;
//     float marks;

// public:
//     void input()
//     {
//         cout << "Enter Your Name: ";
//         getline(cin, name);
//         cout << "Enter Your Roll No.:";
//         cin >> rollNo;
//         cout << "Enter Your Marks: ";
//         cin >> marks;
//     }

//     void display()
//     {
//         cout << "Name is: " << name << endl;
//         cout << "Roll No. is: " << rollNo << endl;
//         cout << "Marks are: " << marks << endl;
//     }
// };

// int main()
// {
//     Student uzair;
//     uzair.input();
//     uzair.display();
// }

// ========================Create a class Book=========================

// class Book
// {
// public:
//     string bookId;
//     float price;
//     void display()
//     {
//         cout << "Book ID: " << bookId << endl;
//         cout << "Book Price: " << price << endl;
//     }
// };

// int main()
// {
//     Book english;
//     english.bookId = "05D37";
//     english.price = 405.99;
//     english.display();
// }

// ========================Create a class Employee=========================
// class Employee
// {
// public:
//     string id;
//     float salary;

//     void display()
//     {
//         cout << "Employee ID: " << id << endl;
//         cout << "Employee Salary: " << salary << endl;
//     }
// };

// int main()
// {
//     Employee asad;
//     asad.id = "Su92-052";
//     asad.salary = 300000;
//     asad.display();
// }

// ========================Create a class Car=========================
// class Car
// {
// public:
//     string brand;
//     float speed;

//     void showCar()
//     {
//         cout << "Car Brand: " << brand << endl;
//         cout << "Car Speed: " << speed << "m/s" << endl;
//     }
// };

// int main()
// {
//     Car corolla;
//     corolla.brand = "Toyota";
//     corolla.speed = 220;
//     corolla.showCar();
// }

// ========================Same Problem Using Structures=========================

// ========================Create a Struct Book=========================

// struct Book
// {
//     string bookId;
//     float price;
//     void display()
//     {
//         cout << "Book ID: " << bookId << endl;
//         cout << "Book Price: " << price << endl;
//     }
// };

// int main()
// {
//     Book english;
//     english.bookId = "05D37";
//     english.price = 405.99;
//     english.display();
// }

// ========================Create a Struct Employee=========================
// struct Employee
// {
//     string id;
//     float salary;

//     void display()
//     {
//         cout << "Employee ID: " << id << endl;
//         cout << "Employee Salary: " << salary << endl;
//     }
// };

// int main()
// {
//     Employee asad;
//     asad.id = "Su92-052";
//     asad.salary = 300000;
//     asad.display();
// }

// ========================Create a Struct Car=========================
// struct Car
// {
//     string brand;
//     float speed;

//     void showCar()
//     {
//         cout << "Car Brand: " << brand << endl;
//         cout << "Car Speed: " << speed << "m/s" << endl;
//     }
// };

// int main()
// {
//     Car corolla;
//     corolla.brand = "Toyota";
//     corolla.speed = 220;
//     corolla.showCar();
// }

// ========================Create a Class Strudent=========================
// class Student
// {
//     string rollNo;
//     int marks;
// public:
//     void input()
//     {
//         cout << "Enter ROll No: ";
//         cin >> rollNo;

//         cout << "Enter Marks: ";
//         cin >> marks;
//     }

//     void display()
//     {
//         cout << "Roll No is: " << rollNo << endl;
//         cout << "Marks are: " << marks << endl;
//     }
// };

// int main()
// {
//     Student s1, s2;
//     // for student 1
//     s1.input();
//     s1.display();
//     // for student 2
//     s2.input();
//     s2.display();
// }

// ========================Create a Class Bank=========================

// class Account
// {
//     int accountNumber;
//     double balance;

// public:
//     void setAccountNumber(int accNo)
//     {
//         accountNumber = accNo;
//         balance = 0;
//     }

//     void deposit(double amount)
//     {
//         balance = balance + amount;
//     }

//     void display()
//     {
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Current Balance: " << balance << endl;
//     }
// };

// int main()
// {
//     Account Ahmed;
//     int accNo;
//     double amount;
//     char choice = 'y';

//     cout << "Enter Your Account Number: ";
//     cin >> accNo;
//     Ahmed.setAccountNumber(accNo);

//     while (choice == 'y' || choice == 'Y')
//     {
//         cout << "Enter amount to deposit: ";
//         cin >> amount;
//         Ahmed.deposit(amount);

//         cout << "Deposit more? (y/n): ";
//         cin >> choice;
//     }

//     Ahmed.display();
// }

/*
==================================================
Program: Student Information Management System
Concept: Encapsulation in C++
Problem:
- Store student roll number and marks
- Validate marks (0–100)
- Use private data members
- Access data using public functions
==================================================
*/

class Student
{
    string rollNo;
    double marks;

public:
    Student()
    {
        rollNo = "";
        marks = 0;
    }
    void setRollNo(string roll)
    {
        rollNo = roll;
    }
    void setMarks(double m)
    {
        if (m >= 0 && m <= 100)
        {
            marks = m;
        }
        else
        {
            cout << "Invalid, Enter Only 0-100" << endl;
        }
    }

    string getRollNo()
    {
        return rollNo;
    }
    double getMarks()
    {
        return marks;
    }

    void display()
    {
        cout << "==============Student Detail==============" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student ahmed;
    string rollNo;
    double marks;

    cout << "Enter Your Roll No: ";
    cin >> rollNo;
    ahmed.setRollNo(rollNo);

    cout << "Enter Your Marks: ";
    cin >> marks;
    ahmed.setMarks(marks);

    cout << "Roll NO: " << ahmed.getRollNo() << endl;
    cout << "Marks: " << ahmed.getMarks() << endl;

    // OR

    ahmed.display();
}