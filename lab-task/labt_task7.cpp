#include <iostream>
using namespace std;

// sum Function
int mySum(int a, int b){
    return a + b;
}



// Square Function
void mySquare(int a){
    cout << "Square of " << a << " is: " << a * a << endl;
} 




//Average Function
float myAvg(){
    int num1, num2, num3;
    cout << "Enter 3 Numbers: ";
    cin >> num1 >> num2 >> num3;

    float average = (num1 + num2 + num3)/3;

    return average;
}


void myGreet(){
    cout << "Welcome to C++";
}



int main(){
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    //sum program
    cout << "Sum is: " << mySum(num1, num2) << endl;
    
    //Square program
    mySquare(num1);


    //Average Program
    cout << "Average is: " << myAvg() << endl;


    //Greet Program
    myGreet();
    cout << endl;
}