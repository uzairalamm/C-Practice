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
//     getline(cin, name);
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

// ==================== Problem 5: Simple Counter ====================

// class Counter
// {
//     int count;

// public:
//     Counter() : count(0) {};
//     void increment()
//     {
//         count++;
//     }

//     bool decrement()
//     {
//         if (count > 0)
//         {
//             count--;
//             return true;
//         }
//         return false;
//     }

//     int getCount()
//     {
//         return count;
//     }

//     void display()
//     {
//         cout << "Count is: " << count << endl;
//     }
// };

// int main()
// {
//     Counter counter;
//     int n;

//     cout << "How much You want to increment: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         counter.increment();
//         cout << counter.getCount() << " ";
//     }
//     cout << endl;

//     counter.display();

//     cout << "How much You want to decrement: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (!counter.decrement())
//         {
//             cout << "Cannot Go Any Futher, Count is " << counter.getCount();
//             break;
//         }
//         cout << counter.getCount() << " ";
//     }
//     cout << endl;
//     counter.display();
// }

// ==================== Problem 5: Wallet ====================
// class Wallet
// {
//     double money;

// public:
//     Wallet() : money(0) {};
//     Wallet &deposit(double amount);
//     double getBalance() const;
//     void display();
// };

// Wallet &Wallet::deposit(double amount)
// {
//     if (amount > 0)
//     {
//         money += amount;
//     }
//     else
//     {
//         cout << "Invalid deposit amount" << endl;
//     }
//     return *this;
// }

// double Wallet::getBalance() const
// {
//     return money;
// }

// Wallet bonus(Wallet wallet)
// {
//     wallet.deposit(100);
//     return wallet;
// }

// void Wallet::display()
// {
//     cout << "Balance: " << money << endl;
// }

// int main()
// {
//     Wallet ali;
//     ali.deposit(90).deposit(90).deposit(90);
//     ali.display();
//     ali = bonus(ali);
//     cout << "After Bonus-------" << endl;
//     ali.display();
// }

// Using Getters, Object Passing, Returning Objects &Chaining
// ==================== Problem 5: Bank Account ====================
// class Account
// {
//     string accNo;
//     double balance;

// public:
//     Account(string accNo) : accNo(accNo), balance(0) {};
//     Account &deposit(double amount);
//     Account &withdraw(double amount);
//     string getaccNo();
//     double getBalance();
//     void display();
// };

// Account &Account::deposit(double amount)
// {
//     if (amount < 0)
//     {
//         cout << "Invalid deposit amount" << endl;
//     }
//     else
//     {
//         balance += amount;
//     }
//     return *this;
// }

// Account &Account::withdraw(double amount)
// {
//     if (amount < 0)
//     {
//         cout << "Invalid Withdraw amount" << endl;
//     }
//     else if (amount > balance)
//     {
//         cout << "Insufficient balance" << endl;
//     }
//     else
//     {
//         balance -= amount;
//     }
//     return *this;
// }

// string Account::getaccNo()
// {
//     return accNo;
// }
// double Account::getBalance()
// {
//     return balance;
// }

// void Account::display()
// {
//     cout << "Account Number: " << accNo << endl;
//     cout << "Balance: " << balance << endl;
// }

// // returning obj from function
// Account updateBalance(Account account)
// {
//     account.deposit(90);
//     return account;
// }

// // passing obj to function
// void show(Account account)
// {
//     account.display();
// }

// int main()
// {

//     string accNo;
//     cout << "Enter Account Number: ";
//     cin >> accNo;

//     Account bankAccount(accNo);

//     bankAccount.deposit(1000).withdraw(200).deposit(300);

//     cout << "\nAccount details (passed to function):\n";
//     show(bankAccount);

//     bankAccount = updateBalance(bankAccount);

//     cout << "\nFinal Account Details:\n";
//     bankAccount.display();

//     return 0;
// }

// ==================== Problem 6: Easy using (Getter + Utility) ====================
// class student
// {
//     string name;
//     double marks;

// public:
//     student(string name, double marks) : name(name), marks(marks) {};
//     void setMarks(double marks)
//     {
//         this->marks = marks;
//     }
//     string getName();
//     double getMarks();
//     void display();
// };

// string student::getName()
// {
//     return name;
// }
// double student::getMarks()
// {
//     return marks;
// }
// void student::display()
// {
//     cout << "Name:  " << name << endl;
//     cout << "Marks: " << marks << endl;
// }

// int main()
// {
//     student st("ali", 89);
//     st.display();
//     st.setMarks(90);
//     cout << "Updated Marks: " << st.getMarks() << endl;
// }

// ==================== Problem 7: Easy (Pass Object to Function) ====================
// class Book
// {
//     string title;
//     double price;

// public:
//     Book(string title, double price) : title(title), price(price) {};
//     void setName(string title)
//     {
//         this->title = title;
//     }
//     void setPrice(double price)
//     {
//         this->price = price;
//     }
//     string getName()
//     {
//         return title;
//     }
//     double getPrice()
//     {
//         return price;
//     }
//     void display()
//     {
//         cout << "Title: " << title << endl;
//         cout << "Price: " << price << endl;
//     }
// };

// void show(Book book)
// {
//     book.display();
// }

// int main()
// {
//     Book b1("Database System", 900);
//     cout << "Displaying result outside Function" << endl;
//     show(b1);
//     b1.setPrice(890);
//     cout << "Updated Price: " << b1.getPrice() << endl;
// }

// ==================== Problem 8: Easy (Return Object from Function) ====================

// class Wallet
// {
//     string id;
//     double money;

// public:
//     Wallet(string id) : id(id), money(0) {};
//     Wallet &deposit(double amount);
//     double getBalance();
//     string getID();
//     void display();
// };

// double Wallet::getBalance()
// {
//     return money;
// }
// string Wallet::getID()
// {
//     return id;
// }

// Wallet &Wallet::deposit(double amount)
// {
//     if (amount > 0)
//     {
//         money += amount;
//     }
//     else
//     {
//         cout << "invalid Deposit Amount" << endl;
//     }
//     return *this;
// }

// Wallet bonus(Wallet person)
// {
//     if (person.getBalance() < 900)
//     {
//         person.deposit(200);
//     }
//     return person;
// }

// void Wallet::display()
// {

//     cout << "Id:      " << id << endl;
//     cout << "Balance: " << money << endl;
// }
// int main()
// {
//     Wallet person("990hhh");
//     person.deposit(999);
//     cout << "Before Bonus: " << endl;
//     person.display();
//     person = bonus(person);
//     cout << "After Bonus: " << endl;
//     person.display();
// }

// ==================== Problem 9: Car (constructor overloading concept)====================
// class Car
// {
//     string brand;
//     float speed;

// public:
//     Car()
//     {
//         brand = "Unknown";
//         speed = 0;
//     }
//     Car(string brand, float speed) : brand(brand), speed(speed) {};
//     void display()
//     {
//         cout << "Car Brand: " << brand << endl;
//         cout << "Car Speed: " << speed << endl;
//         cout << "-----------------\n";
//     }
// };

// int main()
// {
//     Car car1;
//     Car car("toyota", 150);
//     car1.display();
//     car.display();
// }

// ==================== Problem 9: Car (Destructor basic)====================
// class Car
// {
//     string brand;

// public:
//     Car(string brand) : brand(brand) { cout << brand << "Car is created" << endl; };
//     ~Car()
//     {
//         cout << brand << "car Ended/destroyed" << endl;
//     }
// };
// int main()
// {
//     Car car1("Toyota");
//     cout << "What You like?" << endl;
//     Car car2("fast");
// }

// ==================== Problem 10: Basic Problem====================
// class Device
// {
//     string name;
//     float price;

// public:
//     Device() : name("Unknown"), price(0) {};
//     Device(string name, float price) : name(name), price(price) {};
//     ~Device()
//     {
//         cout << name << " Disconnected" << endl;
//     }

//     void display();
// };

// void Device::display()
// {
//     cout << "Name:  " << name << endl;
//     cout << "Price: " << price << endl;
//     cout << "-----------------\n";
// }

// int main()
// {
//     Device headphone;
//     Device charger("apple", 900.67);
//     headphone.display();
//     charger.display();
// }

// ==================== Problem 10: Student Record System====================
// class Student
// {
//     int rollNo;
//     float marks;

// public:
//     Student() : rollNo(0), marks(0) {};
//     void setRollNo(int rollNO)
//     {
//         this->rollNo = rollNO;
//     }
//     bool setMarks(float marks)
//     {
//         if (marks < 0 || marks > 100)
//         {
//             return false;
//         }
//         else
//         {
//             this->marks = marks;
//             return true;
//         }
//     }
//     float getMarks()
//     {
//         return marks;
//     }

//     void display();
// };

// void Student::display()
// {
//     cout << "Roll No: " << rollNo << endl;
//     cout << "Marks  : " << marks << endl;
//     cout << "----------------------\n";
// }

// int main()
// {
//     int rollNO;

//     Student student[5];
//     cout << "Enter Roll and Marks of 5 Students\n";
//     for (int i = 0; i < 5; i++)
//     {
//         float marks;
//         bool valid = true;
//         cout << "Student " << i + 1 << endl;
//         cout << "Roll NO: ";
//         cin >> rollNO;
//         student[i].setRollNo(rollNO);
//         do
//         {
//             cout << "Marks: ";
//             cin >> marks;
//             if (!student[i].setMarks(marks))
//             {
//                 valid = false;
//                 cout << "Please Enter Between (1-100)" << endl;
//             }
//             else
//             {
//                 valid = true;
//             }
//         } while (!valid);
//     }

//     cout << "==============Final Result============" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Student " << i + 1 << endl;
//         student[i].display();
//     }
// }

// ==================== Problem 11: Bank Account System====================
// class BankAccount
// {
//     string accNo;
//     double balance;

// public:
//     BankAccount(string accNo) : accNo(accNo), balance(0) {};
//     bool deposit(double amount)
//     {
//         if (amount < 0)
//         {
//             return false;
//         }
//         else
//         {
//             balance += amount;
//             return true;
//         }
//     }

//     void withdraw(double amount)
//     {
//         if (amount < 0)
//         {
//             cout << "Invalid withdraw Amount" << endl;
//         }
//         else if (amount > balance)
//         {
//             cout << "Insufficiant Amount" << endl;
//         }
//         else
//         {
//             balance -= amount;
//         }
//     }

//     double getBalance()
//     {
//         return balance;
//     }

//     void display();
// };

// void BankAccount::display()
// {
//     cout << "Account NO: " << accNo << endl;
//     cout << "Balance   : " << balance << endl;
//     cout << "----------------------\n";
// }

// int main()
// {
//     string accNo;
//     char choice;
//     cout << "Enter Account Number: ";
//     cin >> accNo;
//     BankAccount person(accNo);
//     do
//     {
//         double amount = 0;
//         cout << "You Want to\n(d)Deposit\n(w)withdraw\n(e)exit\n";
//         bool valid = false;
//         cin >> choice;
//         choice = tolower(choice);
//         switch (choice)
//         {
//         case 'd':
//             while (!valid)
//             {
//                 cout << "How Much: ";
//                 cin >> amount;
//                 if (!person.deposit(amount))
//                 {
//                     cout << "Invalid Amount -- Try again" << endl;
//                     valid = false;
//                 }
//                 else
//                 {
//                     valid = true;
//                 }
//             }
//             cout << "Display Balance: " << person.getBalance() << endl;
//             cout << "----------------------\n";
//             break;

//         case 'w':
//             cout << "How Much: ";
//             cin >> amount;
//             person.withdraw(amount);
//             cout << "Display Balance: " << person.getBalance() << endl;
//             cout << "----------------------\n";
//             break;

//         case 'e':
//             cout << "Exiting --- Goodbye" << endl;
//             cout << "----------------------\n";
//             break;

//         default:
//             cout << "Please Only Choose b/t (d,w,e)" << endl;
//             break;
//         }
//     } while (choice != 'e');
//     cout << "===========Final Result=============" << endl;
//     person.display();
// }

// ==================== Problem 11.2: Bank Account System (improved Version)====================
// class BankAccount
// {
//     string accountNumber;
//     double balance;

// public:
//     BankAccount(string accountNumber) : accountNumber(accountNumber), balance(0) {};
//     bool deposit(double amount)
//     {
//         if (amount <= 0)
//         {
//             return false;
//         }
//         balance += amount;
//         return true;
//     }

//     bool withdraw(double amount)
//     {
//         if (amount <= 0 || amount > balance)
//         {
//             return false;
//         }
//         balance -= amount;
//         return true;
//     }

//     double getBalance() const
//     {
//         return balance;
//     }

//     void display() const
//     {
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance       : " << balance << endl;
//         cout << "------------------------------------\n";
//     }
// };

// int main()
// {
//     char choice;
//     string accountNumber;
//     cout << "Enter Account Number: ";
//     cin >> accountNumber;
//     BankAccount person(accountNumber);

//     do
//     {
//         double amount;
//         cout << "Want to:\n(d)Deposit\n(w)Withdraw\n(e)Exit" << endl;
//         cin >> choice;
//         choice = tolower(choice);

//         switch (choice)
//         {
//         case 'd':
//             cout << "How Much: ";
//             cin >> amount;
//             if (!person.deposit(amount))
//             {
//                 cout << "Insufficiant Amount" << endl;
//                 cout << "------------------------------------\n";
//             }
//             else
//             {
//                 cout << "Account Balance is: " << person.getBalance() << endl;
//                 cout << "------------------------------------\n";
//             }
//             break;

//         case 'w':
//             cout << "How Much: ";
//             cin >> amount;
//             if (!person.withdraw(amount))
//             {
//                 cout << "Insufficiant Amount" << endl;
//                 cout << "------------------------------------\n";
//             }
//             else
//             {
//                 cout << "Account Balance is: " << person.getBalance() << endl;
//                 cout << "------------------------------------\n";
//             }
//             break;

//         case 'e':
//             cout << "Exiting.....GoodBye" << endl;
//             break;
//         default:
//             cout << "Please choose only (d, w, e)\n";
//             cout << "------------------------------------\n";
//             break;
//         }
//     } while (choice != 'e');
//     cout << "===========FINAL RESULT===============\n";
//     person.display();
// }

// ==================== Problem 12: Employee Salary Manager====================
class Employee
{
    string id;
    double salary;

public:
    Employee(string id) : id(id), salary(0) {};

    bool addSalary(double amount)
    {
        if (amount <= 0)
        {
            return false;
        }
        salary += amount;
        return true;
    }

    bool deductSalary(double amount)
    {
        if (amount <= 0 || amount > salary)
        {
            return false;
        }
        salary -= amount;
        return true;
    }

    double getSalary() const
    {
        return salary;
    }

    void display() const
    {
        cout << "Employee ID    : " << id << endl;
        cout << "Employee Salary: " << salary << endl;
        cout << "-------------------------------\n";
    }
};

void bonus(Employee &person)
{
    person.addSalary(900);
}

int main()
{
    Employee ali("ali0982");
    ali.addSalary(9000);
    ali.deductSalary(90);
    ali.display();

    bonus(ali);
    cout << "After Bonus     " << endl;
    cout << "Updated Salary: " << ali.getSalary() << endl;
}
