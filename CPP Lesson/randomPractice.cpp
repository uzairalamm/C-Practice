#include <iostream>
#include <ctime>
using namespace std;

// Random Number Generator
// int main()
// {
//     srand(time(NULL));
//     int num = (rand() % 100) + 1;
//     cout << "Random Number: " << num << endl;
// }

// Random Event Generator
// int main()
// {
//     srand(time(NULL));
//     int num = (rand() % 6) + 1;

//     switch (num)
//     {
//     case 1:
//         cout << "You Win a Lottery Ticket\n";
//         break;
//     case 2:
//         cout << "You Win a Car\n";
//         break;
//     case 3:
//         cout << "You win a House\n";
//         break;
//     case 4:
//     case 5:
//     case 6:
//         cout << "Try Again\n";

//     default:
//         break;
//     }
// }

// Random Event Generator

// int main()
// {
//     srand(time(NULL));
//     char choice;

//     cout << "**************Number Guesing Game****************\n\n";
//     do
//     {
//         int guess;
//         int num = (rand() % 100) + 1;
//         int tries = 0;

//         cout << "You Have Only 3 Chances\n";
//         do
//         {
//             cout << "Guess a Number Between (1-100): ";
//             cin >> guess;
//             tries++;

//             if (tries == 3)
//             {
//                 cout << "Better Luck Next Time\n";
//                 break;
//             }

//             if (guess > num)
//             {
//                 cout << "To High\n";
//             }
//             else if (guess < num)
//             {
//                 cout << "To Low\n";
//             }
//             else
//             {
//                 cout << "Correct: No. of Tries " << tries << endl;
//             }

//         } while (guess != num);
//         cout << "Want To Play again(y/n)\n";
//         cin >> choice;
//     } while (choice == 'y');

//     cout << "**************************************************\n";
// }

// void happyBirthday(string name)
// {
//     cout << "Happy Birthday " << name << "\n";
//     cout << "Happy Birthday " << name << "\n";
//     cout << "Happy Birthday Dear " << name << "\n";
//     cout << "Happy Birthday " << name << "\n\n";
// }

// int main()
// {
//     string name = "Ali";
//     happyBirthday(name);
// }
// Overloading Functions

int sum(int num, int num1)
{
    return num + num1;
}
double sum(float num, float num1)
{
    return double(num + num1);
}

int main()
{
    cout << "Int Sum is: " << sum(2, 3) << endl;
    cout << "Double Sum is: " << sum(2.1f, 3.4f) << endl;
}
