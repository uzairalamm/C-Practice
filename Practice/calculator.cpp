#include <iostream>
#include <cmath>
using namespace std;

// int main() {
//     int choice;
//     double num1, num2, result, angle;

//     cout << "=== Scientific Calculator ===\n";
//     cout << "1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n";
//     cout << "5. Power (x^y)\n6. Square root\n7. sin(angle)\n8. cos(angle)\n9. tan(angle)\n";
//     cout << "10. arcsin(x)\n11. arccos(x)\n12. arctan(x)\n13. to stop\n";
//     cout << "Enter your choice: ";

//     cin >> choice;

//     switch(choice) {
//         case 1:
//             cout << "Enter two numbers: ";
//             cin >> num1 >> num2;
//             result = num1 + num2;
//             break;
//         case 2:
//             cout << "Enter two numbers: ";
//             cin >> num1 >> num2;
//             result = num1 - num2;
//             break;
//         case 3:
//             cout << "Enter two numbers: ";
//             cin >> num1 >> num2;
//             result = num1 * num2;
//             break;
//         case 4:
//             cout << "Enter two numbers: ";
//             cin >> num1 >> num2;
//             if(num2 != 0)
//                 result = num1 / num2;
//             else {
//                 cerr << "Division by zero error!\n";
//                 return 0;
//             }
//             break;
//         case 5:
//             cout << "Enter base and exponent: ";
//             cin >> num1 >> num2;
//             result = pow(num1, num2);
//             break;
//         case 6:
//             cout << "Enter a number: ";
//             cin >> num1;
//             if(num1 >= 0)
//                 result = sqrt(num1);
//             else {
//                 cout << "Square root of negative number not allowed!\n";
//                 return 0;
//             }
//             break;
//         case 7:
//             cout << "Enter angle in degrees: ";
//             cin >> angle;
//             result = sin(angle * M_PI / 180.0); // convert to radians
//             break;
//         case 8:
//             cout << "Enter angle in degrees: ";
//             cin >> angle;
//             result = cos(angle * M_PI / 180.0);
//             break;
//         case 9:
//             cout << "Enter angle in degrees: ";
//             cin >> angle;
//             result = tan(angle * M_PI / 180.0);
//             break;
//         case 10:
//             cout << "Enter value (-1 to 1): ";
//             cin >> num1;
//             result = asin(num1) * 180.0 / M_PI; // return in degrees
//             break;
//         case 11:
//             cout << "Enter value (-1 to 1): ";
//             cin >> num1;
//             result = acos(num1) * 180.0 / M_PI;
//             break;
//         case 12:
//             cout << "Enter value: ";
//             cin >> num1;
//             result = atan(num1) * 180.0 / M_PI;
//             break;
//         default:
//             cout << "Invalid choice!\n";
//             return 0;
//             }

//         cout << "Result = " << result << endl;

//     return 0;
// }

int main()
{
    int arr[10];
    // taking input from user
    cout << "Enter 10 Integers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // printing original array
    cout << "Orignal Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // find minimum value and swap
    for (int i = 0; i < 10 - 1; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }

    // Print the swapped array
    cout << "Swapped Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
