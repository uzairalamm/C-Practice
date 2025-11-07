#include <iostream>
using namespace std;

//Max Finder Function
int maxFinder(int a, int b){
    if(a >= b){
        return a;
    }
    else{
        return b;
    }
}




//Even Odd Finder Function
bool isEven(int a){
    if (a % 2 == 0) 
    return true;

    else
    return false;
}




//Factorial fucntion
double myFact(int a){
    double fact = 1;

    for (int i = 1; i <= a; i++){
        fact *= i;
    }

    return fact;
}





//digit analyze function
//digit count function
int digitCount(int a){
    int count = 0;

    while(a != 0){
        a /= 10;
        count++;
    }
    return count;
}




//digit sum function
int digitSum(int a){
    int sum = 0;
    while (a != 0){
        sum += a % 10;
        a /= 10;
    }
    return sum;
}




int main (){
    int num, num1;
    cout << "Enter two numbers: ";
    cin >> num >> num1;




    //Max Finder Program
    cout << "Max number is: " << maxFinder(num,num1) << endl;




    // Even odd Finder
    if(isEven(num)){
        cout << num << " is Even" << endl;
    }

    else{
        cout << num << " is Odd" << endl;
    }



    
    //Factorial Program
    cout << "Factorial of " << num << " is: " << myFact(num) << endl;



    // analyze number
    cout << "Digit count is: " << digitCount(num) << endl;
    cout << "Digit Sum is: " << digitSum(num) << endl;
}