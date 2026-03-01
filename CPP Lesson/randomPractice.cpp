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

// int sum(int num, int num1)
// {
//     return num + num1;
// }
// double sum(float num, float num1)
// {
//     return double(num + num1);
// }

// int main()
// {
//     cout << "Int Sum is: " << sum(2, 3) << endl;
//     cout << "Double Sum is: " << sum(2.1f, 3.4f) << endl;
// }

// Rock Paper Scissors
char playerChoice();
char computerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);

int main()
{
    char player, computer;
    char choice;
    srand(time(NULL));

    do
    {
        cout << "Rock Paper Scissors\n";
        cout << "==============================\n";

        player = playerChoice();
        cout << "You Choose: ";
        showChoice(player);

        computer = computerChoice();
        cout << "Computer Choose: ";
        showChoice(computer);

        showWinner(player, computer);

        cout << "Want To Try Again(y/n)\n";
        cin >> choice;
        choice = tolower(choice);

    } while (choice == 'y');

    cout << "==============================\n";
    return 0;
}

char playerChoice()
{
    char choice;

    do
    {
        cout << "\nChoose:\n";
        cout << "(r) Rock\n";
        cout << "(p) Paper\n";
        cout << "(s) Scissors\n";
        cout << "Enter choice: ";
        cin >> choice;

        choice = tolower(choice);

    } while (choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}

char computerChoice()
{
    int num = rand() % 3;
    if (num == 0)
        return 'r';

    else if (num == 1)
        return 'p';

    else
        return 's';
};
void showChoice(char choice)
{
    if (choice == 'r')
        cout << "Rock\n";

    else if (choice == 'p')
        cout << "Paper\n";

    else
        cout << "Scissors\n";
}

void showWinner(char player, char computer)
{
    if (player == computer)
    {
        cout << "Result: It's a tie!\n";
    }

    else if (
        (player == 'r' && computer == 's') ||
        (player == 's' && computer == 'p') ||
        (player == 'p' && computer == 'r'))
    {
        cout << "Result: You win!\n";
    }

    else
    {
        cout << "Result: Computer wins!\n";
    }
}