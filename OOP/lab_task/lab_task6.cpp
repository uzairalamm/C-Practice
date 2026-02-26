#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person(string name = "Unknown", int age = 18) : name(name), age(age) {};
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }

    string getName() const
    {
        return name;
    }
    int getAge() const
    {
        return age;
    }

    void detail() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
    int rollNo;

public:
    Student(string name, int age, int rollNo) : Person(name, age), rollNo(rollNo) {};
    void setRollNo(int rollNo)
    {
        this->rollNo = rollNo;
    }

    int getRollNo()
    {
        return rollNo;
    }

    void detail()
    {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student st("Asad", 25, 81);
    st.Person::detail();
    st.detail();
}