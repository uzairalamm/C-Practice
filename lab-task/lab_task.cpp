#include <iostream>
using namespace std;

int main() {
    int num, t1 = 0, t2 = 1, next_Term;

    cout << "Enter a number: ";
    cin >> num;

    cout << num << " term of Fibonacci series is: ";

    for (int i = 1; i <= num ; i++){

        cout << t1 << " ";
        next_Term = t1 + t2;
        t1 = t2;
        t2 = next_Term;
    }
}