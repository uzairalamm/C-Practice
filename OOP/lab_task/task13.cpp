#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor
    Number(int v = 0)
    {
        value = v;
    }

    // Getter
    int getValue() const
    {
        return value;
    }

    // ---------------- MEMBER FUNCTION VERSION ----------------
    // Overload + operator using member function
    Number operator+(const Number &other) const
    {
        cout << "Member + called: " << value << " + " << other.value << endl;
        return Number(value + other.value);
    }

    // Overload == operator using member function
    bool operator==(const Number &other) const
    {
        return value == other.value;
    }

    // Display function
    void display() const
    {
        cout << value;
    }

    // ---------------- FRIEND FUNCTION VERSION ----------------
    // Friend function to overload +
    friend Number addFriend(const Number &n1, const Number &n2);

    // Friend function to overload operator+
    friend Number operator-(const Number &n1, const Number &n2); // optional example
};

// Friend function for addition
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

    // Member function + operator
    cout << "Expression: n1 + n2 + n3\n";
    Number result = n1 + n2 + n3;

    cout << "\nFinal Result of Addition = ";
    result.display();
    cout << "\n\n";

    // Comparison using ==
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