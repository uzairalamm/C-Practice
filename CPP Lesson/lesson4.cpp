#include <iostream>
#include <cmath>
using namespace std;


// // Function declaration
// void sayHello();

// // Function definition
// void sayHello() {
//     cout << "Hello Uzair, welcome to C++!" << endl;
// }

// int main() {
//     sayHello();  // Function call
//     return 0;
// }

// -----------------------------Return is_function-----------------------------

// #include <iostream>
// using namespace std;

// // Step 1: Declaration
// float add(float a, float b);

// // Step 2: Definition
// float add(float a, float b) {
//     return a + b;
// }

// int main() {
//     // Step 3: Calling
//     float sum = add(10.4, 20.2);
//     cout << "The sum is: " << sum;
//     return 0;
// }

// -----------------------------------------------------------------------------



// #include <iostream>
// using namespace std;

// // Step 1: Declaration and definition
// float add(float a, float b) {
//     return a + b;
// }

// int main() {
//     // Step 3: Calling
//     float sum = add(10.4, 20.2);
//     cout << "The sum is: " << sum;
//     return 0;
// }



// --------------------------------------------------------------------

// Maximum finder → Write a function that takes two numbers and returns the larger one.

// #include <iostream>
// #include <cmath>

// double maximumNumber (double x, double y){
//     return max(x , y);
// }

// int main(){
//     double num1, num2,maximum;
//     cout << "Enter Two numbers: ";
//     cin >> num1 >> num2;

//     maximum = maximumNumber(num1, num2);

//     cout << "Maximum Number is: " << maximum << endl;

//     return 0;
// }


// -------------------------------------------------------------
// Square function → Write a function that takes a number and returns its square.

// int mySquare(int x){
//     return x * x;
// }

// int main (){
//     int num1, Square;
    
//     cout << "ENter a number: ";
//     cin >> num1;

//     Square = mySquare(num1);

//     cout << "Square of " << num1 << " is: " << Square;
// }


    // string greet(string myName){
    //     return "Hello " + myName + ", How are you doing.";
    // }

    // int main(){
    //     string name;
    //     cout << "Enter your name: ";
    //     getline (cin, name);

    //     name = greet(name);
    //     cout << name;
    // }


    // char vowel(char x){
    //     x = tolower(x);
    //     return ( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' );
    // }

    // int main() {
    //     char ch;

    //     cout << "Enter a character: ";
    //     cin >> ch;

    //     if (vowel(ch)){
    //         cout << "It is vowel";
    //     }
    //     else{
    //         cout << "consonet..";
    //     }
    // }


    // Maximum finder → Write a function that takes two numbers and returns the larger one.

    // int max_number(int x, int y, int z){
    //     return max(x , max(y, z));
    // }

    // int min_number(int x, int y, int z){
    //     return min(x , min(y, z));
    // }

    // int middle_number(int x, int y, int z) {
    // int maximum = max_number(x, y, z);
    // int minimum = min_number(x, y, z);
    // return (x + y + z) - (maximum + minimum);
    // }

    // int main (){
    // int num1, num2, num3;
    // cout <<"ENter three number: ";
    // cin >> num1 >>num2 >> num3;

     
    // cout << "Max number is: " << max_number(num1, num2, num3) << endl;
    // cout << "Middle number is: " << middle_number(num1, num2, num3) << endl;
    // cout << "Min number is: " << min_number(num1, num2, num3) << endl;

    // }


    // Temperature converter → Write a function that converts Celsius to Fahrenheit and returns the result.

    // float celsius(float x){
    //     return (1.8 * x) + 32;
    // }

    // float fahrenhiet (float x){
    //     return (x - 32) * 5/9;
    // }

    // int main (){
    //     float temp;

    //     cout << "Enter a temp in celsius: ";
    //     cin >> temp;

    //     cout << "Your Temp in fahrenhiet is: " << celsius(temp) << "F" << endl;

    //     cout << "Enter Your Temp in Fahrenhiet: ";
    //     cin >> temp;

    //     cout << "Your Temp in Celsius is: " << fahrenhiet(temp) << "C" << endl;
    // }

    int fact(int x){
        int myfact = 1;
        for(int i = 1; i <= x; i++){
            myfact = myfact * i;
        }
        return myfact;
    }


    bool isPrime(int x){
        if (x <= 1){
            return false;
        }
        else{
        for (int i = 2; i <= sqrt(x); i++)
            {
                if(x % i == 0){
                    return false;
                    break;
                }
            }
        }
        return true;
    }


    int power(int x, int y){
        y = x;
        for (int i = 1; i <=y; i++){
            x = x * x;
        }
        return x;
    }

    int main (){
        int num, num2;
        // cout << "Enter a number: ";
        // cin >> num;

        // if (isPrime(num)){
        //     cout << num << " is Prime" << endl;
        // }
        // else{
        //     cout << num << " is not Prime" << endl;
        // }

        // cout << "Factorial of " << num << " is: " << fact(num) << endl;
        
        cout << "ENter two number: ";
        cin >> num >> num2;

        num = power(num, num2);
        cout << num;
    
    
    }
