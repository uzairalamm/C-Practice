#include <iostream>
using namespace std;

int main() {

    // 1) Write a program in C++ to print a square pattern with the # character.
    // Sample Output:
    // Print a pattern like square with # character:
    // Input the number of characters for a side: 4


        for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= 1; j--)
        {
            cout << "# ";
        }
        cout << endl;
    }
    
    // 2) Write a program in C++ to display a pattern like a right-angle triangle using an asterisk without using
    // any loop.
    // Sample Output:
    // Input number of rows: 5


    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }


    // 3) Write a program in C++ to display the pattern like right angle triangle without using loop.
    // Sample Output:
    // Input number of rows: 5


    for (int i= 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    


}