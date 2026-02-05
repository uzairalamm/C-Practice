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
// };

// int main()
// {
//     Cat cat;
//     cat.sound();
// }

//================Another Basic Example================
class Person
{
    string personID, name, gender;
    int age, contactNumber;

public:
    Person(string personID,
           string name,
           string gender,
           int age,
           int contactNumber) : personID(personID),
                                name(name),
                                gender(gender),
                                age(age),
                                contactNumber(contactNumber) {};

    void getDetails()
    {
        cout << "ID: " << personID << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Contact: " << contactNumber << endl;
    }
};

class Employee : public Person
{
    string employeeID, department;
    double salary;

public:
    Employee(string personID,
             string name,
             string gender,
             int age,
             int contactNumber,
             string employeeID,
             string department,
             double salary) : Person(personID, name, gender, age, contactNumber),
                              employeeID(employeeID),
                              department(department),
                              salary(salary) {};
    double calculateSalary()
    {
        return salary;
    }
};

class Doctor : public Employee
{
    string specialization, qualification;
    double consultationFee;

public:
    Doctor(string personID,
           string name,
           string gender,
           int age,
           int contactNumber,
           string employeeID,
           string department,
           double salary,
           string specialization,
           string qualification,
           double consultationFee) : Employee(personID, name, gender, age, contactNumber, employeeID, department, salary),
                                     specialization(specialization),
                                     qualification(qualification),
                                     consultationFee(consultationFee) {};

    void diagnosePatient()
    {
        cout << "Doctor is diagnosing patient..." << endl;
    }

    void prescribeMedicine()
    {
        cout << "Doctor prescribed medicine." << endl;
    }
};

class Nurse : public Employee
{
    string shift, wardAssign;

public:
    Nurse(string personID,
          string name,
          string gender,
          int age,
          int contactNumber,
          string employeeID,
          string department,
          double salary,
          string shift,
          string wardAssign) : Employee(personID, name, gender, age, contactNumber, employeeID, department, salary),
                               shift(shift),
                               wardAssign(wardAssign) {};
    void assistDoctor()
    {
        cout << "Nurse assisting doctor." << endl;
    }

    void monitorPatient()
    {
        cout << "Nurse monitoring patient." << endl;
    }
};

class Patient : public Person
{
    string patientID, disease, admissionDate;
    int roomNumber;

public:
    Patient(string personID,
            string name,
            string gender,
            int age,
            int contactNumber,
            string patientID,
            string disease,
            string admissionDate,
            int roomNumber) : Person(personID, name, gender, age, contactNumber),
                              patientID(patientID),
                              disease(disease),
                              admissionDate(admissionDate),
                              roomNumber(roomNumber) {};
    void getMedicalHistory()
    {
        cout << "Disease: " << disease << endl;
        cout << "Admission Date: " << admissionDate << endl;
        cout << "Room No: " << roomNumber << endl;
    }
};
class Appointment
{
    string appointmentID;
    string date;
    string time;

public:
    Appointment(string id, string d, string t)
        : appointmentID(id), date(d), time(t) {}

    void scheduleAppointment()
    {
        cout << "Appointment Scheduled on " << date << " at " << time << endl;
    }

    void cancelAppointment()
    {
        cout << "Appointment Cancelled." << endl;
    }
};

// 7. Bill
class Bill
{
    string billID;
    float treatmentCharges;
    float medicineCharges;

public:
    Bill(string id, float t, float m)
        : billID(id), treatmentCharges(t), medicineCharges(m) {}

    void generateBill()
    {
        float total = treatmentCharges + medicineCharges;
        cout << "Total Bill: " << total << endl;
    }
};

// MAIN
int main()
{
    // Create a Doctor
    Doctor doctor("P001", "Ali", "Male", 40, 03001234567,
                  "E101", "Cardiology", 80000,
                  "Heart Specialist", "MBBS", 2000);

    // Create a Patient
    Patient patient("P002", "Ahmed", "Male", 25, 03001234567,
                    "PT201", "Fever", "05-02-2026", 12);

    // Appointment
    Appointment appointment("A001", "05-02-2026", "10:00 AM");

    // Bill
    Bill bill("B001", 5000, 1500);

    cout << "--- Doctor Details ---" << endl;
    doctor.getDetails();
    doctor.diagnosePatient();
    doctor.prescribeMedicine();

    cout << "\n--- Patient Details ---" << endl;
    patient.getDetails();
    patient.getMedicalHistory();

    cout << "\n--- Appointment ---" << endl;
    appointment.scheduleAppointment();

    cout << "\n--- Bill ---" << endl;
    bill.generateBill();

    return 0;
}
