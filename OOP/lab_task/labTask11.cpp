#include <iostream>
using namespace std;

class Printer
{
public:
    void print(int number) const
    {
        cout << "Intger Value: " << number << endl;
    }

    void print(double number) const
    {
        cout << "Double Value: " << number << endl;
    }

    void show() const { cout << "This is Base Printer\n"; }
};

class AdvancePrinter : public Printer
{
public:
    void show() { cout << "This is Advance Printer\n"; }
};

int main()
{
    Printer *ptr;
    AdvancePrinter obj;

    ptr = &obj;

    ptr->show();
    obj.show();
    obj.print(12);
    obj.print(12.43);
}