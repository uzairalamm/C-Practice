#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int sum = 0, num;
    

    // -------------------------First 10 Natural Number

    cout << "First Ten Natural Number are: ";
    for (int i = 1; i <= 10; i++){
        cout << i << " ";
    }
    cout << endl;



   // -------------------------First 10 Natural Number Sum 

    cout << "Sum of First Ten Natural Number is: ";
    for (int i = 1; i <= 10; i++){
            cout  << i;
        if (i == 10)
        {
            /* code */
        }
        else{
            cout << " + ";
        }
        
            sum = sum + i;
    }
    cout << ": " << sum << endl;




    // -------------------------Perfect Number Between 1 to 500
    
    for (num = 1; num <= 500; num++){
        sum = 0;
        for (int i = 1; i < num; i++){
            if (num % i == 0){
                sum += i;
            }
        }
    
    if (sum == num){
        cout << num << " ";
    }
    }
    cout << endl;



    // -------------------------Square Pattern

    for (int i = 1; i <= 4; i++){
        for (int j = 4; j >= 1; j--){
            cout << "# ";
        }
        cout << endl;
    }


}