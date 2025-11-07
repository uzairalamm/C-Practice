#include <iostream>
#include <cmath>
using namespace std;

int main(){

        // Problem 1 – Pass or Fail
        // English:
        // Take the user’s marks as input. If marks are 50 or more, print "Pass", otherwise print "Fail".    

    // int marks;

    // cout << "Enter Your Marks: ";
    // cin >> marks;

    // if (marks >=50){
    //     cout << "Pass" <<endl;
    // }
    // else {
    //     cout << "Fail" <<endl;
    // }

    // OR
    // string result = (marks >=50) ? "Pass" : "Fail";
    // cout << result << endl;



        // Problem 2 – Odd or Even
        // English:
        // Take an integer from the user. Print "Even" if the number is divisible by 2, otherwise "Odd".


    // int num;

    // cout << "Enter Any Number: ";
    // cin >> num;

    // if (num%2 == 0){
    //     cout << num <<" is Even." <<endl;
    // }
    // else {
    //     cout << num << " is Odd." <<endl;
    // }

        // Problem 3 – Age Check
        // English:
        // Ask the user’s age. If they are 18 or older, print "You can vote", else "You cannot vote".


    // int age;

    // cout << "Enter Your Age: ";
    // cin >> age;

    // if (age >= 18){
    //     cout << "You can vote." <<endl;
    // }
    // else {
    //     cout << "You cannot Vote." <<endl;
    // }


        // Problem 4 – Number Sign
        // English:
        // Take a number. If it’s positive, print "Positive", if negative print "Negative", if zero print "Zero".

    // int num;

    // cout << "Enter A Number: ";
    // cin >> num;

    // if (num > 0){
    //     cout << num << " is Positive." << endl;
    // }
    // else if (num == 0){
    //     cout << num << " is zero" <<endl;
    // }

    // else {
    //     cout << num << " is Negative." <<endl;
    // }


        // Problem 5 – Grade System
        // English:
        // Ask for marks:
        // 80 or more → "Grade A"
        // 60–79 → "Grade B"
        // 40–59 → "Grade C"
        // Less than 40 → "Fail"

    // int marks;

    // cout << "Enter Your Marks: ";
    // cin >> marks;

    // if (marks >=80){
    //     cout << "Grade A" <<endl;
    // }

    // else if (marks >=60){
    //     cout << "Grade B" <<endl;
    // }

    // else if (marks >=40){
    //     cout << "Grade C" <<endl;
    // }

    // else {
    //     cout << "Fail." <<endl;
    // }


        // Problem 6 – Multiple of 5
        // English:
        // Check if the given number is a multiple of 5. Print "Yes" or "No".


    // int num;

    // cout << "Check if the given number is a multiple of 5: ";
    // cin >> num;

    // if (num % 5 ==0){
    //     cout << "Yes." <<endl;
    // }
    // else {
    //     cout << "No." <<endl;
    // }

        // Problem 7 – Nested If Example
        // English:
        // Ask for a password and a PIN. 
        // If the password is "abc123" and the PIN is 4321, print "Access Granted", 
        // otherwise "Access Denied".

    // string password;
    // int pin;
 
    //     cout << "Enter Your Password: ";
    //     cin >> password;

    //     cout << "Enter Pin: ";
    //     cin >> pin;
    

    //     if (password == "abc123" && pin == 4321){
    //         cout << "Access Granted" <<endl;
    //     }

    //     else {
    //         cout << "Access Denied" <<endl;
    //     }

        // Problem 9 – Switch: Simple Calculator
        // English:
        // Take two numbers and an operator (+, -, *, /). Use a switch to perform the correct calculation.

        // Easy Urdu:
        // Do numbers aur ek operator lo. Switch se calculation karo.

    // int num , num2;
    // char op;

    // cout << "Simple Calculator" <<endl;

    // cout << "Enter First Number: ";
    // cin >> num;

    // cout << "Chose operator (+, -, *, /): ";
    // cin >> op;

    // cout << "Enter Second Number: ";
    // cin >> num2;

    // switch (op)
    // {
    // case '+':
    //     cout << num << " + " << num2 << " = " << num + num2 <<endl;
    //     break;


    // case '-':
    //     cout << num << " - " << num2 << " = " << num - num2 <<endl;
    //     break;


    // case '*':
    //     cout << num << " * " << num2 << " = " << num * num2 <<endl;
    //     break;


    // case '/':
    //     if(num2 !=0){
    //     cout << num << " / " << num2 << " = " << num / num2 <<endl;
    //     }
    //     else {
    //         cout << "Error, Divison by zero." <<endl;
    //     }
    //     break;
    
    // default: 
    //     cout << "Please Enter Valid Operator.";
    //     break;
    // }


        // Ask for a password → check if correct (nested if for security questions if wrong).
        // If logged in, ask marks → decide grade (if-else).
        // Offer a service menu (switch).
        // Show final result using ternary.


    // int marks, choice, pin;  
    // string password;

    // cout << "Enter Password: ";
    // cin >> password;

    // if (password == "abc123"){
    //     cout << "Access Granted" <<endl;

    //     cout << "Enter Your Marks: ";
    //     cin >> marks;

    //     if (marks >=80){
    //     cout << "Grade A" <<endl;
    //     }

    //     else if (marks >=60){
    //         cout << "Grade B" <<endl;
    //     }

    //     else if (marks >=40){
    //         cout << "Grade C" <<endl;
    //     }

    //     else {
    //         cout << "Fail." <<endl;
    //     }

    //     cout << "\nServices Menu:\n1. Print ID Card\n2. Apply for Hostel\n3. View Schedule\nChoose: ";
    //     cin >> choice;

    //     switch (choice)
    //     {
    //     case 1: 
    //         cout <<"Your ID Card is being printed..." << endl;
    //         break;
        
    //     case 2: 
    //         cout <<"Hostel application submitted..." << endl;
    //         break;
        
    //     case 3: 
    //         cout <<"Your class schedule: Mon-Fri, 9AM-2PM..." << endl;
    //         break;


    //     default:
    //         cout << "Invaild Operator." << endl;
    //         break;
    //     }
    // }

    // else {
    //     cout << "Incorrect Password" <<endl;
    //     cout << "Enter Backup pin: ";
    //     cin >> pin;
        
    //     if (pin == 4321){
    //         cout << "Access Granted" <<endl;
    //     }
    //     else {
    //         cout << "You are banned" <<endl;
    //     }

    // }

        // Problem 3 – Service Menu

        // Ask user to choose:

        // 1. View Balance
        // 2. Withdraw Money
        // 3. Deposit Money
        // Use switch-case to handle each choice.

        // If withdraw amount is more than balance → show "Insufficient funds".

        // Initial balance = 10,000.

    // int balance = 10000;
    // int check, money;
    // cout << "1. View Balance \n2. Withdraw Money\n3.Deposit Money\n";

    // cout << "Enter a number 1-3: ";
    // cin >> check;

    // switch (check)
    // {
    // case 1:
    //     cout << " Your Currrent Balance is " << 10000;
    //     break;
    // case 2:
    //     cout << "How much money you want to withdraw: ";
    //     cin >> money;

    //     if (money > balance){
    //         cout << "Insufficient funds";
    //     }
    //     else {
    //         cout << "You Withdraw " << money <<endl;
    //         cout << "Your Current Balance  is: " << balance - money <<endl;

    //     }
    //     break;


    // case 3:
    //     cout << "How much money You want to deposit: ";
    //     cin>> money;

    //     cout << "You deposit " << money <<endl;
    //     cout << " Your current Money is: " << balance + money;
    //     break;


    // default:
    //     cout << "invalid response! only enter 1-3." <<endl;
    //     break;
    // }

        // Take a character from the user and print whether it’s a vowel or consonant (only for a, e, i, o, u).         

    // char character;

    // cout << "Enter a character: ";
    // cin >> character;

    // if ( character == 'a' || character == 'e' || character == 'i' || character =='o' || character == 'u' ){
    //     cout << "character you type is vowel";
    // }

    // else {
    //     cout << "Character you typed is consonant.";
    // }

// for (int row = 1; row <= 3; row++) {
//     for (int col = 1; col <= 5; col++) {
//         cout << "* ";
//     }
//     cout << endl;
// }


    // int num;

    // cout << "Enter a number: ";
    // cin >> num;

    // for (int i=1; i<=num; i++){
    //     cout << "\nTable of " << i << " is: \n" << endl;
    //     for(int j = 1; j <=10; j++){
    //         cout << i << " X " << j << " = " << i*j << endl;
    //     }

    // }


    // int num, sum = 0;

    // cout << "Enter your number: ";
    // cin >> num;

    // cout << "Odd number upto " << num << " is: ";
    
    // for (int i = 1; i <=num; i +=2){
    //     cout << i << " " ;
    //     sum +=i;
    // }
    // cout << endl;
    // cout << "sum is: " << sum;



    // int num, fact = 1;

    // cout << "Enter a number: ";
    // cin >> num;

    // cout << "Factorial Process: ";
    // for (int i = 1; i <= num; i++){
    //     cout << i ;
    //     if (i == num){

    //     }
    //     else {
    //         cout << " x ";
    //     }
    //     fact *= i;
    // } 
    // cout << endl;
    // cout << "Factorial of " << num << " number is: " << fact << endl;


    // int num, num1, formula = 1;

    // cout << "Enter 2 numbers: ";
    // cin >> num >> num1;

    // formula = pow((num + num1), 2);

    // cout << "(a + b)^2 = " << formula;


    // int num1, num2, formula;
    // cout << "Enter 2 number: ";
    // cin >> num1 >> num2;

    // formula = (num1 * num1) + (num2 * num2) + 2*(num1 * num2);
    // cout << formula;


    // int num1, num2, formula;
    // cout << "Enter 2 number: ";
    // cin >> num1 >> num2;

    // formula = pow((num1 - num2), 2);
    // cout << "(" << num1 << " - " << num2 << ") ^ 2 = " << formula <<endl;


    // formula = (num1 * num1) + (num2 * num2) - 2*(num1*num2);
    // cout << "(" << num1 << " - " << num2 << ") ^ 2 = " << formula <<endl;


    // formula = pow(num1 , 2) - pow(num2, 2);
    // cout << formula;
    

    // formula = (num1 + num2)*(num1 - num2);
    // cout << formula;


    // int num1, num2, num3;
    // double num4, num5, average;

    // cout << "Enter 5 numbers: ";
    // cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // average = num1 + num2 + num3 + num4 + num5;

    // cout << "Double \"Average\" is: " << average << endl;

    // average = (int) average;

    // cout << "Int \"Average\" is: " << average << endl;

    // int row,current=1;
    // cout << "Enter the numbers of row: ";
    // cin >> row;
    // for (int i = 1; i <=row; i++){
    //     for (int j = 1; j <=i ; j++){
    //         cout << current << " ";
    //         ++current;
    //     }
    //     cout << endl;
    // }

    // int num, fact = 1;

    // cout << "Enter a number: ";
    // cin >> num;
    // cout << num << "! = ";

    // for (int i = 1; i <= num; i++){
    //     cout << i ;
    //     if (i == num){

    //     }
    //     else{
    //         cout << " x ";
    //     }
    //     fact *= i;
    // }

    // cout << " = " << fact << endl;




    // int N, reverse = 0;
    // cout << "ENter a number N: ";
    // cin >> N;

    // // while (N >= 1){
    // //     cout << N << " ";
    // //     N = N - 1;
    // // }

    // while(N > 0){
    //     int digit = N % 10;
    //     reverse = reverse * 10 + digit;
    //     N = N / 10;
    // }

    // cout << reverse;

    // int num, reverse = 0, digit;

    // cout << "Enter a Number: ";
    // cin >> num;

    // for (int i = 1; i <= num; i++){
    //     digit = num % 10;
    //     reverse = reverse * 10 + digit;
    //     num = num / 10;
    // }
    // cout << "Reverse is: " << reverse;


    // int N;
    // cout << "Enter a Number N: ";
    // cin >> N;

    // for(int i = N; i >= 1; i--){
    //     cout << N << " ";
    //     N = N - 1;
    // }


//    int num;
//    cout << "Enter a number: ";
//    cin >> num;

//     for (int i = 2; i <= num; i++) {
//         bool isPrime = true;

//         for (int j = 2; j <= sqrt(i); j++) {
//             if (i % j == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime)
//             cout << i << " ";
//     }


    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // bool isPrime = true;

    // if (num <= 1){
    //     isPrime = false;
    // }
    // else{
    //     for (int i = 2; i = sqrt(num); i++){
    //         if (num % i == 0){
    //             isPrime = false;
    //         };
    //         break;
    //     }
    // }

    // if (isPrime){
    //     cout << num << " is Prime.";
    // }
    // else{
    //     cout << num << " is not Prime.";
    // }

    // int num;
//    cout << "Enter a number: ";
//    cin >> num;

//     for (int i = 2; i <= num; i++) {
//         bool isPrime = true;

//         for (int j = 2; j <= sqrt(i); j++) {
//             if (i % j == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime)
//             cout << i << " ";
//     }


    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // for (int i = 2; i <= num; i++){
    //     bool isPrime = true;

    //     for (int j = 2; j <= sqrt(i); j++){
    //         if (i % j == 0){
    //             isPrime = false;
    //             break;
    //         }

    //     }

    //     if (isPrime){
    //         cout << i << " ";
    //     }
    // }

    string name, username, password, recheck_password, mail, confirm_mail;
    int user;
    cout << "Welcome To our Platform" << endl;
    cin >> user;

    switch (user)
    {
    case 1:

        cout << "Enter Your Username: ";
        cin.ignore();
        getline (cin, username);
        cout << "Enter Your Email: ";
        cin >> mail;

        cout << "Enter Password: ";
        cin >> password;

        cout << "Welcome Back " << username;
        break;
    case 2:

        cout << "Enter Your Username: ";
        getline (cin, username);

        cout << "Enter Your mail: ";
        cin >> mail;

        cout << "Make a strong password: ";
        cin >> password;

        cout << "Confirm password: ";
        cin >> recheck_password;
        while (true)
        {
           
            if (recheck_password == password){
                cout << "Welcome to Our Platform" << endl;
            }
            else {
                cout << "Wrong Password, Try Again" << endl;
            }

        }

    default:
        break;
    }









    return 0;


}