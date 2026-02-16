#include <iostream>
#include <string>
using namespace std;

void test(int &a, int b)
{
    a += 5;
    b *= 3;
    cout << a << " " << b << endl;
}

void primeRange(int a, int b) // lets say you pass a= 7, b =   21
{

    int greaterNum, smallerNum;
    if (a >= b)
    {
        greaterNum = a;
        smallerNum = b;
    }
    else
    {
        greaterNum = b;
        smallerNum = a;
    }
    for (int i = smallerNum; i <= greaterNum; i++)
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
            if (isPrime)
            {
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int a = 7, b = 29;
    // test(a, b);
    // cout << a << " " << b << endl;

    primeRange(a, b);
}