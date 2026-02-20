#include <iostream>
#include <string>
using namespace std;

// void test(int &a, int b)
// {
//     a += 5;
//     b *= 3;
//     cout << a << " " << b << endl;
// }
// int main()
// {
//     int a = 7, b = 29;
//     test(a, b);
//     cout << a << " " << b << endl;
// }

// void primeRange(int a, int b)
// {

//     int greaterNum, smallerNum;
//     if (a >= b)
//     {
//         greaterNum = a;
//         smallerNum = b;
//     }
//     else
//     {
//         greaterNum = b;
//         smallerNum = a;
//     }
//     for (int i = smallerNum; i <= greaterNum; i++)
//     {
//         bool isPrime = true;
//         if (i <= 1)
//         {
//             isPrime = false;
//         }
//         else
//         {
//             for (int j = 2; j <= i / 2; j++)
//             {
//                 if (i % j == 0)
//                 {
//                     isPrime = false;
//                     break;
//                 }
//             }
//             if (isPrime)
//             {
//                 cout << i << " ";
//             }
//         }
//     }
//     cout << endl;
// }
// int main()
// {
//     primeRange(7, 29);
// }

// ==================Sum 1-N Number===================
// int nthSum(int &n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }
void line()
{
    cout << "----------------------------------\n";
}

// int main()
// {
//     int n;
//     cout << "Enter the Integer N: ";
//     cin >> n;
//     line();
//     cout << "Sum of " << n << " integers is: " << nthSum(n) << endl;
// }

// ==================Calculate N Factorial===================
// long long fact(int &n)
// {
//     long long factorial = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }

// int main()
// {
//     int n;
//     cout << "Enter the Integer N: ";
//     cin >> n;
//     line();
//     cout << "Factorial of " << n << " is: " << fact(n) << endl;
// }

// ==================Fibonacci series===================
void printFibonacci(int n)
{
    int sum = 0, firstTerm = 0, secondTerm = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << firstTerm << " ";
        sum = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = sum;
    }
}

int main()
{
    printFibonacci(8);
}