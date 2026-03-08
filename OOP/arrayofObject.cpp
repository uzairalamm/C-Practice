#include <iostream>
#include <string>
using namespace std;

// ==================Example 1 — Basic Array of Objects===============
// class Student
// {
//     string name;
//     int rollNo;

// public:
//     Student() : name("Unknown"), rollNo(0) {};
//     void setName(string name)
//     {
//         this->name = name;
//     }
//     void setRollNo(int rollNo)
//     {
//         this->rollNo = rollNo;
//     }

//     string getName() const
//     {
//         return name;
//     }
//     int getRollNo() const
//     {
//         return rollNo;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Roll NO: " << rollNo << endl;
//         cout << "------------------------------\n\n";
//     }
// };

// int main()
// {
//     Student students[2];
//     string name;
//     int rollNo;

//     cout << "Enter Students Information\n";
//     for (int i = 0; i < 2; i++)
//     {
//         cout << "Student " << i + 1 << endl;
//         cout << "Name: ";
//         getline(cin, name);
//         students[i].setName(name);

//         while (true)
//         {
//             cout << "Roll No: ";
//             cin >> rollNo;
//             if (cin.fail())
//             {
//                 cout << "Please Enter Numbers only\n";
//                 cin.clear();
//                 cin.ignore(1000, '\n');
//             }
//             else
//             {
//                 cin.ignore();
//                 students[i].setRollNo(rollNo);
//                 break;
//             }
//         }
//     }
//     cout << "\n------------------------------\n";
//     cout << "Student Information";
//     cout << "\n------------------------------\n";

//     for (int i = 0; i < 2; i++)
//     {
//         cout << "Student " << i + 1 << endl;
//         students[i].display();
//     }
// }
