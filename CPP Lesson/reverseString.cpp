#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string str = "Yo, What's Up Nigga!";
    int lenght = str.length();
    cout << "=================Normal String================\n";
    cout << str << endl;

    string reverse = "";
    cout << "=================Reverse String================\n";
    for (int i = lenght - 1; i >= 0; i--)
    {
        reverse += str[i];
    }
    cout << reverse << endl;
}