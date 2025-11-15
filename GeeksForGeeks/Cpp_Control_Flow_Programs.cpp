#include <iostream>
using namespace std;

int main(){
// Check for Even Odd
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    if(num % 2 == 0){
        cout << num << " is Even" << endl;
    }
    else{
            cout << num << " is Odd" << endl;
    }

// Largest Among 3
    int num1, num2;
    num = num1 = num2 = 0;

    cout << "Enter Three Numbers: ";
    cin >> num >> num1 >> num2;
    if(num >= num1 && num >= num2){
        cout << num << " is the Largest Number" << endl;
    }
    else if(num1 >= num && num1 >= num2){
        cout << num1 << " is the Largest Number" << endl;
    }
    else{
        cout << num2 << " is the Largest Number" << endl;
    }

// Vowel/Consonant Check
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout << ch << " is Vowel" << endl;
    }
    else{
        cout << ch << " is Consonant" << endl;
    }

// Leap Year Check
    int year;
    cout << "Enter a Year: ";
    cin >> year;
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        cout << year << " is a Leap Year" << endl;
    }
    else{
        cout << year << " is not a Leap Year" << endl;
    }

// Multiplication Table
    num = 0;
    cout << "Enter the Number: ";
    cin >> num;
    for (int i = 0; i <= 10; i++){
        cout << num << " x " << i << " = " << num*i << endl;
    }

// n Multiplication Table
    num = 0;
    cout << "Enter a Number: ";
    cin >> num;
    for (int i = 2; i <= num; i++){
        cout << "Table of " << i << " is: ";
        for (int j = 1; j <= 10; j++){
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout <<endl;
    }

// Sum of n Natural Numbers
    int sum = 0;
    num = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of Natural Number Upto " << num << " is: \n";
    for (int i = 1; i <= num; i++){
        cout << i;
        if(i == num){

        }
        else{
            cout << " + ";
        }
        sum = sum + i;
    }
    cout <<" = " << sum << endl;

// Factorial of a Number
    num = 0;
    long long fact = 1;

    cout << "Enter a Number: ";
    cin >> num;
    cout << "Factorial of " << num << " is: \n";
    for (int i = 1; i <= num; i++){
        cout << i;
        if(i == num){}
        else{
            cout << " x ";
        }
        fact*= i;
    }
    cout << " = " << fact << endl;

// Reverse a Number
    int digit, reverse = 0;
    num = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number is " << num << endl;
    while(num != 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    cout << "Its reverse is: " << reverse << endl;


//GCD of Two Numbers
    int gcd;
    num = num1 = 0;
    cout << "Enter Two Numbers: ";
    cin >> num >> num1;
    gcd = (num < num1) ? num : num1;
    while(gcd > 1){
        if(num % gcd == 0 && num1 % gcd == 0){
            break;
        }
        gcd--;
    }
    cout << "GCD is: " << gcd << endl;

//LCM Using GCD
    int lcm;
    lcm = (num * num1)/gcd;
    cout << "LCM is: " << lcm << endl;

//Find LCM Using Simple Method
    lcm = 0;
    num = num1 = 0;
    cout << "Enter two Numbers: ";
    cin >> num >> num1;

    lcm = (num > num1) ? num : num1;
    while(lcm > 1){
        if(lcm % num == 0 && lcm % num1 == 0){
                  break;
        }
        lcm++;
  
    }
    cout << "Lcm is: "<< lcm << endl;

//Neon Number
    int square;
    num = 0, digit = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    square = num * num;
    while(square){
        digit = square % 10;
        sum = sum + digit;
        square = square/10;
    }

    if(sum == num){
        cout << num << " Is a Neon Number" << endl;
    }
    else{
        cout << num << " Is not a Neon Number" << endl;
    }


// Armstrong Number
    num = 0, digit = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    int original = num;
    while(num != 0){
        digit = num % 10;
        sum = sum + digit*digit*digit;
        num /= 10;
    }
    if(sum == original){
        cout << original << " is a Armstrong Number" << endl;
    }
    else{
        cout << original <<" is not a armstrong Number" << endl;
    }
//  All Factors of A Natural Number
    num = 0;
    cout << "ENter a number: ";
    cin >> num;

    for(int i = 1; i<= num; i++){
        if(num % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}