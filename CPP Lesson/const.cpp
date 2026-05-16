#include <iostream>
#include <string>
using namespace std;

int main()
{
    // what is const?
    // Its like we make a promise that this value will not change throughout the program. It is a way to protect data from accidental modification.

    const int MAX_AGE = 90;
    int *pointer = new int; // pointer to int (not const) memeory allocated on heap

    pointer = (int *)&MAX_AGE; // assign address of MAX_AGE to pointer (not recommended)
    // by this method we can access the value of MAX_AGE through pointer, but we should not modify it as it is declared as const.
    // Modifying it would lead to undefined behavior.

    cout << *pointer << endl;

    //========================================================
    // Now there are others ways to use const with pointers:
    //========================================================

    //========================================================
    const int *ptr1 = new int; // pointer to const int (value cannot be changed through ptr1)
    // now here i cannot change the value at the address ptr1 points to like this
    // *ptr1 = 30; // this will cause a compile-time error because ptr1 points to a const int
    delete ptr1; // to avoid memory leak

    //========================================================
    int *const ptr2 = new int; // const pointer to int (pointer itself cannot point to another address, but value can be changed if not const)
    // like this
    *ptr2 = 50; // we can change the value at the address ptr2 points to
    // but i cannot add another address to ptr2 like this
    // ptr2 = &MAX_AGE; // this will cause a compile-time error because ptr2 is a const pointer
    delete ptr2; // to avoid memory leak

    //========================================================
    int const *ptr3 = new int; // pointer to const int (it is the same as the first one, just different syntax)
    delete ptr3;               // to avoid memory leak

    const int *const ptr4 = new int; // const pointer to const int (pointer cannot point to another address and value cannot be changed through ptr4)
    // *ptr4 = 40; // this will cause a compile-time error because ptr4 points to a const int
    // ptr4 = &MAX_AGE; // this will cause a compile-time error because ptr4 is a const pointer
    delete ptr4; // to avoid memory leak

    return 0;
}