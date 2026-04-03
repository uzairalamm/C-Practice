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
//             day = d % 365;
//             if (d == 0)
//             {
//                 day = 365;
//             }
//         }
//         else
//             day = 1;
//     }

//     int getDay() const { return day; }

//     // void printDay()
//     // {
//     //     int total = 0;
//     //     int i = 0;
//     //     while (i >= 0 && i < 12)
//     //     {

//     //         for (int j = 1; j <= daysInMonths[i]; j++)
//     //         {
//     //             total++;

//     //             if (day == total)
//     //             {
//     //                 cout << months[i] << " " << j << endl;
//     //             }
//     //         }
//     //         i++;
//     //     }
//     // }

//     // Another Way
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