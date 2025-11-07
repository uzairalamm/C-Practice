#include <iostream>
using namespace std;

int main(){
        // ✍️ Exercises (Write These Yourself)
        // Exercise 1:
        // Declare these variables:

        // Your age (as int)

        // Your height in feet (as float)

        // First letter of your name (as char)

        // Your full name (as string)

        // Whether you are a student (as bool)



    // int age = 21;
    // float height = 5.4;
    // char first_letter = 'U';
    // string name = "Uzair Alam";
    // bool iStudent = true;

    // cout << "Age: " << age << "\nHeight: " << height <<"\nFirst Letter of My Name: " <<first_letter <<
    // "\nFull Name: " << name << "\nAm i a Student? " <<boolalpha << iStudent <<endl;

    // age = 23;

    // cout << "Updated age: " <<age;



        // 🔹 Q1. User Profile
        // Ask the user to enter:

        // Their full name (with spaces)

        // Age (in years)

        // Favorite programming language

        // Then display all the input nicely formatted.


    // string name, language;
    // int age;

    // cout << "Enter Your Name: ";
    // getline (cin, name);

    // cout << "Enter Your Age: ";
    // cin >> age;
    // cin.ignore();

    // cout << "What's Your Favorite Programming Language: ";
    // getline(cin, language);


    // cout << "Hello: " << name << "\nYou are " << age << " Years Old. \nAnd your Favorite programming language is " << language <<endl;



        // 🔹 Q2. Rectangle Area
        // Ask the user to enter the length and width of a rectangle (float).
        // Then calculate and print the area and perimeter.

        // 👉 Formula:
        // Area = length × width
        // Perimeter = 2 × (length + width)
    // float length, width;

    // cout << "Enter the Lenght: ";
    // cin >> length;

    // cout << "Enter the width: ";
    // cin >> width;

    // cout << "Area: " << length*width << endl;
    // cout << "Primeter: " << 2 * (length + width) <<endl;

        // 🔹 Q3. Marks Percentage Calculator
        // Ask the user to enter marks of 3 subjects (float or int).
        // Then display the total marks and percentage.

    // float math, physics, chemistry;
    // float total_math, total_physics, total_chemistry;
    // float total_marks, obtain_marks;

    // cout << "Enter:\nTotal Math Marks: ";
    // cin >> total_math;
    // cout << "Obtain Marks: ";
    // cin >> math;

    // cout << "Total Physics Marks: ";
    // cin >> total_physics;
    // cout << "Obtain Marks: ";
    // cin >> physics;


    // cout << "Total Chemistry Marks: ";
    // cin >> total_chemistry;
    // cout << "Obtain Marks: ";
    // cin >> chemistry;

    // total_marks = total_math + total_physics + total_chemistry;
    // obtain_marks = math + physics + chemistry;

    // cout << "Total Marks: " << total_marks <<endl;
    // cout << "Total marks obtain: " << obtain_marks << endl;
    // cout << "Percentage in All subject: " << (obtain_marks/total_marks) * 100 << "%"<<endl;
    // cout << "Percentage in math: " << (math/total_math) * 100 << "%"<<endl;
    // cout << "Percentage in physics: " << (physics/total_physics) * 100 << "%"<<endl;    
    // cout << "Percentage in chemistry: " << (chemistry/total_chemistry) * 100 << "%"<<endl;

    
        // 🔹 Q4. Boolean Logic
        // Ask the user:
        // Are you above 18? (Enter 1 for Yes, 0 for No) → store as bool
        // Display a message:
        // "You are an adult." if true
        // "You are not an adult." if false

    // bool adult;

    // cout << "Are you above 18? (Enter 1 for Yes, 0 for No): ";
    // cin >> adult;

    // if (adult == 1){
    //     cout << "You are an Adult" <<endl;
    // }

    // else {
    //     cout << "Your are not an adult." <<endl;
    // }


        // 🔹 Q5. Temperature Conversion
        // Ask the user to enter temperature in Celsius (float), and convert it to Fahrenheit.

        // 👉 Formula:
        // Fahrenheit = (Celsius × 9/5) + 32

    // float temp;
    // cout << "Enter Your Temp in celsius: ";
    // cin >> temp;

    // cout <<"Your Temp is Fahrenhiet is: " << (temp * 1.8) + 32 <<endl;
    // temp = 0;

    // cout << "Enter Your Temp in fahrenhiet: ";
    // cin >> temp;
    // cout << "Your Temp in celsius is: " << (temp - 32)/1.8 <<endl;


        // 🔹 Problem 6: Modulus and Multiplication
        // Statement:
        // Take two integers from the user.
        // Multiply them
        // Show their remainder when divided by 7

    // int num1, num2, product;
    // cout << "Enter 2 number: ";
    // cin >> num1 >> num2;

    // product = num1 * num2;
    // cout << "Product of these number is: " << product << endl;
    // cout << "Remainder when divided by 7 is: " << product % 7 << endl;



        // 🔹 Problem 3: Increment Operator
        // Statement:
        // Take an integer n.
        // Use both post-increment and pre-increment on it.
        // Show their results.
    // int n = 5;
    // n=++n;
    // cout << n <<endl;
    // n=n++;
    // cout << n <<endl;

        // 🔹 Problem 4: Relational Operator
        // Statement:
        // Take the user's age.
        // Show whether the user is:
        // Equal to 18,
        // Less than 18,
        // Greater than 18
        // Use relational operators only.

    // int age;

    // cout << "Enter Your Age: ";
    // cin >> age;

    // if (age < 18){
    //     cout << "Your are not 18 years old yet." << endl;
    // }

    // else if (age > 18){
    //     cout << "You are older 18 Years old." <<endl;
    // }

    // else {
    //     cout << "Your are 18 years." <<endl;
    // }




        // 🔹 Problem 5: Arithmetic Expression
        // Statement:
        // Input 3 numbers: a, b, and c
        // Calculate and display this expression:
        // (a + b) * c / 2

    // int a,b,c;
    // cout << "Enter three number: ";
    // cin >> a >> b >> c;

    // cout << "(" <<a <<" + " << b << ")*" <<c << "/2 = " <<(a+b)*c/2 <<endl;


        // 🔹 Problem 2: Use of Logical Operators
        // Statement:
        // Take 3 integers from the user.
        // Check if:

        // The first number is greater than both the second and third

        // AND the third number is not equal to zero

        // Print true or false using a logical expression only.
    
    // int num, num1, num2;


    // cout << "Enter 3 numbers: ";
    // cin >> num >> num1 >> num2;
    // bool result = (num > num1) && (num > num2) && (num2 !=0);
   
    // cout << "Result: "<<boolalpha << result <<endl;
        
        // 🔹 Challenge 1 – All Pass Condition
        // Take marks of 3 subjects from the user.
        // Check if the student passed all subjects (passing marks ≥ 40).
        // Show true if passed all, otherwise false.
        // (Use && operator.)

    // float math, physics, science;

    // bool result;

    // cout << "Enter Your Math marks: ";
    // cin >> math;

    // cout << "Enter Your Physics Marks: ";
    // cin >> physics;

    // cout << "Enter Your Science Marks: ";
    // cin >> science;

    // result = (math >= 40) && (physics >= 40) && (science >=40);
    // cout << "Result: " <<boolalpha << result << endl;

        // 🔹 Challenge 2 – At Least One Pass
        // Take marks of 3 subjects from the user.
        // Check if the student passed in at least one subject (≥ 40).
        // (Use || operator.)


    // math = 0, physics = 0, science = 0;

    // cout << "Enter Your Math marks: ";
    // cin >> math;

    // cout << "Enter Your Physics Marks: ";
    // cin >> physics;

    // cout << "Enter Your Science Marks: ";
    // cin >> science;

    // result = (math >=40) || (physics >= 40) || (science >=40);
    // cout << "Result: " << boolalpha << result <<endl;

        // 🔹 Challenge 3 – NOT Operator
        // Ask the user: "Are you hungry? (1 for Yes, 0 for No)"
        // If NOT hungry, print "Okay, continue studying C++".
        // Otherwise, print "Go eat something".

    int op;

    cout <<  "Are you hungry? (1 for Yes, 0 for No): ";
    cin >> op;

    if(op == 1){
        cout << "Go eat Something," <<endl;
    }

    else if ( op == 0){
        cout << "Okay, continue studying C++" <<endl;
    }
    else {
        cout << "Please enter only 1 or 0" <<endl;
    }
    return 0;
}