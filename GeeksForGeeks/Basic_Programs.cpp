#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
//Print Hello World
    cout << "Hello World" << endl;
//Display Your Name
    string name;    
    cout << "Enter Your Name: ";
    getline(cin, name);
    cout << "Your Name is: " << name << endl;

//User Input
    name = "";    
    cout << "Enter Your Name: ";
    getline(cin, name);
    cout << "Your Name is " << name << endl; 

//Sun if two numbers
    int num1, num2;
    cout << "Enter two Number: ";
    cin >> num1 >> num2;
    cin.ignore();
    cout << "Sum is: " << num1 + num2 << endl;

//Swap Two numbers
//First Method
    num1 = num2 = 0;
    cout << "Enter two Numbers: ";
    cin >> num1 >> num2;
    cout << "Before swapping (Num_1 is " << num1 << ") and (Num_2 is " << num2 <<")" << endl;
    swap(num1,num2);
    cout << "After swapping (Num_1 is " << num1 << ") and (Num_2 is " << num2 <<")" << endl;

//Second Method
    int tomp;
    num1 = num2 = 0;
    cout << "Enter Two Numbers: ";
    cin >> num1 >> num2;
    cout << "Before swapping (Num_1 is " << num1 << ") and (Num_2 is " << num2 <<")" << endl;
    //swapping Process
    tomp = num1;
    num1 = num2;
    num2 = tomp;
    //completed
    cout << "After swapping (Num_1 is " << num1 << ") and (Num_2 is " << num2 <<")" << endl;
    
//Sizeof Int, Float, Double, Char
    cout << "Size of Int is: " << sizeof(int) << endl;
    cout << "Size of Float is: " << sizeof(float) << endl;
    cout << "Size of Double is: " << sizeof(double) << endl;
    cout << "Size of Char is: " << sizeof(char) << endl;

// ASCII Value of Charater
    char ch = 'a'; 
    cout << "ASCII Value of " << ch << " is: " << int(ch) << endl;  

// Temp Conversion
    float temp;
    cout << "Enter Your Temp in Celsius: ";
    cin >> temp;
    temp = (temp*9/5) + 32;
    cout << "Your Temp in Fahrenhiet is: " << temp << "F" << endl;
    temp = 0;

    cout << "Enter Your Temp in Fahrenhiet: ";
    cin >> temp;
    temp = (temp - 32) * 5/9;
    cout << "Your Temp in Celsius is: " << temp << "C" << endl; 
    
//Calculate compound and Simple Interest
    float p, r,t;
    cout << "Enter Principle of Number of Days: ";
    cin >> p;
    cout << "Enter Daily Interest Rate: ";
    cin >> r;
    cout << "Enter the Duration: ";
    cin >> t;
    
    //simple interest
    cout << "Simple Interest is: " << (p * t * r)/100 << endl;

    //Compound Interest
    cout << "Compound interest is: " << p*(pow((1 + r/100),t)) << endl;

//Area and Perimeter of Rectangle
    float width, height, area, perimeter;
    cout << "Enter the Width of Rectangle: ";
    cin >> width;
    cout << "Enter the Height of Rectangle: ";
    cin >> height;
    //Area Of Rectangle
    area = width * height;
    cout << "Area of Rectangle is: " << area << endl;
    //Perimeter is
    perimeter = 2*(area + height);
    cout << "Perimeter of Rectangle is: " << perimeter << endl;




}