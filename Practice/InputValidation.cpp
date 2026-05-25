#include <iostream>
#include <limits>
#include <string>
using namespace std;

void inputBufferClear() // Clear the input buffer to remove the invalid characters
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

bool getValidInput(int &input)
{
    cin >> input;

    if (cin.fail())
    {
        inputBufferClear();
        return false; // Indicate that the input was invalid
    }

    if (cin.peek() != '\n') // Check if there are extra characters after the number
    {
        inputBufferClear();
        return false; // Indicate that the input was invalid
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard any remaining input
    return true;                                         // Indicate that the input was valid
}

int main()
{
    int age[4];
    string name[4];

    cout << "Please enter your age: " << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << ": ";
        while (!getValidInput(age[i]) || age[i] < 0)
        {
            cout << "Invalid input. Please enter a valid age: ";
        }
    }

    cout << "Please enter the names: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << ": ";
        getline(cin, name[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "Your Age: " << age[i] << endl;
        cout << "Your Name: " << name[i] << endl;
    }

    cout << "Enter the age: ";
    while (!getValidInput(age[0]) || age[0] < 0)
    {
        cout << "Invalid input. Please enter a valid age: ";
    }
    return 0;
}