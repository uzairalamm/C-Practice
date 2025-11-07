#include <iostream>
using namespace std;

int main(){
// 🔹 Level 1: Basic Solid Shapes
// ------------------------------------------------------------------------

// Square shape

    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout <<endl;

// Right Triangle shape


    for (int i =1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout <<endl;
    
// Inverted Right Triangle

    for (int i = 4; i >= 1; i --){
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout <<endl; 
    }

    cout <<endl;

// Pyramid shape


    for (int i = 1; i <= 5; i++){
        for (int j = 5; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <=i; k++){
            cout << "* ";
        }
        cout << endl;
    }


// Inverted Pyramid shape

    for (int i = 4; i >= 1; i --){
        for (int j = 5; j > i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "* ";
        }
        
        cout << endl;
    }
    cout <<endl;

// Half Pyramid (rotated 180°)


    for (int i = 1; i <= 5; i++){
        for (int j = 5; j > i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }

    cout <<endl;

// Inverted Half Pyramid (rotated 180°)
    for (int i = 4; i >= 1; i--){
        for (int j = 5; j > i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }

    cout <<endl;

// Character Triangle


    int num = 1;
    char ch = 'A';

    for (int i = 1; i <= 5; i++){

        for (int k = 1; k <= i; k++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout <<endl;

// Number Triangle

        for (int i = 1; i <= 5; i++){
        for (int k = 1; k <= i; k++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    cout <<endl;



// Congratulation, you cover level 1
// --------------------------------------------------------------------------------------------------------

// 🔹 Level 2: Hollow Shapes
// ----------------------------------------------------------------------------------------------------------



// Hollow Square

    for (int i = 5; i >= 1; i--){
        for (int j = 1; j <= 5; j++){
            if(i == 5 || j == 1 || j == 5 || i == 1){
            cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }


// Hollow Right Triangle


    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            if (j == 1 || j == i){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }


// Hollow inverted Right Triangle


    for (int i = 4; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            if (j == 1 || j == i){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }


// Hollow left Triangle

    for (int i = 1; i <= 5; i++){
        for (int j = 5; j > i; j--){
            cout << " ";
        }

        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i || i == 5){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 5; i >= 1; i--){
        for (int j = 5; j > i; j--){
            cout << " ";
        }

        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i || i == 5){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }


// HOllow Butterfly
// ----------------------------------------------------------------------
// upper wing
    for (int i = 1; i <= 5; i++){
        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i){
            cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for (int j = 1; j <= 2*(5 - i); j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i){
            cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

// Lower wing
    for (int i = 5; i >= 1; i--){
        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i){
            cout << "*";
            }
            else{
                cout << " ";
            }
        }
        for (int j = 1; j <= 2*(5 - i); j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i){
            cout << "*";
            }
            else{
                cout << " ";
            }

        }
        cout << endl;
    }



// Butterfly
// ----------------------------------------------------------------------
// upper wing
    for (int i = 1; i <= 5; i++){
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        for (int j = 1; j <= 2*(5 - i); j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";

        }
        cout << endl;
    }

// Lower wing
    for (int i = 5; i >= 1; i--){
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        for (int j = 1; j <= 2*(5 - i); j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }



// 🔹 4. Hollow Hourglass


    for(int i = 5; i > 1; i--){
        for (int j = 5; j > i; j--){
            cout << " ";
        }
        for (int  k = 1; k <= i; k++){
          
            if (k == 1 || k == i || i == 5){
                cout << "* ";
            }

            else {
            cout << "  ";
            }
        }
        cout << endl;
    }


    for(int i = 1; i <= 5; i++){
        for (int j = 5; j > i; j--){
            cout << " ";
        }
        for (int  k = 1; k <= i; k++){
          
            if (k == 1 || k == i || i == 5){
                cout << "* ";
            }

            else {
            cout << "  ";
            }
        }
        cout << endl;
    }


// ----------------------------------------------------------------------------------------------------------------
// level 3 is going to start
// ================================================================================================================

// 🔹 1. X Pattern

for (int i = 4; i > 1; i--){
    for (int j = 4; j > i; j--){
        cout << " ";
    }
    for (int k = 1; k<= i; k++){
        if(k == 1 || k == i){
            cout << "* ";
        }
        else {
            cout << "  ";
        }
    }
    cout << endl;
}

for (int i = 1; i <= 4; i++){
    for (int j = 4; j > i; j--){
        cout << " ";
    }
    for (int k = 1; k <= i; k++){
        if (k == 1 || k == i){
            cout << "* ";
        }
        else{
            cout << "  ";
        }
    }
    cout <<endl;
}
cout << endl;



// 🔹 1. y Pattern

for (int i = 4; i > 1; i--){
    for (int j = 4; j > i; j--){
        cout << " ";
    }
    for (int k = 1; k<= i; k++){
        if(k == 1 || k == i){
            cout << "* ";
        }
        else {
            cout << "  ";
        }
    }
    cout << endl;
}

for (int i = 1; i <= 4; i++){
    for (int j = 4; j > i; j--){
        cout << " ";
    }
    for (int k = 1; k <= i; k++){
        if (k == 1){
            cout << "* ";
        }
        else{
            cout << "  ";
        }
    }
    cout <<endl;
}

cout << endl;


// 🔹 1. Z Pattern

for (int i = 5; i >= 1; i--){
    for (int j = 1; j <= 5; j++){
        if ( i == 5 || i == j || i == 1){
            cout << "* ";
        }
        else{
        cout << "  ";
        }
    }
    cout << endl;
}

cout << endl;


//2. arrow

for(int i = 1; i <=5; i++){
    for(int j = 5; j > i; j--){
        cout << " ";
    }
    for (int k = 1; k <= i; k++){
        cout << "* ";
    }
    cout <<endl;
}
for (int i = 1; i <= 5; i++){
    for (int j = 1; j <= 5; j++){
        if (j == 4){
            cout << " *";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
}

cout << endl;




// 🔹 8. Heart Shape ❤️
for (int i = 2; i <= 3; i++){
    for (int j = 3; j >= i; j--){
        cout << " ";
    }
    for (int k = 1; k <= i; k++){
        cout <<"* ";
    }

    for (int j = 3; j >= i; j--){
        cout << " ";
    }

    for (int j = 3; j >= i; j--){
        cout << " ";
    }
    for (int k = 1; k <= i; k++){
        cout <<"* ";
    }
    cout << endl;
}

for (int i = 8; i >= 1; i--){
    for (int j = 8; j > i; j--){
        cout << " ";
    }
    for (int k = 1; k <= i; k++){
        cout << "* ";
    }
    cout << endl;
}

// 🔹 10. Diamond Outline with Cross
    // Upper half
    int no = 5;
    for (int i = 1; i <= no; i++) {
        for (int j = i; j < no; j++)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == 2 * i - 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (int i = 5; i >= 1; i--){
        for (int j = i; j < 5; j++){
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++){
            if (k == 1 || k == i || k == 2 * i - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }


    cout << endl;

    // 🔹 10. Hollow Diamond 
    // Upper half

    for (int i = 1; i <= 5; i++){
        for (int j = 6; j > i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }


    for (int i = 6; i >= 1; i--){
        for (int j = 6; j > i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            if (k == 1 || k == i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }


    cout << endl;

    for (int i = 1; i <= 5; i++){
        char che = 'A';
        for(int j = 1; j <= i; j++){
            cout << che << " ";
                    che++;

        }
        cout << endl;
    }

// T Shape
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            if (i == 1 || j == 3){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    
// L Shape
      for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            if (i == 5 || j == 1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

// Z Shape    
    for (int i = 5; i >= 1; i--){
        for (int j = 1; j <= 5; j++){
            if (i == 5 || j == i || i == 1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }


    for (int i = 5; i >= 1; i--){
        for (int j = 1; j <= 5; j++){
            if (i == 5 || j == i || i == 1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }



    for (int i = 1; i <= 5; i++){
        for (int j = 5; j > i; j--){
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++){
            cout << "*";
        }
        cout << endl;
    }

    
    for (int i = 4; i >= 1; i--){
        for (int j = 5; j > i; j--){
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++){
            if (k == 1 || k == 2 * i - 1){
            cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}