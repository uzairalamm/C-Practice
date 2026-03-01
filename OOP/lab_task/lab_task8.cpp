#include <iostream>
#include <string>
using namespace std;

class Base
{
    int x;

public:
    void display(int x)
    {
        cout << "Base Class function: " << x << endl;
    }
};

class Derived : public Base
{
    double x;

public:
    using Base::display;
    void display(double x)
    {
        cout << "Derived Class Function: " << x << endl;
    }
};

int main()
{
    Derived child;
    child.display(21);   // will Call the Parent function
    child.display(21.3); // will call the Child Function
}