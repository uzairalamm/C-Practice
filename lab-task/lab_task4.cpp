#include <iostream>
using namespace std;

int main (){

    // 1)make a calculator using arithmetic operators(+,-,/,*,%). Please take values from users
    // in cpp.



    int num , num2;
    char op;

    cout << "Simple Calculator" <<endl;

    cout << "Enter First Number: ";
    cin >> num;

    cout << "Chose operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter Second Number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num << " + " << num2 << " = " << num + num2 <<endl;
        break;


    case '-':
        cout << num << " - " << num2 << " = " << num - num2 <<endl;
        break;


    case '*':
        cout << num << " * " << num2 << " = " << num * num2 <<endl;
        break;


    case '/':
        if(num2 !=0){
        cout << num << " / " << num2 << " = " << num / num2 <<endl;
        }
        else {
            cout << "Error, Divison by zero." <<endl;
        }
        break;
    
    default: 
        cout << "Please Enter Valid Operator." <<endl;
        break;
    }



    // 2)write a program to check whether the given is odd or even using condition (if else) in
    // cpp.


    cout << "Enter First Number: ";
    cin >> num;

    if (num % 2 == 0){
        cout << num << " is even." << endl;
    }
    else{
        cout << num << " is Odd." << endl;
    }



}