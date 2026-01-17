#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

// ======================Print Hello World===========================
// int main()
// {
//     cout << "Hello World" << endl;
// }

// ======================Display Your Name===========================
// int main()
// {
//     cout << "My name is Uzair Alam" << endl;
// }

// ======================User Input===========================
// int main()
// {
//     string name;
//     int age;
//     cout << "Enter Your age: ";
//     cin >> age;
//     cin.ignore();
//     cout << "Enter your Name: ";
//     getline(cin, name);

//     cout << "Hey " << name << endl;
//     cout << "You are " << age << " year's Old" << endl;
// }

// ======================Sum of Two Numbers===========================
// int main()
// {
//     int num1, num2, sum;
//     cout << "Enter Two Integers: ";
//     cin >> num1 >> num2;

//     sum = num1 + num2; // sum of two numbers
//     cout << "Sum is: " << sum << endl;
// }

// ======================Swap two numbers===========================
// ======================Method 1 (using 3rd veriable)===========================
// int main()
// {
//     int num1, num2, temp;
//     cout << "Enter Two Integers: ";
//     cin >> num1 >> num2;

//     cout << "Before Swap\n";
//     cout << "Num1: " << num1 << " & Num2: " << num2 << endl;

//     temp = num1;
//     num1 = num2;
//     num2 = temp;

//     cout << "After Swap\n";
//     cout << "Num1: " << num1 << " & Num2: " << num2 << endl;
// }

// ======================Method 2 (without 3rd veriable)===========================
// int main()
// {
//     int num1, num2;
//     cout << "Enter Two Integers: ";
//     cin >> num1 >> num2;

//     cout << "Before Swap\n";
//     cout << "Num1: " << num1 << " & Num2: " << num2 << endl;

//     num1 = num1 + num2;
//     num2 = num1 - num2;
//     num1 = num1 - num2;

//     cout << "After Swap\n";
//     cout << "Num1: " << num1 << " & Num2: " << num2 << endl;
// }

// ======================Size of int, float, double, char===========================
// int main()
// {
//     cout << "Size of Int is: " << sizeof(int) << endl;
//     cout << "Size of Float is: " << sizeof(float) << endl;
//     cout << "Size of Double is: " << sizeof(double) << endl;
//     cout << "Size of Char is: " << sizeof(char) << endl;
// }

// ======================Float Multiplication===========================
// int main()
// {
//     float num1, num2, product;
//     cout << "Enter two Integers: ";
//     cin >> num1 >> num2;

//     product = num1 * num2;

//     cout << "Product is: " << fixed << setprecision(2) << product << endl;
// }

// ======================ASCII Value of a Character ===========================
// int main()
// {
//     char ch;
//     cout << "Enter a Character: ";
//     cin >> ch;

//     cout << "ASCII value of (" << ch << ") is: " << int(ch) << endl;
// }

// ======================Convert Fahrenheit to Celsius===========================
// void tempConverter(float temp, char ch)
// {
//     float fahrenhiet, celsius;

//     if (ch == 'F' || ch == 'f')
//     {
//         fahrenhiet = (temp * 9 / 5) + 32;
//         cout << "Temp in Fahrenhiet is: " << fixed << setprecision(2) << fahrenhiet << endl;
//     }
//     else if (ch == 'C' || ch == 'c')
//     {
//         celsius = (temp - 32) * 5 / 9;
//         cout << "Temp in Celcius is: " << fixed << setprecision(2) << celsius << endl;
//     }
//     else
//     {
//         cout << "Invalid choice!" << endl;
//     }
// }

// int main()
// {
//     float temp;
//     char ch;
//     cout << "Enter Your Temp: ";
//     cin >> temp;

//     cout << "Convert in (F or C): ";
//     cin >> ch;

//     tempConverter(temp, ch);
// }