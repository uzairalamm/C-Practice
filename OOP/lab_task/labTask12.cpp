#include <iostream>
#include <string>
using namespace std;
class Student;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    virtual ~Person() {}

    virtual void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Admin
{
public:
    void updateMarks(Student &s, float newMarks);
};

class Student : public Person
{
private:
    float marks;

public:
    Student(string n, int a, float m) : Person(n, a), marks(m) {}

    void display() override
    {
        cout << "Student Details -> Name: " << name << ", Age: " << age << ", Marks: "
             << marks << endl;
    }

    char calculateGrade(float m)
    {
        if (m >= 90)
            return 'A';
        if (m >= 75)
            return 'B';
        if (m >= 50)
            return 'C';
        return 'F';
    }

    char calculateGrade(float m, float attendance)
    {
        if (attendance < 75)
            return 'F';
        return calculateGrade(m);
    }

    friend void showPrivateData(Student s);
    friend class Admin;
};

void showPrivateData(Student s)
{
    cout << "Friend Function Access - Student Marks: " << s.marks << endl;
}

void Admin::updateMarks(Student &s, float newMarks)
{
    s.marks = newMarks;
    cout << "Admin Class - Marks updated to: " << s.marks << endl;
}

int main()
{
    Student myStudent("John Doe", 20, 82.5);
    Admin myAdmin;
    Person *ptr = &myStudent;

    cout << "--- Function Overriding (Runtime Polymorphism) ---" << endl;
    ptr->display();

    cout << "\n--- Function Overloading ---" << endl;
    cout << "Grade (Marks only): " << myStudent.calculateGrade(82.5) << endl;

    cout << "Grade (Marks + low attendance): " << myStudent.calculateGrade(82.5, 60.0) << endl;
    cout << "\n--- Friend Function ---" << endl;

    showPrivateData(myStudent);
    cout << "\n--- Friend Class ---" << endl;

    myAdmin.updateMarks(myStudent, 95.0);
    myStudent.display();
    return 0;
}