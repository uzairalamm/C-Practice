#include <iostream>
#include <algorithm>
using namespace std;

// int main()
// {

//     string str = "Yo, What's Up Nigga!";
//     int lenght = str.length();
//     cout << "=================Normal String================\n";
//     cout << str << endl;

//     string reverse = "";
//     cout << "=================Reverse String================\n";
//     for (int i = lenght - 1; i >= 0; i--)
//     {
//         reverse += str[i];
//     }
//     cout << reverse << endl;

//     // Finding Lenght Through Loop
//     int leng = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         leng++;
//     }

//     cout << "\n================================================\n";
//     cout << "Lenght Find with Function: " << lenght
//          << "\nLenght Find Manully using Loop: " << leng << endl;
// }

// ======================String Palindrom======================
int main()
{
    string originalSTR = "Subhani is Gey";
    string reverse = "";
    int lenght = originalSTR.length(); // it store the lenght of the string

    cout << "=================Original String=================\n";
    cout << originalSTR << endl;
    for (int i = lenght - 1; i >= 0; i--) // we looped, i = string lenght - 1 (so we can get the element at last index), we goo on until we reach index 0
    {
        reverse += originalSTR[i]; // reverse is storing each index element 1 by 1
        // example Subhani is Gey
        // at first iteration it store y
        // at next iteration it store e... Now it has "ye"..
        // at the next iteration it store G... now there is "yeG" stored in that reverse array/. this process continue till we reach index 0
    }

    cout << "=================Reverse String=================\n";
    cout << reverse << endl;

    cout << "\n-------------------------------------------\n";
    if (reverse == originalSTR)
    {
        cout << "String is Palindrom\n";
    }
    else
    {
        cout << "String is not Palindrome\n";
    }
    cout << "-------------------------------------------\n";
}