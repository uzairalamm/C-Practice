#include <iostream>
#include <cmath>
using namespace std;

int main (){
        int num, num1, num2, maximum;


    // 1)Write a program in C++ to check whether a number is prime or not .



    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;

    if (num <= 1){
        isPrime = false;
    }
    else{
        for (int i = 2; i = sqrt(num); i++){
            if (num % i == 0){
                isPrime = false;
            };
            break;
        }
    }

    if (isPrime){
        cout << num << " is Prime.";
    }
    else{
        cout << num << " is not Prime.";
    }

    cout << endl;

    // 2)Write a program in C++ to check whether a number is positive or not.
    num = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0){
        cout << num << " Number is Negative" << endl;
    }

    else{
        cout << num << " Number is Positive" << endl;
    }


    // 3)Write a program in C++ to check the greater number in three numbers without using logical operators.


    num = 0;

    cout << "Enter three number: ";
    cin >> num >> num1 >> num2;

    maximum = max(num, max(num1, num2));

    cout << "Greater number is: " << maximum << endl;


    // 4)rite a program in C++ to check the greater number in three numbers using logical operators.

    num = 0, num1 = 0, num2 = 0;

    cout << "Enter three number: ";
    cin >> num >> num1 >> num2;

    if (num >= num1 && num >= num2){
        cout << num << " is a Greater Number" << endl;
    }

    else if (num1 >= num && num1 >= num2){
        cout << num1 << " is Greater number" << endl;
    }

    else {
        cout << num2 << " is Greater number" << endl;
    }

    return 0;
}