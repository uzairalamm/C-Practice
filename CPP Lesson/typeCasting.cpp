#include <iostream>
using namespace std;

int main()
{
    int num = 67;
    char grade = char(num);
    cout << grade << endl;

    cout << (3 / 2) << endl;
    cout << (3 / float(2)) << endl;

    int a = 7 + 6; // 13
    a++;
    int b = ++a; // a = 15, b = 15
    // a = 15;
    cout << a << " " << b << endl;
    return 0;
}