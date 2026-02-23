#include <iostream>
#include <string>
using namespace std;

//================Basic Syntax==============
// class Base
// {
// public:
//     void show()
//     {
//         cout << "Base class method\n";
//     }
// };

// class Derived : public Base
// {

//     // additional members
// };

//================Basic Example================
// class Animal
// {
// public:
//     void sound()
//     {
//         cout << "Different Animal Sounds\n";
//     }
// };

// class Cat : public Animal
// {
// public:
//     void sound() // inherit Animal Function
//     {
//         cout << "Cat Meow\n"; // Redefinig it.
//     }
// };s

// int main()
// {
//     Cat cat;
//     cat.sound();
// }

// //================Problem 1: Easy (Person–Student Basic Inheritanc)================
// // class Person
// // {
// //     string name;

// // public:
// //     Person(string name) : name(name) {};
// //     void showName()
// //     {
// //         cout << "Name: " << name << endl;
// //     }
// // };

// // class Student : public Person
// // {
// //     int rollNo;

// // public:
// //     Student(string name, int rollNo) : Person(name), rollNo(rollNo) {};
// //     void showRollNo()
// //     {
// //         cout << "Roll No: " << rollNo << endl;
// //     }
// // };

// // int main()
// // {
// //     Student s1("Ali", 053);
// //     s1.showName();
// //     s1.showRollNo();
// // }

// //================Problem 2: Easy (Employee–Manager Salary System)================
// // class Employee
// // {
// //     double salary;

// // public:
// //     Employee() : salary(0) {};
// //     bool setSalary(double salary)
// //     {
// //         if (salary <= 0)
// //         {
// //             return false;
// //         }
// //         this->salary += salary;
// //         return true;
// //     }
// //     double getSalary()
// //     {
// //         return salary;
// //     }

// //     void Salary()
// //     {
// //         cout << "Before Total: " << salary << endl;
// //     }
// // };

// // class Manager : public Employee
// // {
// //     double bonus;

// // public:
// //     Manager() : bonus(0) {};
// //     void setBonus(double amount)
// //     {
// //         bonus += amount;
// //     }

// //     double Total()
// //     {
// //         return bonus + getSalary();
// //     }

// //     void totalSalary()
// //     {
// //         cout << "After Bonus: " << Total() << endl;
// //     }
// // };

// // int main()
// // {
// //     Manager manager;
// //     manager.setSalary(9000);
// //     manager.Salary();
// //     manager.setBonus(100);
// //     manager.totalSalary();
// // }

// //================Problem 3: Easy (Device Hierarchical Inheritance)================
// // class Device
// // {
// //     string brand;
// //     int userExperience;

// // public:
// //     Device(string brand, int userExperience) : brand(brand), userExperience(userExperience) {};
// //     void showBrand()
// //     {
// //         cout << "Brand: " << brand << endl;
// //     }
// //     void showExperience()
// //     {
// //         cout << "User Experience: " << userExperience << endl;
// //     }
// // };

// // class Laptop : public Device
// // {

// // public:
// //     Laptop(string brand, int userExperience) : Device(brand, userExperience) {};
// // };

// // class Mobile : public Device
// // {
// // public:
// //     Mobile(string brand, int userExperience) : Device(brand, userExperience) {};
// // };

// // int main()
// // {
// //     Laptop lenovo("Lenovo", 10);
// //     lenovo.showBrand();
// //     lenovo.showExperience();
// //     cout << "---------------------------\n";
// //     Mobile vivo("Vivo", 8);
// //     vivo.showBrand();
// //     vivo.showExperience();
// // }
// //================Problem 3: Easy (Device Hierarchical Inheritance)================
// class Person
// {
//     string name;

// public:
//     Person(string name) : name(name) {};
//     void showName()
//     {
//         cout << "Name: " << name << endl;
//     }
// };

// class Employee : public Person
// {
//     double salary;

// public:
//     Employee(string name) : Person(name), salary(0) {};
//     bool setSalary(double amount)
//     {
//         if (amount <= 0)
//         {
//             return false;
//         }
//         salary += amount;
//         return true;
//     }

//     double getSalary()
//     {
//         return salary;
//     }

//     void showSalary()
//     {
//         cout << "Salary: " << salary << endl;
//     }
// };

// class Developer : public Employee
// {
//     string programingLanguage;

// public:
//     Developer(string name, string programingLanguage) : Employee(name), programingLanguage(programingLanguage) {};
//     void showLanguage()
//     {
//         cout << "Programing Language: " << programingLanguage << endl;
//     }
// };

// int main()
// {
//     Developer dev("Ali", "C++");
//     dev.setSalary(90000);
//     dev.showName();
//     dev.showSalary();
//     dev.showLanguage();
// }

//================Problem 6 — Library System (Inheritance + Validation)================
// class Item
// {
//     string title;
//     bool isAvailable;

// public:
//     Item() : title("Unknown"), isAvailable(true) {};
//     Item(string title) : title(title), isAvailable(true) {}

//     bool borrowItem()
//     {
//         if (!isAvailable)
//             return false;
//         isAvailable = false;
//         return true;
//     }

//     bool returnItem()
//     {
//         if (isAvailable) // already returned
//             return false;
//         isAvailable = true;
//         return true;
//     }
//     void setTitle(string title)
//     {
//         this->title = title;
//     }

//     string getTitle() const
//     {
//         return title;
//     }
// };
// class Book : public Item
// {
//     string author;

// public:
//     Book() : author("Unknown") {};
//     Book(string title, string author) : Item(title), author(author) {};
//     void setAuthor(string author)
//     {
//         this->author = author;
//     }

//     void showDetail()
//     {
//         cout << "Book Author: " << author << endl;
//         cout << "Book Title : " << getTitle() << endl;
//     }
// };
// int main()
// {
//     string ourBooks[5] = {"OOP", "DMBS", "DISCRETE STRUCTURE", "APPLIED PHYSICS", "SOFTWARE ENGINEERING"};
//     string author[5] = {"Ali", "Hassan", "Usman", "Abdullah", "Asad"};
//     Book library[5];
//     int bookNo;
//     char choice;
//     string name;
//     cout << "===============Welcome To Our Library===============\n";
//     cout << "We Have Books\n";

//     for (int i = 0; i < 5; i++)
//     {
//         cout << i + 1 << ". " << ourBooks[i] << endl;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         library[i].setTitle(ourBooks[i]);
//         library[i].setAuthor(author[i]);
//     }

//     do
//     {
//         cout << "Enter the Book Number You Want: ";
//         cin >> bookNo;
//         if (bookNo <= 0 || bookNo > 5)
//         {
//             cout << "Invalid Input " << endl;
//         }
//         else
//         {
//             cout << "\n---------------------------\n";
//             cout << "Book Detail\n";
//             library[bookNo - 1].showDetail();
//             cout << "\n---------------------------\n";
//             do
//             {
//                 cout << "(B) Borrow\n(R) Return\n(E) Exit" << endl;
//                 cin >> choice;
//                 choice = tolower(choice);

//                 switch (choice)
//                 {
//                 case 'b':
//                     if (!library[bookNo - 1].borrowItem())
//                     {
//                         cout << "---------------------------\n";
//                         cout << "Not Available\n";
//                         cout << "---------------------------\n";
//                     }

//                     else
//                     {
//                         cout << "---------------------------\n";
//                         cout << "You Borrowed: " << library[bookNo - 1].getTitle() << endl;
//                         cout << "---------------------------\n";
//                     }
//                     break;

//                 case 'r':
//                     if (!library[bookNo - 1].returnItem())
//                     {
//                         cout << "---------------------------\n";
//                         cout << "Already Returned\n";
//                         cout << "---------------------------\n";
//                     }
//                     else
//                     {
//                         cout << "---------------------------\n";
//                         cout << "You Returned: " << library[bookNo - 1].getTitle() << endl;
//                         cout << "---------------------------\n";
//                     }
//                     break;

//                 case 'e':
//                     cout << "\n---------------------------\n\n";
//                     cout << "Exiting...\n";
//                     break;

//                 default:
//                     cout << "Invalid Choice\n";
//                     cout << "---------------------------\n";
//                 }
//             } while (choice != 'e');
//         }
//         cout << "\n---------------------------\n";
//         do
//         {
//             cout << "Any other Book You want (y/n): ";
//             cin >> choice;
//             choice = tolower(choice);

//             if (choice != 'y' && choice != 'n')
//             {
//                 cout << "\n---------------------------\n";
//                 cout << "Invalid input. Enter y or n.\n";
//                 cout << "---------------------------\n";
//             }
//         } while (choice != 'y' && choice != 'n');

//         cout << "---------------------------\n\n";
//     } while (choice != 'n');
//     cout << "GoodBye\n";
// }

//================Another Medium Example================
// class Person
// {
//     string personID, name, gender;
//     int age, contactNumber;

// public:
//     Person(string personID,
//            string name,
//            string gender,
//            int age,
//            int contactNumber) : personID(personID),
//                                 name(name),
//                                 gender(gender),
//                                 age(age),
//                                 contactNumber(contactNumber) {};

//     void getDetails()
//     {
//         cout << "ID: " << personID << endl;
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Gender: " << gender << endl;
//         cout << "Contact: " << contactNumber << endl;
//     }
// };

// class Employee : public Person
// {
//     string employeeID, department;
//     double salary;

// public:
//     Employee(string personID,
//              string name,
//              string gender,
//              int age,
//              int contactNumber,
//              string employeeID,
//              string department,
//              double salary) : Person(personID, name, gender, age, contactNumber),
//                               employeeID(employeeID),
//                               department(department),
//                               salary(salary) {};
//     double calculateSalary()
//     {
//         return salary;
//     }
// };

// class Doctor : public Employee
// {
//     string specialization, qualification;
//     double consultationFee;

// public:
//     Doctor(string personID,
//            string name,
//            string gender,
//            int age,
//            int contactNumber,
//            string employeeID,
//            string department,
//            double salary,
//            string specialization,
//            string qualification,
//            double consultationFee) : Employee(personID, name, gender, age, contactNumber, employeeID, department, salary),
//                                      specialization(specialization),
//                                      qualification(qualification),
//                                      consultationFee(consultationFee) {};

//     void diagnosePatient()
//     {
//         cout << "Doctor is diagnosing patient..." << endl;
//     }

//     void prescribeMedicine()
//     {
//         cout << "Doctor prescribed medicine." << endl;
//     }
// };

// class Nurse : public Employee
// {
//     string shift, wardAssign;

// public:
//     Nurse(string personID,
//           string name,
//           string gender,
//           int age,
//           int contactNumber,
//           string employeeID,
//           string department,
//           double salary,
//           string shift,
//           string wardAssign) : Employee(personID, name, gender, age, contactNumber, employeeID, department, salary),
//                                shift(shift),
//                                wardAssign(wardAssign) {};
//     void assistDoctor()
//     {
//         cout << "Nurse assisting doctor." << endl;
//     }

//     void monitorPatient()
//     {
//         cout << "Nurse monitoring patient." << endl;
//     }
// };

// class Patient : public Person
// {
//     string patientID, disease, admissionDate;
//     int roomNumber;

// public:
//     Patient(string personID,
//             string name,
//             string gender,
//             int age,
//             int contactNumber,
//             string patientID,
//             string disease,
//             string admissionDate,
//             int roomNumber) : Person(personID, name, gender, age, contactNumber),
//                               patientID(patientID),
//                               disease(disease),
//                               admissionDate(admissionDate),
//                               roomNumber(roomNumber) {};
//     void getMedicalHistory()
//     {
//         cout << "Disease: " << disease << endl;
//         cout << "Admission Date: " << admissionDate << endl;
//         cout << "Room No: " << roomNumber << endl;
//     }
// };
// class Appointment
// {
//     string appointmentID;
//     string date;
//     string time;

// public:
//     Appointment(string id, string d, string t)
//         : appointmentID(id), date(d), time(t) {}

//     void scheduleAppointment()
//     {
//         cout << "Appointment Scheduled on " << date << " at " << time << endl;
//     }

//     void cancelAppointment()
//     {
//         cout << "Appointment Cancelled." << endl;
//     }
// };

// class Bill
// {
//     string billID;
//     float treatmentCharges;
//     float medicineCharges;

// public:
//     Bill(string id, float t, float m)
//         : billID(id), treatmentCharges(t), medicineCharges(m) {}

//     void generateBill()
//     {
//         float total = treatmentCharges + medicineCharges;
//         cout << "Total Bill: " << total << endl;
//     }
// };

// int main()
// {
//     Doctor doctor("P001", "Ali", "Male", 40, 03001234567,
//                   "E101", "Cardiology", 80000,
//                   "Heart Specialist", "MBBS", 2000);

//     Patient patient("P002", "Ahmed", "Male", 25, 03001234567,
//                     "PT201", "Fever", "05-02-2026", 12);

//     Appointment appointment("A001", "05-02-2026", "10:00 AM");

//     Bill bill("B001", 5000, 1500);

//     cout << "--- Doctor Details ---" << endl;
//     doctor.getDetails();
//     doctor.diagnosePatient();
//     doctor.prescribeMedicine();

//     cout << "\n--- Patient Details ---" << endl;
//     patient.getDetails();
//     patient.getMedicalHistory();

//     cout << "\n--- Appointment ---" << endl;
//     appointment.scheduleAppointment();

//     cout << "\n--- Bill ---" << endl;
//     bill.generateBill();

//     return 0;
// }
