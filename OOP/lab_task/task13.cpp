#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }

    int getValue() const
    {
        return value;
    }

    Number operator+(const Number &other) const
    {
        cout << "Member + called: " << value << " + " << other.value << endl;
        return Number(value + other.value);
    }

    bool operator==(const Number &other) const
    {
        return value == other.value;
    }

    void display() const
    {
        cout << value;
    }

    friend Number addFriend(const Number &n1, const Number &n2);

    friend Number operator-(const Number &n1, const Number &n2); // optional example
};

Number addFriend(const Number &n1, const Number &n2)
{
    cout << "Friend add called: " << n1.value << " + " << n2.value << endl;
    return Number(n1.value + n2.value);
}

int main()
{
    Number n1(10), n2(20), n3(30);

    cout << "Values are:\n";
    cout << "n1 = ";
    n1.display();
    cout << "\nn2 = ";
    n2.display();
    cout << "\nn3 = ";
    n3.display();
    cout << "\n\n";

    cout << "Expression: n1 + n2 + n3\n";
    Number result = n1 + n2 + n3;

    cout << "\nFinal Result of Addition = ";
    result.display();
    cout << "\n\n";

    Number n4(60);

    cout << "Comparing result with n4:\n";
    cout << "n4 = ";
    n4.display();
    cout << endl;

    if (result == n4)
        cout << "Result and n4 are equal.\n";
    else
        cout << "Result and n4 are not equal.\n";

    cout << "\nUsing friend-style addition function:\n";
    Number friendResult1 = addFriend(n1, n2);
    Number friendResult2 = addFriend(friendResult1, n3);

    cout << "Final Result using friend function = ";
    friendResult2.display();
    cout << endl;

    return 0;
}