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
class Item
{
    string title;
    bool isAvailable;
    bool isReturn;

public:
    Item(string title) : title(title), isAvailable(true), isReturn(true) {};
    bool borrowItem(string title)
    {
        if (!isAvailable)
        {
            return false;
        }
        isAvailable = false;
        isReturn = false;
        return true;
    }
    string getTitle()
    {
        return title;
    }

    bool returnItem(string title)
    {
        if (isReturn != false && isAvailable != false)
        {
            return false;
        }
        isAvailable = true;
        isReturn = true;
        return true;
    }
};
class Book : public Item
{
    string author;

public:
    Book(string title, string author) : Item(title), author(author) {};
    void showDetail()
    {
        cout << "Book Author: " << author << endl;
        cout << "Book Title : " << getTitle() << endl;
    }
};

int main()
{
    Book b1("OOP", "Thomas");
    char choice;
    cout << "What Do You Want: ";
    do
    {
        cout << "(B) Borrow\n(R) Return \n(e) Exit" << endl;
        cin >> choice;
        choice = tolower(choice);
        switch (choice)
        {
        case 'b':
            if (!b1.borrowItem("OOP"))
            {
                cout << "Not Avaliable\n";
            }
            else
            {
                cout << "You Borrowed: " << b1.getTitle() << endl;
            }
            break;
        case 'r':
            if (!b1.returnItem("OOP"))
            {
                cout << "Someone Already Return this" << endl;
            }
            else
            {
                cout << "You Return: " << b1.getTitle() << endl;
            }
            break;
        case 'e':
            cout << "Exiting........." << endl;
            break;
        default:
            cout << "Invalid Choice, Please choose (b,r, or e)" << endl;
            break;
        }
    } while (choice != 'e');

    cout << "Final Result" << endl;
    b1.showDetail();
}
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
