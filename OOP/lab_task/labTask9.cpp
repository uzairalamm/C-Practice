#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person() : name("Unknown"), age(18) {};
    Person(string name, int age) : name(name), age((age >= 18 && age <= 50) ? age : 18) {};

    void setName(string &name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = (age >= 18 && age <= 50) ? age : 18;
    }

    string getName() const { return name; }
    int getAge() const { return age; }

    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class CPU
{
    float ghz;

public:
    CPU() : ghz(1.0f) {};
    CPU(float ghz) : ghz((ghz > 0) ? ghz : 1.0f) {};

    void setGhz(float ghz)
    {
        this->ghz = (ghz > 0) ? ghz : 1.0f;
    }

    float getGhz() const
    {
        return ghz;
    }
};

class RAM
{
    float memory;

public:
    RAM() : memory(4.0f) {};
    RAM(float memory) : memory((memory > 0) ? memory : 4.0f) {};

    void setMemory(float memory)
    {
        this->memory = (memory > 0) ? memory : 4.0f;
    }

    float getMemory() const
    {
        return memory;
    }
};

class Computer
{
    RAM ram;
    CPU cpu;

public:
    Computer() : ram(4.0f), cpu(1.0f) {};
    Computer(float ram, float cpu) : ram(ram), cpu(cpu) {};

    void display() const
    {
        cout << "Computer Specs\n";
        cout << "Cpu: " << cpu.getGhz() << "Ghz\n";
        cout << "Memory: " << ram.getMemory() << "Memory\n";
    }
};

class Employee : public Person
{
    int empID;
    float salary;
    Computer computer;

public:
    Employee() : empID(0), salary(0.0f) {};
    Employee(string name, int age, int empID, float salary, float ram, float cpu) : Person(name, (age >= 18 && age <= 50) ? age : 18), empID(empID),
                                                                                    salary((salary >= 35000 && salary <= 200000) ? salary : 35000),
                                                                                    computer(ram, cpu) {};

    void display() const
    {
        Person::display();
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Salary: " << salary << endl;

        computer.display();
    }
};

int main()
{
    Employee emp1("Ali", 21, 89121, 500000, 32.0f, 3.4f);
    emp1.display();
}