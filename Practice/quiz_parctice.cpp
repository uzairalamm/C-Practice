// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){ 
//     // int num;
//     // bool isPrime = true;


//     // cout << "Enter a Number: ";
//     // cin >> num;

//     // if( num <=1){
//     //     isPrime = false;}
//     // else{
//     //     for (int i = 2; i <= sqrt(num); i++){
//     //         if (num % i == 0)
//     //         {
//     //             isPrime = false;
//     //             break;
//     //         }
//     //     }
//     // }

//     // if (isPrime){
//     //     cout << num << " is Prime number" << endl;
//     // }
//     // else{
//     //     cout << num << " is not Prime" << endl;
//     // }



//     // int num, t1 = 0, t2 = 1, nextTerm;

//     // cout << "Enter a number: ";
//     // cin >> num;

//     // for (int i = 1; i <= num; i++){
//     //     cout << t1 << " ";
//     //     nextTerm = t1 + t2;
//     //     t1 = t2;
//     //     t2 = nextTerm;
//     // }

//     // char ch;
//     // cout << "Enter a character: ";
//     // cin >> ch;
//     // int asciiValue = int(ch);
//     // cout << asciiValue;


//     // int num, fact = 1;

//     // cout << "Enter a Number: ";
//     // cin >> num;

//     // for (int i = 1; i <=num; i++){
//     //    cout << i;
//     // if (i == num){
//     //  }
//     //  else {
//     //     cout << " x ";
//     //  }
//     //     fact = fact * i;
//     // }
//     // cout << ": " << fact;

//     // int num, sum = 0;

//     // cout << "Enter a number: ";
//     // cin >> num;

//     // for (int i= 1; i <= num; i++){
//     //     cout << i;
//     //     if(i == num){

//     //     }
//     //     else {
//     //         cout << " + ";
//     //     }

//     //     sum = sum + i;
//     // }
//     // cout << ": " << sum;


//     // int num, sum = 0;
//     // cout << "Enter a number: ";
//     // cin >> num ;

//     // for (int i = 1; i <= num; i++){
//     //     if (i % 2 != 0){
//     //         cout << i;
//     //         if (i == num - 1 || i == num){

//     //         }
//     //         else {
//     //             cout << " + ";
//     //         }
//     //         sum = sum + i;
//     //     }
//     // }

//     // cout << ": " << sum << endl;


//     // int num, num1, num2, num3;

//     // cout << "enter Four number: ";
//     // cin >> num >> num1 >> num2 >> num3;


//     // cout << "Largest number is: " << max (num, max(num1, max (num2, num3)));



//     // cout << sqrt(64) << "\n"; cout << round(2.6) << "\n"; cout << log(2) << "\n";
//     // cout << fmax(2.09, 3.09) << "\n"; cout << fmin(2.09, 3.09) << "\n"; cout << max(5,6) << "\n";
//     // cout << min(5,6) << "\n"; return 0;


//     // int bill, discount;
//     // cout << "How much bill you got: ";
//     // cin >> bill;

//     // if (bill >= 5000){
//     //     discount = bill * 20/100;
//     //     bill = bill - discount;
//     //     cout << "You got 20% discount. Your current now is: " << bill << endl;
//     // }

//     // else if ( bill >= 2000){
//     //     discount = bill * 10/100;
//     //     bill = bill - discount;
//     //     cout << "You got 10% discount. Your current now is: " << bill << endl;
//     // }

//     // else {
//     //     cout << "You got no discount" << bill << endl;
//     // }

    
//     // int age, salary;
//     // char designation;
//     // string field;


//     // cout << "Enter your Age: ";
//     // cin >> age;

//     // if (age >= 18 && age <= 60){
//     //     cout << "D for designer" <<endl;
//     //     cout << "I for Intern" << endl;
//     //     cout << "M for Manager" << endl;
//     //     cout << "Choose Your Designation: " << endl;

//     //     cin >> designation;

//     //     switch (designation)
//     //     {
//     //     case 'D':
//     //     case 'd':
//     //         salary = 100000, field = "\"Designer\"";
//     //         break;
        
//     //     case 'I':
//     //     case 'i':
//     //         salary = 22000, field = "\"intern\"";
//     //         break;

//     //     case 'M':
//     //     case 'm':
//     //     salary = 219900, field = "\"manager\"";
//     //     default:
//     //         cout << "choose the right field" << endl;
//     //         break;
//     //     }

//     //     cout << "Your salary is : " << salary << ". Your field is: " << field << endl;

//     // }

//     // else{
//     //     cout << "You Are Not Eligible" << endl;
//     // }



// //    for (num = 1; num <= 500; num++){
// //         sum = 0;
// //         for (int i = 1; i < num; i++){
// //             if (num % i == 0){
// //                 sum += i;
// //             }
// //         }
    
// //     if (sum == num){
// //         cout << num << " ";
// //     }
// //     }



//     // int num, num2, i, sum;

//     // cout << "Enter a number: ";
//     // cin >> num2;

//     // cout << "Perfect number upto " << num2 << " are: ";
//     // for (num = 1; num <= num2; num++){
//     //     sum = 0;
//     //     for (i = 1; i < num; i++){
//     //         if (num % i == 0){
//     //             sum += i;
//     //         }
//     //     }

//     //     if (num == sum){
//     //     cout << num << " "; 
//     //     }
//     // }






//     // int base, expo, result = 1;

//     // cout << "Enter a number: ";
//     // cin >> base;

//     // cout << "Enter its power: ";
//     // cin >> expo;


//     // for (int i = 1; i <= expo; i++){
//     //     result = result * base;
//     // }

//     // cout << result;


//     return 0;
// }

// #include <iostream>
// using namespace std;
// // Power function
// long long power(int x, int y){
//     long long result = 1;
//     for (int i = 1; i <= y; i++){
//         result = result * x;
//     }

//     return result;
// }

// // crystal shape function
// int crystal(int x){
//     for (int i = 1; i <= x; i++){
//         for (int j = x; j > i; j--){
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++){
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     for (int i = x - 1; i >= 1; i--){
//         for (int j = x; j > i; j--){
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


// int main (){
//     int base, expo, row;
//     cout << "Enter the base: ";
//     cin >> base;
//     cout << "Enter its exponenet: ";
//     cin >> expo;

//     cout << base << " ^ " << expo << " = " << power(base, expo);
//     cout <<endl;


//     cout << "enter the row: ";
//     cin >> row;

//     cout << crystal(row);
// }
#include <iostream>
using namespace std;

int main(){
    
    // for(int i = 1; i <= 5; i++){
    //     for (int j = 5; j > i; j--){
    //         cout << " ";
    //     }

    //     for( int k= 1; k <= i; k++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for(int i = 4; i >= 1; i--){
    //     for (int j = 5; j > i; j--){
    //         cout << " ";
    //     }

    //     for( int k= 1; k <= i; k++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 5; j++){
           if (i == 0 || i == 4 || j == 0 || j == 4){
            cout << "*";
           }
           else{
            cout << " ";
           }
        }
        cout << endl;
    }




    return 0;
}