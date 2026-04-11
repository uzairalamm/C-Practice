#include <iostream>
using namespace std;

// Basic Overloading Functions
// class Number
// {
//     int num = 0;

// public:
//     Number() {};
//     Number(int num) : num(num) {};
//     void setNumber(int num) { this->num = num; }
//     int getNumber() const { return num; }

//     // Add Overload Operator
//     Number operator+(const Number &num2)
//     {
//         return Number(num + num2.num);
//     }

//     // Subtractor Overload Operator
//     Number operator-(const Number &num2)
//     {
//         return Number(num + num2.num);
//     }

//     // Division Overload Operator
//     Number operator/(const Number &num2)
//     {
//         return Number(num / num2.num);
//     }

//     // Multiply Overload Operator
//     Number operator*(const Number &num2)
//     {
//         return Number(num * num2.num);
//     }
// };

// int main()
// {
//     Number num1(2), num2(0);
//     Number num3;

//     if (num2.getNumber() == 0)
//         cout << "Error, Division By Zero!\n";
//     else
//         num3 = num1 / num2;

//     cout << "Num3: " << num3.getNumber() << endl;
// }

// Still Basic Overloading Functions

class Counter
{
    int count = 0;

public:
    Counter() {};
    Counter(int count) : count(count) {};

    void increment() { count++; }

    void print() const
    {
        cout << "Count is: " << count << endl;
    }

    Counter operator+(const Counter &counter2)
    {
        return Counter(count + counter2.count);
    }

    Counter operator-(const Counter &counter2)
    {
        return Counter(count - counter2.count);
    }
};

int main()
{
    Counter counter1, counter2;
    counter1.increment();
    counter1.increment();
    counter2.increment();
    counter1.print();
    counter2.print();

    Counter counter3 = counter1 - counter2;
    counter3.print();
}