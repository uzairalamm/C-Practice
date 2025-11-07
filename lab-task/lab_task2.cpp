#include <iostream>
using namespace std;

int main(){
    int num, num2, replace = 0;
    float width, lenght, area, celsius,fahrenheit;
    string roll, name;

    // Problem Statement 1:
    // Write a C++ program to print your name and your university roll#.

    cout << "Enter Your Name: ";
    getline(cin , name);

    cout << "Enter Your ROll No.: ";
    cin >> roll;

    cout << "Hello " << name << ". Your ROll No. is " << roll << endl;



    // Problem Statement 2:
    // Write a C++ Program to perform Arithmetic operations on 2 numbers taken by user.

    cout << "Enter Two numbers: ";
    cin >> num >> num2;

    cout << "Arithmetic operation are: " << endl;
    cout << "Sum: " << num << " + " << num2 << " = " <<num + num2 <<endl;
    cout << "Sum: " << num << " x " << num2 << " = " << num * num2 <<endl;
    cout << "Sum: " << num << " - " << num2 << " = " << num - num2 <<endl;
    cout << "Sum: " << num << " % " << num2 << " = " << num % num2 <<endl;
    if (num2 != 0){
        cout << "Sum: " << num << " / " << num2 << " = " << num + num2 <<endl;
        }
    else {
        cout << "Error! Division By Zero." << endl;
    }


    // Problem Statement 3:
    // Write a C++ program to print the area of the rectangle. (Take input from user).

    cout << "Enter the Base of Rectangle: ";
    cin >> lenght;

    cout << "Height of Rectangle: ";
    cin >> width;

    area = (lenght * width);

    cout << "Area of Rectangle is: " << area << endl;


    // Problem Statement 4:
    // Write a program that will show the following outputs simply by using cout statements.
    // (a) (b) (c) (d)


    cout << "My name is Uzair Alam" << endl;

    // Part (b)
    cout << "My father name is Alam" << endl;

    // Part (c)
    cout << "I study in Superior University" << endl;

    // Part (d)
    cout << "I got grade A in ICT" << endl;


    // Problem Statement 5:
    // Write a C++ program illustrates the use of sizeof() function which is used to find the
    // memory space allocated for each C++ data type.


    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;


    // Problem Statement 6:
    // Write a C++ program to swap two numbers by using 3rd variables.
    // Output:
    // A=5
    // B=6
    // After swapping
    // A=6
    // B=5

    cout << "Enter two number: ";
    cin >> num >> num2;

    cout << "Before Swapping: ";
    cout << num << " " << num2 << endl;

    replace = num;
    num = num2;
    num2 = replace;

    cout << "After Swapping: ";
    cout << num << " " << num2 << endl;


    // Problem Statement 7:
    // Write a C++ program to swap two numbers without using 3rd variables.
    // Output:
    // A=5
    // B=6
    // After swapping
    // A=6
    // B=5


    cout << "Enter two numbers: ";
    cin >> num >> num2;

    cout << "Before Swapping: ";
    cout << num << " " << num2 << endl;


    num = num + num2;
    num2 = num - num2;
    num = num - num2;
    cout << "After Swapping: ";
    cout << num << " " << num2 << endl;


    // Problem Statement 8:
    // Write a program converts a temperature from Celsius to Fahrenheit. Use the following
    // formula: F = 1.8 x C +32


    cout << "Enter Your Temp In Celsius: ";
    cin >> celsius;

    fahrenheit = (1.8 * celsius) + 32;
    cout << "Your Temp in Fahrenheit is: " << fahrenheit << endl;
    return 0;
}