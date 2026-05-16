#include <iostream>
using namespace std;
class Student
{
    int id;
    const int maxMarks;
    static int studentCount;

public:
    Student(int id, int marks) : id(id), maxMarks(marks) { studentCount++; }

    Student &setId(int id)
    {
        this->id = id;
        return *this;
    }
    void display()
    {
        cout << "ID: " << id
             << " Max Marks: " << maxMarks
             << " Total Students: " << studentCount
             << endl;
    }
    static void showCount()
    {
        cout << "Student Count: " << studentCount << endl;
    }
};
int Student::studentCount = 0;
int main()
{
    Student s1(1, 100);
    Student s2(2, 100);
    s1.setId(10).display(); // method chaining
    s2.display();
    Student::showCount();
}