#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ================================Chapter 14- Problem 1==========================================
// class Participant
// {
//     string firstName = "Unknown", lastName = "Unknown", organization = "Unknown";
//     int serialNumber;
//     static int TotalCandidates;

// public:
//     Participant() { serialNumber = ++TotalCandidates; }

//     Participant(const string &fName, const string &lName, const string &organization) : Participant()
//     {
//         setFirstName(fName);
//         setLastName(lName);
//         setOrganization(organization);
//     }

//     bool setFirstName(const string &fname)
//     {
//         if (!fname.empty() && fname != " ")
//         {
//             this->firstName = fname;
//             return true;
//         }
//         return false;
//     }

//     bool setLastName(const string &lname)
//     {
//         if (!lname.empty() && lname != " ")
//         {
//             this->lastName = lname;
//             return true;
//         }
//         return false;
//     }

//     bool setOrganization(const string &organization)
//     {
//         if (!organization.empty() && organization != " ")
//         {
//             this->organization = organization;
//             return true;
//         }
//         return false;
//     }

//     string getFirstName() const { return firstName; }
//     string getLastName() const { return lastName; }
//     string getOrganization() const { return organization; }

//     int getMySerial() const { return serialNumber; }
//     static int getTotalCandidates();

//     void display() const
//     {
//         cout << "Serial Number: " << serialNumber << endl;
//         cout << "First Name: " << firstName << endl;
//         cout << "Last Name: " << lastName << endl;
//         cout << "Organization: " << organization << endl;
//     }
// };

// int Participant::TotalCandidates = 0;
// int Participant::getTotalCandidates() { return TotalCandidates; }

// int main()
// {

//     vector<Participant> participants;
//     int serial;

//     for (int i = 0; i < 3; i++)
//     {
//         Participant person("Ali", "Hassan", "LAPD");
//         participants.push_back(person);
//     }

//     for (auto &p : participants)
//     {
//         cout << "----------------------------------\n";
//         p.display();
//         cout << "----------------------------------\n\n";
//     }

//     Participant p;
//     string name;
//     do
//     {
//         cout << "Enter Name: ";
//         getline(cin, name);
//     } while (!p.setFirstName(name)); // this is just to show, function working properly...

//     cout << "Total Candidaties: " << Participant::getTotalCandidates() << endl;
//     return 0;
// }

// ================================Chapter 14- Problem 2==========================================

// class DayOfYear
// {

//     int day = 0;
//     static string months[12];
//     static int daysInMonths[12];

// public:
//     DayOfYear() {};

//     DayOfYear(int day)
//     {
//         setDay(day);
//     }

//     void setDay(int d)
//     {
//         if (d > 0)
//         {
//             day = (d - 1) % 365 + 1;
//         }
//         else
//             day = 1;
//     }

//     int getDay() const { return day; }

// void printDay()
// {
//     int total = 0;
//     int i = 0;
//     while (i >= 0 && i < 12)
//     {

//         for (int j = 1; j <= daysInMonths[i]; j++)
//         {
//             total++;

//             if (day == total)
//             {
//                 cout << months[i] << " " << j << endl;
//             }
//         }
//         i++;
//     }
// }

// Another Way
//     void print() const
//     {
//         int remainingDays = day;

//         int i = 0;
//         while (remainingDays > daysInMonths[i])
//         {
//             remainingDays -= daysInMonths[i];
//             i++;
//         }

//         cout << months[i] << " " << remainingDays << endl;
//     }

//     DayOfYear &operator++()
//     {
//         day++;
//         return *this;
//     }

//     DayOfYear operator++(int)
//     {
//         DayOfYear temp = *this;
//         ++(*this);
//         return temp;
//     }

//     DayOfYear &operator--()
//     {
//         day--;
//         return *this;
//     }

//     DayOfYear operator--(int)
//     {
//         DayOfYear temp = *this;
//         --(*this);
//         return temp;
//     }

//     friend ostream &operator<<(ostream &out, const DayOfYear &obj)
//     {
//         cout << obj.day << " ";
//         return out;
//     }
// };

// string DayOfYear::months[12] = {"January", "February", "March", "April",
//                                 "May", "June", "July", "August",
//                                 "September", "October", "November", "December"};
// int DayOfYear::daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// int main()
// {

//     DayOfYear d;

//     d.setDay(32);
//     d.print();

//     return 0;
// }

// void printHello();

// void printHello()
// {
//     cout << "Hello, World!" << endl;
// }

// // what the difference between above 2 PrintHello functions?
// // The first declaration of printHello() is a function prototype,
// // which tells the compiler that there is a function named printHello that takes no parameters and returns void.
// // It does not provide the implementation of the function.
// // The second definition of printHello() is the actual implementation of the function.

// //------------------------------------------------------------------------

// class A
// {
//     int x, y, z;
//     double a, b, c;

// public:
//     A() { cout << "Constructor" << endl; }
//     ~A() { cout << "Destructor" << endl; }

//     // How to define Function outside the class?
//     void display() const; // function declaration
// };

// void A::display() const // function definition outside the class
// {
//     cout << "This is a member function defined outside the class." << endl;
// }

// class B
// {
// };

// int main()
// {
//     {
//         A a;

//         {
//             A b;
//         }
//         cout << "What is the Output of this Code?" << endl;

//         // The Output Will be:
//         // constructor
//         // consturctor
//         // desctructor
//         // What is the output of this code?
//         // desctructor // this is for object a, which is destroyed after the inner block ends and before the main function ends.
//     }

//     B obj;
//     cout << "\n\n----------------------------------------------------\n";
//     cout << "Size of B: " << sizeof(obj) << " bytes" << endl;
//     // The size of an empty class in C++ is typically 1 byte.
//     // This is because even though the class has no data members, it must have a unique address in memory.
//     // Therefore, the compiler allocates at least 1 byte for each instance of the class to ensure
//     // that each object has a distinct address. So, the output will be:

//     //===============================================================================================
//     // cout << "Size of object a: " << sizeof(a) << " bytes" << endl;
//     // the size is 40 bytes because it can varry based on the system and compiler,
//     // but typically it will be 40 bytes (3 ints = 12 bytes + 3 doubles = 24 bytes + possible padding).
//     // The actual size may vary due to padding and alignment requirements of the system.
//     // what if we had 4 int and 3 doubles? the size still be 40

//     return 0;
// }

// class A
// {
//     int number;

// public:
//     A(int num = 0) : number(num) {}

//     virtual void display() const;
// };

// void A::display() const
// {
//     cout << "Number: " << number << endl;
// }

// class B : public A
// {
// public:
//     void display() const
//     {
//         cout << "Derived Class\n";
//     }
// };

// main()
// {
//     A a1;    // default constructor, number will be initialized to 0
//     A a2(5); // parameterized constructor, number will be initialized to 5

//     a1.display(); // Output: Number: 0
//     a2.display(); // Output: Number: 5

//     A *ptr = new B;
//     ptr->display();
// }

// class Base
// {
// public:
//     virtual void show() const { cout << "Base\n"; }

//     Base() { cout << "A"; }
//     ~Base() { cout << "B"; }
// };
// class Derived : public Base
// {
// public:
//     void show() { cout << "Derived\n"; }

//     Derived() { cout << "C"; }
//     ~Derived() { cout << "D"; }
// };

// int main()
// {
//     Derived obj1, obj2;

//     Base &ref = obj1;
//     // ref.show();
// }

// class Base
// {
// public:
//     virtual void show() const { cout << "Base\n"; }
// };
// class Derived : public Base
// {
// public:
//     void show() const { cout << "Derived\n"; }
// };

// int main()
// {
//     Derived obj1;

//     Base &ref = obj1;
//     ref.show();
// }

// class Animal
// {
// public:
//     virtual void sound() const = 0; // this is a pure virtual function, making Animal an abstract class
// };

// class Dog : public Animal
// {
// public:
//     void sound() const
//     {
//         cout << "Dog Barks" << endl;
//     }
// };

// class PertianDog : public Dog
// {
// public:
//     void sound() const
//     {
//         cout << "Pertian Dog Barks" << endl;
//     }
// };

// int main()
// {
//     Dog dog;
//     dog.sound(); // Output: Dog Barks

//     PertianDog pertianDog;
//     pertianDog.sound(); // Output: Pertian Dog Barks

//     cout << "\n\n---------------------------------------------\n";
//     cout << "Using Base Class Pointer to call Derived Class Function:\n";
//     cout << "---------------------------------------------\n";
//     Dog *ptr;
//     ptr = &dog;
//     ptr->sound(); // Output: Dog Barks

//     ptr = &pertianDog;
//     ptr->sound(); // Output: Pertian Dog Barks
//                   // why dog calling pertianDog even when ptr is of type Dog*?
//                   // because the sound() function is declared as virtual in the base class (Animal),
//                   // it allows for dynamic dispatch. When we call ptr->sound(),
//                   // the program determines at runtime which version of the sound()
//                   // function to call based on the actual type of the object that ptr is pointing to.
//                   // So, when ptr points to a Dog object, it calls Dog's sound() function,
//                   //  and when ptr points to a PertianDog object, it calls PertianDog's sound() function.
//                   //  This is a fundamental feature of polymorphism in C++.

//     // Important Note: We cannot create an object of the abstract class (Animal) because it contains a pure virtual function.
//     // Animal obj; // This will cause a compilation error because we cannot instantiate an abstract class.

//     // but we can create pointers;
//     Animal *animalPtr = &dog; // This is allowed, but we cannot call animalPtr->sound() because it is a pure virtual function.
//     animalPtr->sound();       // This will call Dog's sound() function because of dynamic dispatch.

//     // Derived class cannot hold the address of Parrent class
//     // so Dog dogPtr = &animal is not allowed
//     return 0;
// }