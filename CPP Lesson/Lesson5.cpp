#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>
using namespace std;

// valid mail function
string email(string mail)
{

    if (mail.find('@') != string::npos && mail.find('.') != string::npos)
    {
        return "Valid email";
    }
    else
    {
        return "invalid email";
    }
}

// calculate age funtion
int calculateYear(int birthYear, int currentYear)
{
    return currentYear - birthYear;
}

// Strong password checker function
void checkPassword(string Password)
{
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    for (char ch : Password)
    {
        if (isupper(ch))
            hasUpper = true;
        else if (islower(ch))
            hasLower = true;
        else if (isdigit(ch))
            hasDigit = true;
        else
            hasSpecial = true;
    }

    if (Password.length() >= 8 && hasUpper && hasLower && hasDigit && hasSpecial)
    {
        cout << "Strong Password";
    }
    else
    {
        cout << "Weak Password\nMust contain Upper, special letter and digit";
    }
}

// Addition of two number function
double addnumber(int num1, int num2)
{
    return num1 + num2;
}

// Print Hello world
void printHello()
{
    cout << "Hello World";
}

// Power Function
double power(int base, int expo)
{
    double result = 1;
    for (int i = 1; i <= expo; i++)
    { // lets say base = 2, expo = 3;
      // result = 2 x 1, then 2 x 2, then 2 x 4, then loop terminate and we will get = 8 as a result;
        result = base * result;
    }
    return result;
}

// Maximum finder
float maxFinder(float num1, float num2, float num3)
{
    if (num1 >= num2 && num1 >= num3)
    {
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

// Least number Finder
float minFinder(int num1, int num2, int num3)
{
    if (num1 <= num2 && num1 <= num3)
    {
        return num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

// Middle Number FInder
float midFinder(int num1, int num2, int num3)
{
    if (num1 >= num2 && num1 <= num3 || num1 <= num2 && num1 >= num3)
    {
        return num1;
    }
    else if (num2 >= num1 && num2 <= num3 || num2 <= num1 && num2 >= num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

// Temperature converter
float Cel_To_Fahren(float temp)
{
    return (temp * 1.8) + 32;
}

float Fahren_To_Cel(float temp)
{
    return (temp - 32) * 5 / 9;
}

// Vowels Counter
int vowelCount(string statement)
{
    int count = 0;
    for (int i = 0; i <= statement.length(); i++)
    {
        char ch = tolower(statement[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    return count;
}

// vowelFInder

void vowelFinder(string text)
{
    int count = 0;

    cout << "Vowel Find: ";
    for (int i = 0; i <= text.length(); i++)
    {
        char ch = tolower(text[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << ch << " ";
            count++;
        }
    }
    cout << endl;
    cout << "Total Vowel in this Statement: " << count;
}

// diamond shape function

void diamond(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Lower Body

    for (int i = row - 1; i >= 1; i--)
    {
        for (int j = row; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Left diamond shape function

void leftDiamond(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Lower Body

    for (int i = row - 1; i >= 1; i--)
    {
        for (int j = row; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Right diamond shape function

void rightDiamond(int row)
{
    for (int i = 1; i <= row; i++)
    {

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Lower Body

    for (int i = row - 1; i >= 1; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Right heart

void Heart(int row)
{
    for (int i = 2; i <= row - (row / 2); i++)
    {
        for (int j = row - (row / 2); j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }
        for (int j = row - (row / 2); j > i; j--)
        {
            cout << " ";
        }
        for (int j = row - (row / 2); j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    // Lower Body

    for (int i = row; i >= 1; i--)
    {
        for (int j = row; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

// Write a function that prints your name, age, and city.
void myVerify(int age, string name, string city)
{
    cout << "Enter Your Name: ";
    getline(cin, name);

    cout << "Enter Your Age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter Your City: ";
    getline(cin, city);

    cout << "Hey " << name << "! You are " << age << " years old, and you live in " << city << endl;
}

// Create a function that prints all even numbers from 1 to 20.
void printEven(int num)
{
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i <= num; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
}

// Make a function that displays a welcome message three times using a loop.

void greet(string message)
{
    int i = 1;
    cout << "Enter the statement: ";
    getline(cin, message);
    while (i <= 3)
    {
        cout << message << endl;
        i++;
    }
}

// 🟢 Part 1: Argument, No Return
// Write a function that takes an integer and prints whether it’s even or odd.
void evenOdd(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " Number is Even";
    }
    else
    {
        cout << num << " Number is Odd";
    }
}

// Make a function that takes your marks (int) and prints the grade (A/B/C/F).
void gradeChecker(char marks)
{
    if (marks >= 90)
    {
        cout << "Grade A";
    }
    else if (marks >= 75)
    {
        cout << "Grade B";
    }
    else if (marks >= 55)
    {
        cout << "Grade C";
    }
    else
    {
        cout << "Grade F";
    }
}

// Create a function that takes two numbers and prints their sum, difference, and product.
void arthOP(int num1, int num2)
{
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
    if (num2 == 0)
    {
        cout << "Error! Division by Zero" << endl;
    }
    else
    {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    }
}

// 🟡 Part 2: no Argument, No Return
// Write a function that takes an integer and prints whether it’s even or odd.

void even_Odd()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is even";
    }
    else
    {
        cout << num << " is Odd";
    }
}

// 🟠 Part 3: Argument, With Return
// Write a function that returns the current year (2025).
int currentYear(int year)
{
    return 2025;
}

// Make a function that asks the user to input a number, then returns it to main().
int number(int num)
{
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

// Write a function that returns the cube of a fixed number (e.g., 3³ = 27).
double myCube(int num)
{
    double cube = num * num * num;
    return cube;
}

// Write a function that takes two numbers and returns their average.
int myAverage(int num, int num1)
{
    return (num + num1) / 2;
}

// Make a function that takes a character and returns whether it’s a vowel or consonant.
bool voWels(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || 'o' || 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Write a function that takes two numbers and returns the greater one.
int myMax(int num, int num1)
{
    if (num >= num1)
    {
        return num;
    }
    else
    {
        return num1;
    }
}

// Create a function that takes an integer and returns whether it’s a prime number or not.
bool myPrime(int num)
{
    bool isPrime = true;

    if (num <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 🔺 Advanced / Mixed Practice
// Write a function that takes a number and returns the factorial.
long long myFact(int num)
{
    long long fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

// Build a small program that uses:
// A function to get input
// A function to process
// A function to display result

void myInput(int a, int b)
{
    cout << "Enter two number: ";
    cin >> a >> b;
}

int myProcess(int a, int b)
{
    return a + b;
}

void display(int result)
{
    cout << "sum is: " << result << endl;
}

// 1️⃣ Check Palindrome (Word or Number)
void isPalindrome(int num, string word)
{
    int num_rev = 0, digit, origin_num;
    string text_rev = "", origin_text;

    // Check if Number is Palindrome
    cout << "Enter a number: ";
    cin >> num;
    cin.ignore();
    origin_num = num;

    while (num != 0)
    {
        digit = num % 10;
        num_rev = (num_rev * 10) + digit;
        num = num / 10;
    }
    if (num_rev == origin_num)
    {
        cout << num_rev << " is Palindrome" << endl;
    }
    else
    {
        cout << num_rev << " is not Palindrome" << endl;
    }

    // Check if a word is Palindrome
    cout << "Enter a word: ";
    cin >> word;
    origin_text = word;

    for (int i = word.length() - 1; i >= 0; i--)
    {
        text_rev += word[i];
    }
    if (text_rev == origin_text)
    {
        cout << text_rev << " is Palindrome" << endl;
    }
    else
    {
        cout << text_rev << " is not palindrome" << endl;
    }
}

// Write a function that takes a string and returns the number of vowels and consonants separately.
void charChecker(string statement)
{
    int countC = 0, countV = 0, countT = 0;
    statement;

    cout << "Enter a statement: ";
    getline(cin, statement);

    for (char ch : statement)
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            countV++;
        }
        else
        {
            countC++;
        }
        countT++;
    }

    cout << "This Statement contains" << endl;
    cout << "Vowels: " << countV << endl;
    cout << "Consonent: " << countC << endl;
    cout << "Total: " << countT << endl;
}

// Write a function that calculates the power of a number manually.
double myPower(int base, int expo)
{
    double result = 1;
    for (int i = 1; i <= expo; i++)
    {
        result = result * base;
    }
    return result;
}
// 5️⃣Write a function that Count Digits and Sum.
void digit_sum_Count(int num)
{
    int digit, countDigit = 0, sumDigit = 0;
    while (num != 0)
    {                      // ok you have num = 567
        digit = num % 10;  // 567 % 10 = 7; because we get 7 remainder which is our modulas
        sumDigit += digit; // sumdigit = 0 + 7 = 7
        num = num / 10;    // now our 567 / 10 = 56... why because its integer and we donot get dot value so .7 left the chat
        countDigit++;      // countDigit = 1; repeat until num = 0; at that point our loop will get terminated and we get digit count = 3, and sum = 18
    }

    cout << "Total Digits: " << countDigit << endl;
    cout << "Sum of Digits : " << sumDigit << endl;
}

// Write a function that takes two numbers (start and end) and prints all prime numbers in that range.

void primeRange(int a, int b) // lets say you pass a= 7, b =   21
{

    if (a < b) // check whether a is g
    {
        cout << "Prime Numbers in the range of " << a << "-" << b << " are: ";

        for (int i = a; i <= b; i++)
        {
            bool isPrime = true;

            if (i <= 1)
            {
                isPrime = false;
            }
            else
            {
                for (int j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
            }

            if (isPrime)
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        cout << "Prime Numbers in the range of " << b << "-" << a << " are: ";
        for (int i = b; i <= a; i++)
        {
            bool isPrime = true;

            if (i <= 1)
            {
                isPrime = false;
            }
            else
            {
                for (int j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
            }

            if (isPrime)
            {
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

// Write a function that Check whether a number is an Armstrong number or not.

void armStrong(int num)
{
    int digit, armstrongNum = 0, original;

    original = num;
    while (num != 0)
    {
        digit = num % 10;
        armstrongNum = armstrongNum + digit * digit * digit;
        num = num / 10;
    }

    if (armstrongNum == original)
    {
        cout << original << " is a Armstrong Number" << endl;
    }
    else
    {
        cout << original << " is not a Armstrong Number" << endl;
    }
}

// Write a function that takes a string and checks if it’s a valid password.
void validPassword(string password)
{
    bool hasSpecial = false;
    for (char ch : password)
    {
        if ((ch >= '0' && ch <= '9') && (ch >= 'a' && ch <= 'z') && (ch >= 'A' && ch <= 'Z'))
        {
        }
    }
}

// write a function that give first 100 min free, and after that every min cost 2 ruppees.
int billCount(int min)
{
    int first100Min = 100;
    int totalMin = min - first100Min;
    int totalBill = 2 * totalMin;
    return totalBill;
}

// main function
int main()
{

    int min;
    cout << "Enter How many min you Talked: ";
    cin >> min;
    if (min <= 100)
    {
        cout << "Hey, Your Talk is completely free " << endl;
    }
    else
    {
        cout << "Your Total Bill is: " << billCount(min) << " Ruppees" << endl;
    }

    // int base, expo, num, num1;
    // string text;

    // cout << "Enter a number: ";
    // cin >> num;
    // armStrong(num);

    // char checker program using function
    //  charChecker(text);

    // Power Program using function
    //  cout << "Entre Base: ";
    //  cin >> base;
    //  cout << "Enter Exponent: ";
    //  cin >> expo;
    //  cout << base << "^" << expo << " = " << myPower(base, expo) << endl;

    // Find Prime Range Program
    //  cout << "Enter First number: ";
    //  cin >> num;
    //  cout << "Enter Second number: ";
    //  cin >> num1;
    //  primeRange(num, num1);

    // digit count and sum function
    //  cout << "Enter a number: ";
    //  cin >> num;

    // digit_sum_Count(num);

    // int num; string word;
    // is palindrome program..
    // isPalindrome(num, word);

    // int num, num1, marks, year;
    // char ch;

    // // Program of takes an integer and prints whether it’s even or odd.
    // cout << "Enter a number: ";
    // cin >> num;
    // evenOdd(num); //call function
    // cout <<endl; // new line

    // // Program that takes your marks (int) and prints the grade (A/B/C/F).
    // cout << "Enter Your Marks: ";
    // cin >> marks;
    // gradeChecker(marks);
    // cout << endl;

    // // Program that takes two numbers and prints their sum, difference, and product.
    // cout << "Enter two Numbers: ";
    // cin >> num >> num1;

    // arthOP(num, num1);
    // cout << endl;

    // // Program that returns the current year (2025).
    // cout << "Enter a Current: ";
    // cin >> year;
    // cout << "Current Year is: " << currentYear(year) << endl;

    // // Program that asks the user to input a number, then returns it to main().
    // cout << number(num);
    // cout << endl;

    // // Program that returns the cube of a fixed number (e.g., 3³ = 27).
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << "Cube of " << num << " is: " << myCube(num) << endl;

    // // Program takes two numbers and returns their average.
    // cout << "Enter Two Numbers: ";
    // cin >> num >> num1;
    // cout << "Average is: " << myAverage(num, num1) << endl;

    // // Program that takes a character and returns whether it’s a vowel or consonant.
    // cout << "Enter a character: ";
    // cin >> ch;
    // if(voWels(ch)){
    //     cout << ch << " is Vowels" << endl;
    // }
    // else{
    //     cout << ch << " is Consonent" << endl;
    // }

    // // Program that takes two numbers and returns the greater one.
    // cout << "Enter Two Numbers: ";
    // cin >> num >> num1;
    // cout << "Max Number is: " << myMax(num, num1) << endl;

    // // Program that takes an integer and returns whether it’s a prime number or not.
    // cout << "Enter a number: ";
    // cin >> num;
    // if (myPrime(num)){
    //     cout << num << " is a Prime Number" << endl;
    // }
    // else{
    //     cout << num << " is not a Prime Number" << endl;
    // }

    // int age, num;
    // string text, name, city;

    // myVerify(age, name, city);
    // cout << endl;

    // printEven(num);
    // cout << endl;

    // greet(text);
    // cout << endl;

    // int row;
    // cout << "Enter number of Row: ";
    // cin >> row;

    // diamond(row);
    // cout << endl;

    // leftDiamond(row);

    // cout << endl;

    // rightDiamond(row);

    //     cout << endl;

    // Heart(row);

    // string text;
    // cout << "Enter a statement: ";
    // getline (cin, text);

    // cout << "Vowel Count: " << vowelCount(text) << endl;

    // vowelFinder(text);

    // int temp;

    // //Celcius to Fahrenhiet
    // cout << "Enter Temp in Celcius: ";
    // cin >> temp;
    // cout << "Temp in Fahrenhiet is: " << Cel_To_Fahren(temp) <<"F" << endl;

    // temp = 0;
    // //Fahrenhiet to Celcius
    // cout<< "Enter Temp in Fahrenhiet: ";
    // cin >> temp;
    // cout << "Temp in Celcius is: " << round(Fahren_To_Cel(temp)) <<"C" << endl;

    // int num1, num2, num3;
    // cout << "Enter 3 numbers: ";
    // cin >> num1 >> num2 >> num3;

    // cout << "The max number is: " << maxFinder(num1, num2, num3) << endl;
    // cout << "The Mid number is: " << midFinder(num1, num2, num3) << endl;
    // cout << "The Min number is: " << minFinder(num1, num2, num3) << endl;

    // int base, expo;

    // cout << "Enter base: ";
    // cin >> base;
    // cout << "Enter expo: ";
    // cin >> expo;

    // cout << power(base,expo);

    // int birthYear, currentYear;
    // string mail, password;

    // cout << "Enter Your mail: ";
    // cin >> mail;
    // cout << email(mail);
    // cout << endl;

    // cout << "Enter Your BirthYear: ";
    // cin >> birthYear;
    // cout << "Enter the current Year: ";
    // cin >> currentYear;
    // cout << "Your Age is: " << calculateYear(birthYear, currentYear);
    // cout << endl;

    // cout << "Enter Your Password: ";
    // cin >> password;
    // checkPassword(password);
}