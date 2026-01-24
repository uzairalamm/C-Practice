#include <iostream>
#include <string>
#include <vector>
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

// class Student
// {
//     string rollNo;
//     double marks;

// public:
//     Student()
//     {
//         rollNo = "";
//         marks = 0;
//     }
//     void setRollNo(string roll)
//     {
//         rollNo = roll;
//     }
//     void setMarks(double m)
//     {
//         if (m >= 0 && m <= 100)
//         {
//             marks = m;
//         }
//         else
//         {
//             cout << "Invalid, Enter Only 0-100" << endl;
//         }
//     }

//     string getRollNo()
//     {
//         return rollNo;
//     }
//     double getMarks()
//     {
//         return marks;
//     }

//     void display()
//     {
//         cout << "==============Student Detail==============" << endl;
//         cout << "Roll No: " << rollNo << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main()
// {
//     Student ahmed;
//     string rollNo;
//     double marks;

//     cout << "Enter Your Roll No: ";
//     cin >> rollNo;
//     ahmed.setRollNo(rollNo);

//     cout << "Enter Your Marks: ";
//     cin >> marks;
//     ahmed.setMarks(marks);

//     cout << "Roll NO: " << ahmed.getRollNo() << endl;
//     cout << "Marks: " << ahmed.getMarks() << endl;

//     // OR

//     ahmed.display();
// }

// ===== Problem 2: Multiple Students =====

// class Student
// {
//     string name;
//     string rollNo;
//     double marks;
//     bool setmarks;

// public:
//     // Constructor
//     Student()
//     {
//         name = "";
//         rollNo = "";
//         marks = 0;
//         setmarks = false;
//     }

//     // Setters
//     void setName(string n)
//     {
//         name = n;
//     }
//     void setRollNo(string roll)
//     {
//         rollNo = roll;
//     }
//     void setMarks(double m)
//     {
//         if (setmarks == true)
//         {
//             cout << "Marks already set";
//             return;
//         }

//         if (m >= 0 && m <= 100)
//         {
//             marks = m;
//             setmarks = true;
//         }
//         else
//         {
//             cout << "Please Enter between(0-100)" << endl;
//         }
//     }

//     // Getters
//     string getName()
//     {
//         return name;
//     }
//     string getRollNo()
//     {
//         return rollNo;
//     }
//     double getMarks()
//     {
//         return marks;
//     }

//     bool isPassed()
//     {
//         if (marks >= 40)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     // Display
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "ROll No: " << rollNo << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main()
// {
//     int numOfStudent;
//     string name, rollNo;
//     double marks;
//     cout << "How many Students Data you want to Enter: ";
//     cin >> numOfStudent;
//     cin.ignore();
//     Student st[numOfStudent];

//     cout << "Enter the Name, Roll No, and Marks of " << numOfStudent << " Students: ";
//     for (int i = 0; i < numOfStudent; i++)
//     {
//         cout << i + 1 << "." << endl;
//         cout << "Name: ";
//         getline(cin, name);
//         st[i].setName(name);

//         cout << "Roll No: ";
//         cin >> rollNo;
//         st[i].setRollNo(rollNo);

//         cout << "Marks: ";
//         cin >> marks;
//         cin.ignore();
//         st[i].setMarks(marks);
//     }

//     cout << "===============Display Result===============" << endl;
//     for (int i = 0; i < numOfStudent; i++)
//     {
//         bool result;
//         cout << i + 1 << "." << endl;
//         st[i].display();

//         result = st[i].isPassed();
//         if (result)
//         {
//             cout << "You Pass" << endl;
//         }
//         else
//         {
//             cout << "You fail, need improvement" << endl;
//         }
//     }
// }

// ==================== Problem 3: Bank Account system. ====================

// class Account
// {
// private:
//     int accountNumber;
//     double balance;

// public:
//     Account()
//     {
//         accountNumber = 0;
//         balance = 0;
//     }

//     void setAccountNumber(int accNo)
//     {
//         accountNumber = accNo;
//     }

//     bool deposit(double amount)
//     {
//         if (amount <= 0)
//             return false;

//         balance += amount;
//         return true;
//     }

//     bool withdraw(double amount)
//     {
//         if (amount <= 0 || amount > balance)
//             return false;

//         balance -= amount;
//         return true;
//     }

//     double getBalance()
//     {
//         return balance;
//     }

//     void display()
//     {
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main()
// {
//     Account ahmed;
//     int accNo;
//     double amount;
//     char choice;

//     cout << "Enter Account Number: ";
//     cin >> accNo;
//     ahmed.setAccountNumber(accNo);

//     do
//     {
//         cout << "\nDeposit (d) | Withdraw (w) | Exit (e): ";
//         cin >> choice;
//         choice = tolower(choice);

//         if (choice == 'd')
//         {
//             cout << "Enter amount to deposit: ";
//             cin >> amount;

//             if (!ahmed.deposit(amount))
//                 cout << "Invalid deposit amount!" << endl;
//         }
//         else if (choice == 'w')
//         {
//             cout << "Enter amount to withdraw: ";
//             cin >> amount;

//             if (!ahmed.withdraw(amount))
//                 cout << "Transaction failed!" << endl;
//         }

//     } while (choice != 'e');

//     ahmed.display();
//     cout << "Goodbye!" << endl;
// }

// ==================== Problem 4: student Detail system. ====================

// class Student
// {
//     string name;
//     int rollNo;
//     float marks[3];

// public:
//     Student(string n, int r, float m[3])
//     {
//         name = n;
//         rollNo = r;
//         for (int i = 0; i < 3; i++)
//         {
//             marks[i] = m[i];
//         }
//     }

//     float getTotal()
//     {
//         float total = 0;
//         for (int i = 0; i < 3; i++)
//         {
//             total += marks[i];
//         }
//         return total;
//     }

//     float getAvg()
//     {
//         float average = getTotal() / 3;
//         return average;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << rollNo << endl;
//         for (int i = 0; i < 3; i++)
//         {
//             cout << "Subject " << i + 1 << ": " << marks[i] << endl;
//         }

//         cout << "Total are: " << getTotal() << endl;
//         cout << "Average is: " << getAvg() << endl;
//     }
// };

// int main()
// {
//     string name;
//     float marks[3];
//     int rollNo;

//     cout << "Enter Your Name: ";
//     cin >> name;
//     cout << "Enter Your Roll No: ";
//     cin >> rollNo;

//     cout << "Enter the marks of three Subjects" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> marks[i];
//     }

//     cout << "================Display Result=====================" << endl;

//     Student st1(name, rollNo, marks);
//     st1.display();
// }
