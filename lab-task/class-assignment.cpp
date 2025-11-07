#include <iostream>
#include <cctype>
using namespace std;


// valid mail function
string email(string mail){

    if(mail.find('@') != string::npos && mail.find('.') != string::npos){
       return "Valid email";
    }
    else{
    return "invalid email";
    }

}


//calculate age funtion
int calculateYear(int birthYear, int currentYear){
    return currentYear - birthYear;
}




//Strong password checker function
void checkPassword(string Password){
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    for (char ch : Password){
        if ( isupper(ch)) hasUpper = true;
        else if ( islower(ch)) hasLower = true;
        else if ( isdigit(ch)) hasDigit = true;
        else hasSpecial = true;
    }

    if (Password.length() >= 8 && hasUpper && hasLower && hasDigit && hasSpecial){
        cout << "Strong Password";
    }
    else{
        cout << "Weak Password\nMust contain Upper, special letter and digit";
    }
    
}



int main(){
    int birthYear, currentYear;
    string mail, password;



    
    cout << "Enter Your mail: ";
    cin >> mail;
    cout << email(mail);
    cout << endl;

    
    cout << "Enter Your BirthYear: ";
    cin >> birthYear;
    cout << "Enter the current Year: ";
    cin >> currentYear;
    cout << "Your Age is: " << calculateYear(birthYear, currentYear);
    cout << endl;




    cout << "Enter Your Password: ";
    cin >> password;
    checkPassword(password);
}