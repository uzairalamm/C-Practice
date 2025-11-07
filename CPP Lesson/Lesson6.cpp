#include <iostream>
#include <algorithm>
using namespace std;


void myinput(int userInput[], int size){

    for (int i = 0; i < size; i++){
        cout << "Enter Number " << i + 1 << ": ";
        cin >> userInput[i];
    }
}

double myMean(int userInput[], int size){
    double mean, sum = 0;
    for (int i = 0; i < size; i++){
        sum = sum + userInput[i];
    }
    
    mean = sum/size;
    return mean;
}

double myMedian(int userInput[], int size){
    double median;
    sort(userInput, userInput + size);
    if(size % 2 == 0){
        median = (userInput[size/2 - 1] + userInput[size/2])/ 2;
        return median;
    }
    else{
        median = userInput[size/2];
        return median;
    }
}

double myMode(int userInput[], int size){
    double mode = userInput[0];
    int maxCount = 1;
    for (int i = 0; i < size; i++){
        int count = 1;
        for (int j = i + 1; j < size; j++){
            if (userInput[j] == userInput[i]){
                count++;
            }
        }
        if (count > maxCount){
            maxCount = count;
            mode = userInput[i];
        }
    }
    
    if (maxCount == 1) {
        // No repeated value
        return 0;
    }
    return mode;
}

int main(){
    int size;
    cout << "How many Numbers Do you want to Enter: ";
    cin >> size;
    int userInput[size];
    myinput(userInput, size);
    cout <<endl;
    cout << "Mean is: " << myMean(userInput, size) << endl;
    cout << "Median is: " << myMedian(userInput, size) << endl;
    cout << "Mode is: " << myMode(userInput, size) << endl;


}








