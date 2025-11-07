#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {

    // string name;
    // name = "Uzair";

    // cout << "Length: " << name.length() << endl;
    // cout << "Append/additonal Text: " << name.append("@gmail.com") << endl;
    // cout << "Insert Pos mean Position: " << name.insert(0, "Mr. ") << endl;
    // cout << "Erase: " << name.erase(0, 3) << endl;
    // cout << "insert: " << name.insert(0, "Uza") << endl;
    // cout << "Subtrat: " << name.substr(0, 6);



    // int num, evenCount = 0, oddCount = 0, primeCount = 0;

    // for (int i = 1; i<= 10; i++){
    //     cout << "Enter Number " << i << ": ";
    //     cin >> num;
        
    //     if (num % 2 == 0){
    //         evenCount++;
    //     }
    //     else {
    //         oddCount++;
    //     }



    //     bool isPrime = true;
    //     if(num <= 1){
    //         isPrime = false;
    //     }
    //     else{
    //         for (int i = 2; i <= sqrt(num); i++){
    //             if(num % i == 0){
    //                 isPrime = false;
    //                 break;
    //             }
    //         }
    //     }

    //     if(isPrime){
    //         primeCount++;
    //     }
    // }

    // cout << "Even Count: " << evenCount << endl;
    // cout << "Odd Count: " << oddCount << endl; 
    // cout << "Prime Count: " << primeCount << endl;



    // for (int i = 1; i <= 5; i++){
    //     int num;
    //     cout << "Enter No. " << i << ": ";
    //     cin >> num;

    //     if (num > 0){
    //         cout << "Positive\n";
    //     }
    //     else if (num < 0){
    //         cout << "Negative\n";
    //     }
    //     else{
    //         cout << "Zero\n";
    //     }
    // }


    // int num2;
    // cout << "Enter a number: ";
    // cin >> num2;

    // for (int i = 1; i <= num2; i++){
    //     bool isPrime = true;
        
    //     if(i <= 1){
    //         isPrime = false;
    //     }
    //     else{
    //         for(int j = 2; j <= i/2; j++){
    //             if(i % j == 0){
    //                 isPrime = false;
    //                 break;
    //             }
    //         }
    //     }

    //     if(isPrime){
    //         cout << i << " ";
    //     }
    
    //swapping two numbers
    // int num1 = 2, num2 = 4;

    // cout << "Before Swapping:\n num1 = " << num1 << " num2 = " << num2 << endl;
    // int temp;

    // temp = num1;
    // num1 = num2;
    // num2 = temp;

    // cout << "After Swapping:\n num1 = " << num1 << " num2 = " << num2 << endl;

    // ANthor mehtod

    // cout << "Before Swapping:\n num1 = " << num1 << " num2 = " << num2 << endl;

    // num1 = num1 + num2; // num2 = 2 + 4 = 6
    // num2 = num1 - num2; // num1 = 6 - 2 = 4 Now num1 becomes 4
    // num1 = num1 - num2; // num2 = 6 - 4 = 2

    // cout << "Before Swapping:\n num1 = " << num1 << " num2 = " << num2 << endl;



    // Compound Interest
    //formula
    // Amount= P(1 + R/100)^t
    // Compound Interest = Amount - P

    // float principle , rate, time;
    // float amount, compoundIntrest;

    // cout << "Enter Principle amount: ";
    // cin >> principle;
    // cout << "Enter the Rate in %: ";
    // cin >> rate;
    // cout << "How many year: ";
    // cin >> time;
    // amount = principle *(pow ((1 + (rate/100)), time));
    // compoundIntrest = amount - principle;

    // cout << "Compound Interest is: "  << compoundIntrest << endl;




    // Write a Program to Check Whether a Number Is a Palindrome or Not.
    // For Example,
    // Input: Number to Check = 1231
    // Output: 1231 is not a palindrome number.


    // int num, digit, palindrome = 0;

    // cout << "Enter a number: ";
    // cin >> num;
    // int original = num;
    
    // while(num != 0){
    //     digit = num % 10;
    //     palindrome = palindrome * 10 + digit;
    //     num /= 10;
    // }

    // if(palindrome == original){
    //     cout << palindrome  << " is Palindrome" << endl;
    // }
    // else{
    //     cout << palindrome << " is not Plaindrome" << endl;
    // }


    // C++ Program For Fibonacci Numbers
    int num, term = 0, nextTerm = 1, temp, sum = 0;

    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Fibonacci Numbers Upto N: ";
    for (int i = 1; i <= num; i++){
        cout << term;
        sum += term;
        if (i < num){
            cout << " + ";
        }
        temp = term + nextTerm;
        term = nextTerm;
        nextTerm = temp;
    }

    cout << "\nSum of these numbers are: " << sum;















    
//     // cout << "Hello World" <<endl;
//     // cout << "Name: Uzair" <<endl;
//     // cout << "City: Muridke" <<endl;
//     // cout << "I'm learning C++" <<endl;

//     // cout << "Name: Uzair\nCity: Muridke\nI'm learning C++\n";

//     // return 0;




//     int num;
//     bool isPrime = true;
//     cout << "ENter a number: ";
//     cin >> num;
//     if (num <= 1){
//         cout << "Number is not Prime";
//         isPrime = false;
//     }

//     else{
//         for (int i = 2; i <= sqrt(num); i++){
//             if (num % i == 0){
//                 isPrime = false;
//                 break;
//             }
//         }
//     }
//     if (isPrime)
//     {
//         cout << "Number is Prime";
//     }
//     else{
//         cout << "Number is Not Prime";
//     }

//     cout << endl;
//     int sum = 0;
//     for (int i = 1; i <= num; i++){
//         cout << i;
//         if(i==num){
//         }
//         else{
//             cout << " + ";
//         }
//         sum = sum + i;
//     }
//     cout << " = " << sum << endl;


//     sum = 0;
//     for (int i = 2; i <= num; i+=2){
//         cout << i;
//         if (i == num){
//         }
//         else{
//             cout << " + ";
//         }
//         sum += i;
//     }
//     cout <<  " = " << sum << endl;



//     sum = 0;

//     for (int i = 1; i <= num; i+=2){
//         cout << i;
//         if (i == num || i == num - 1){
//         }
//         else{
//             cout << " + ";
//         }
//         sum +=i;
//     }

//     cout << " = " << sum << endl;

//     sum = 0;
//     for (int i = 2; i <= num; i++){
//         isPrime = true;

//         for(int j = 2; j <= sqrt(i); j++){
//             if (i % j == 0){
//                 isPrime = false;
//                 break;
//             }
//         }
//         if(isPrime){
//             cout << i << " ";
//             sum += i;
//         }
//     }
//     cout <<" = " << sum;








// cout << endl;


// // upper
//     for (int i = 1; i <= 5; i++){
//         for (int j = 5; j > i; j--){
//             cout << " ";
//         }
//         for(int k = 1; k <=i; k++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// // lower
//     for (int i = 4; i >= 1; i --){
//         for (int j = 5; j > i; j--){
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++){
//             if (k == 1 || k == i){
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

}