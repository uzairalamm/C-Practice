#include <iostream>
#include <cstring>
using namespace std;

class StudentRecord
{
    int id;
    char *name;

public:
    StudentRecord(int id, const char *name)
    {
        this->id = id;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    StudentRecord(const StudentRecord &obj)
    {
        id = obj.id;
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
    }

    void setName(const char *newName)
    {
        delete[] name;
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
    }

    void display()
    {
        cout << "ID: " << id << " Name: " << name << endl;
    }

    ~StudentRecord()
    {
        delete[] name;
    }
};

int main()
{
    StudentRecord s1(1, "Ali");
    StudentRecord s2 = s1;

    s2.setName("Ahmed");

    s1.display();
    s2.display();
}
