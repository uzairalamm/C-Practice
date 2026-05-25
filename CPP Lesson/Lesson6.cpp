#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

// =======================Lets Start With Good Practice the below code is too Messy========================= //

// =========================Digonal Sum==========================
// void digonalSum(int userInput[][4], int rows, int cols)
// {
//     int primaryDigonal = 0,
//         secondaryDigonal = 0,
//         digonal;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (j == i)
//             {
//                 primaryDigonal += userInput[i][j];
//             }
//             else if (j == cols - 1 - i)
//             {
//                 secondaryDigonal += userInput[i][j];
//             }
//         }
//     }
//     cout << primaryDigonal << endl; // we got Primary Diagonal Value
//     cout << secondaryDigonal << endl;

//     // // Now Diagonal
//     digonal = primaryDigonal + secondaryDigonal;
//     cout << digonal << endl;
// }

// int main()
// {
//     int rows, cols;
//     cols = 4;
//     cout << "How Many Rows You want: ";
//     cin >> rows;
//     cout << "Enter " << cols << " number in each Row\n";
//     int userInput[rows][4];
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> userInput[i][j];
//         }
//     }

//     digonalSum(userInput, rows, cols);
// }

// =========================Find Middle==========================
// =========================First Method==========================

// int main()
// {
//     int smallest, largest, middle;
//     smallest = INT_MAX;
//     largest = INT_MIN;
//     middle = 0;

//     int value[5] = {5, 32, 53, 44, 20};
//     for (int i = 0; i < 5; i++)
//     {
//         if (value[i] < smallest)
//         {
//             smallest = value[i];
//         }
//         if (value[i] > largest)
//         {
//             largest = value[i];
//         }
//     }

//     // To find the middle value
//     for (int i = 0; i < 5; i++)
//     {
//         if (value[i] > smallest && value[i] < largest)
//         {
//             middle = value[i];
//             break;
//         }
//     }

//     cout << "Middle = " << middle << endl;
// }

// =========================Another Method==========================

// int main()
// {
//     int middle, temp;
//     int array[5] = {2, 5, 3, 8, 9};

//     // sorting the array
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5 - i - 1; j++)
//         {
//             if (array[j] > array[j + 1])
//             {
//                 temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
//     middle = array[5 / 2];
//     cout << "Middle = " << middle << endl;
// }

// =========================Find largest/smallest Index==========================

// int main()
// {
//     int smallest, largest;
//     smallest = INT_MAX;
//     largest = INT_MIN;

//     int value[5] = {5, 32, 53, 44, 20};
//     for (int i = 0; i < 5; i++)
//     {
//         if (value[i] < smallest)
//         {
//             smallest = value[i];
//         }
//         if (value[i] > largest)
//         {
//             largest = value[i];
//         }
//     }
//     // print Smallest and Largest value
//     cout << "Smallest Value = " << smallest << endl;
//     cout << "Largest Value = " << largest << endl;

//     // Find Index of Smallest and  Largest value
//     for (int i = 0; i < 5; i++)
//     {
//         if (value[i] == smallest)
//         {
//             cout << "Smallest Value at Index: " << i << endl;
//         }
//         if (value[i] == largest)
//         {
//             cout << "Largest Value at Index: " << i << endl;
//         }
//     }
// }

// A C++ program that inputs the ages of several persons and counts how many of them are between the ages of 30 and 50.
// =========================Find People ages 30 B/t 50.========================

// int age30TO50(int array[], int size)
// {
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] >= 30 && array[i] <= 50)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int size;
//     cout << "How Many People Age you want to Enter: ";
//     cin >> size;
//     int peopleAge[size];

//     cout << "Enter Their Age: ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> peopleAge[i];
//     }

//     int age = age30TO50(peopleAge, size);
//     cout << age << " People have age between 30-50" << endl;
// }

// A C++ program that allows a user to enter values into an array and
// then finds and displays the maximum and minimum values among these entered values.
// =========================Find Min & Max.========================

// void findMinMax(int array[], int size)
// {
//     int minimum, maximum;
//     minimum = INT_MAX;
//     maximum = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] > maximum)
//         {
//             maximum = array[i];
//         }
//         if (array[i] < minimum)
//         {
//             minimum = array[i];
//         }
//     }

//     cout << "Maximum = " << maximum << endl;
//     cout << "Minimum = " << minimum << endl;

//     for (int i = 0; i < size; i++)
//     {
//         if (maximum == array[i])
//         {
//             cout << maximum << " is at Index " << i << endl;
//         }
//         if (minimum == array[i])
//         {
//             cout << minimum << " is at Index " << i << endl;
//         }
//     }
// }

// int main()
// {
//     int size;
//     cout << "How many Integer You want to Enter: ";
//     cin >> size;
//     int integer[size];

//     cout << "Enter the Integers: ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> integer[i];
//     }

//     findMinMax(integer, size);
// }

// A C++ program that allows a user to enter values into an array, display the array
// values then reverse the array, and then display it again.
// =========================Reverse Array.========================

// int main()
// {
//     int size;
//     cout << "How many Integer You want to Enter: ";
//     cin >> size;
//     int integer[size];

//     cout << "Enter the Integers: ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> integer[i];
//     }

//     cout << "Array is: ";
//     for (int j = 0; j < size; j++)
//     {
//         cout << integer[j] << " ";
//     }

//     cout << "\nReverse Array is: ";
//     for (int k = size - 1; k >= 0; k--)
//     {
//         cout << integer[k] << " ";
//     }
// }

// ===============================================================
// // Mean Function
// double myMean(int userInput[], int size)
// {
//     double mean, sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum = sum + userInput[i];
//     }

//     mean = sum / size;
//     return mean;
// }

// // Median Function
// double myMedian(int userInput[], int size)
// {
//     double median;
//     sort(userInput, userInput + size);
//     if (size % 2 == 0)
//     {
//         median = (userInput[size / 2 - 1] + userInput[size / 2]) / 2;
//         return median;
//     }
//     else
//     {
//         median = userInput[size / 2];
//         return median;
//     }
// }

// =========================Probility in Numbers========================
// int main()
// {
//     int num, num1, num2;
//     cout << "How many Number You want to check: ";
//     cin >> num;
//     int div1, div2, both;
//     cout << "Write the two numbers You want to Divide " << num << " form: ";
//     cin >> num1 >> num2;

//     div1 = 0, div2 = 0, both = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         if (i % num1 == 0)
//         {
//             div1++;
//         }
//         if (i % num2 == 0)
//         {
//             div2++;
//         }
//         if (i % num1 == 0 && i % num2 == 0)
//         {
//             both++;
//         }
//     }
//     cout << "Divisible by " << num1 << ": " << div1 << "\n"
//          << "Divisible by " << num2 << ": " << div2 << "\n"
//          << "Divisible by both: " << both << endl;

//     cout << "Probability of " << num
//          << " either divisible by " << num1 << " and " << num2
//          << " is: " << (div1 + div2 - both) << "/" << num;
// }

// =========================Probility in Dic========================
// int main()
// {
//     int probability, sSDice = 6;
//     int n;
//     cout << "How many Dice You Roll: ";
//     cin >> n;
//     int nSS = n * sSDice;

//     cout << "Enter which Condition You Want to Chose "
//          << "\n1. At least one"
//          << "\n2. Product of Dots"
//          << "\n3. Sum of Dots"
//          << "\n4. Abs Difference\n";

//     int op;
//     cin >> op;
//     switch (op)
//     {
//     case 1:
//         cout << "==============At Least One==============\n";
//         cout << "Atleast one What Appear: ";
//         cin >> probability;

//     }
// }

// =========================Reverse Array========================
// void reverseArr(int arr[], int size)
// {
//     for (int i = size - 1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {2, 4, 5, 6, 3};
//     int size = 5;

//     cout << "Reverse array: ";
//     reverseArr(arr, size);
// }
// // Mode Function
// double myMode(int userInput[], int size)
// {
//     double mode = userInput[0];
//     int maxCount = 1;
//     for (int i = 0; i < size; i++)
//     {
//         int count = 1;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (userInput[j] == userInput[i])
//             {
//                 count++;
//             }
//         }
//         if (count > maxCount)
//         {
//             maxCount = count;
//             mode = userInput[i];
//         }
//     }

//     if (maxCount == 1)
//     {
//         // No repeated value
//         return -1;
//     }
//     return mode;
// }

// // 🧩 Beginner - Level Array Problems
// // Take 5 numbers in an array and print them in the same and in reverse order.
// void reverseArray(int userInput[], int size)
// {
//     for (int i = size - 1; i >= 0; i--)
//     {
//         cout << userInput[i] << " ";
//     }
//     cout << endl;
// }

// // Take 10 integers and count how many are even and how many are odd.
// void evenOddArray(int userInput[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (userInput[i] % 2 == 0)
//         {
//             cout << userInput[i] << " is Even" << endl;
//         }
//         else
//         {
//             cout << userInput[i] << " is Odd" << endl;
//         }
//     }
// }

// // Input 5 numbers, find the largest and smallest among them.
// void largestSmallest(int userInput[], int size)
// {
//     int largest, smallest;
//     largest = smallest = userInput[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (largest < userInput[i])
//         {
//             largest = userInput[i];
//         }
//         if (smallest > userInput[i])
//         {
//             smallest = userInput[i];
//         }
//     }
//     cout << largest << " is the Largest Number" << endl;
//     cout << smallest << " is the smallest Number" << endl;
// }

// // Take 10 numbers, then input another number to search —
// // if found, print “Found at index X”, otherwise “Not found”.
// int arraySearch(int userInput[], int size, int element)
// {

//     for (int i = 0; i < size; i++)
//     {
//         if (element == userInput[i])
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// // Find if Number is Present in more than 1 index
// void allArraySearch(int userInput[], int size, int element)
// {
//     bool found = true;
//     cout << element << " is at Index: ";
//     for (int i = 0; i < size; i++)
//     {
//         if (element == userInput[i])
//         {
//             cout << i << " ";
//             found = true;
//         }
//     }
//     if (!found)
//     {
//         cout << "Not Found" << endl;
//     }
// }

// // Swap the first and last elements of the array and print the new array.
// void swapArray(int userInput[], int size)
// {
//     int temp;
//     cout << "Before Swapping\n";
//     cout << "At Index 0: " << userInput[0] << endl;
//     cout << "At index " << size - 1 << ": " << userInput[size - 1] << endl;

//     temp = userInput[size - 1];
//     userInput[size - 1] = userInput[0];
//     userInput[0] = temp;

//     cout << "After Swapping\n";
//     cout << "At Index 0: " << userInput[0] << endl;
//     cout << "At index " << size - 1 << ": " << userInput[size - 1] << endl;
// }

// // linearSearch of 2D Array
// void linearSearch(int userInput[][3], int rows, int cols, int element)
// {
//     bool found = false;
//     cout << "ELement is At index: ";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (element == userInput[i][j])
//             {
//                 cout << "[" << i << "]" << "[" << j << "]" << " ";
//                 found = true;
//             }
//         }
//     }
//     cout << endl;
//     if (!found)
//     {
//         cout << element << " Not in the array" << endl;
//     }
// }

// // maxColSum of 2d Array
// int maxColSum(int userInput[][3], int rows, int cols)
// {
//     int maxCol = INT_MIN;
//     for (int i = 0; i < cols; i++)
//     {
//         int maxSum = 0;
//         for (int j = 0; j < rows; j++)
//         {
//             maxSum += userInput[j][i];
//         }

//         if (maxCol < maxSum)
//         {
//             maxCol = maxSum;
//         }
//     }
//     return maxCol;
// }

// // 1️⃣ Student Marks Analyzer
// void markAnalyzer(int userInput[], int size)
// {
//     size;
//     int min = 100, max = 0, sum = 0, above50 = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (userInput[i] > max)
//         {
//             max = userInput[i];
//         }
//         if (userInput[i] < min)
//         {
//             min = userInput[i];
//         }
//         if (userInput[i] > 50)
//         {
//             above50++;
//         }

//         sum += userInput[i];
//     }

//     float average;
//     average = sum / size;
//     cout << "Average is: " << sum / float(size) << endl;
//     cout << "Highest marks is: " << max << endl;
//     cout << "Lowest marks is: " << min << endl;
//     cout << "Number of Student has above 50 marks: " << above50 << endl;
// }

// // sum of all array elements
// // int arraySum(int userInput[], int size)
// // {
// //     int sum = 0;
// //     for (int i = 0; i < size; i++)
// //     {
// //         sum += userInput[i];
// //     }
// //     return sum;
// // }

// int main()
// {

//     int size, mode;
//     cout << "How many Numbers You Want: ";
//     cin >> size;
//     int userInput[size];

//     cout << "Enter " << size << " marks: ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> userInput[i];
//     }

//     // // calling function sum of array
//     // cout << "Sum of Array elements is: " << arraySum(userInput, size) << endl;

//     // cout << endl;

//     // cout << "Mean is: " << myMean(userInput, size) << endl;
//     // cout << "Median is: " << myMedian(userInput, size) << endl;
//     // mode = myMode(userInput, size);
//     // if (mode != -1)
//     // {
//     //     cout << "Mode is: " << mode << endl;
//     // }
//     // else
//     // {
//     //     cout << "There is No Mode" << endl;
//     // }

//     // print them in the same and in reverse order
//     // reverseArray(userInput, size);

//     // //  how many are even and how many are odd.
//     // evenOddArray(userInput, size);

//     // // find the largest and smallest among them.
//     // largestSmallest(userInput, size);

//     // // search the number user input
//     // int element, search;
//     // cout << "Which Number You want to Find: ";
//     // cin >> element;
//     // search = arraySearch(userInput, size, element);
//     // if (search != -1)
//     // {
//     //     cout << element << " is at index " << search << endl;
//     // }
//     // else
//     // {
//     //     cout << element << " not Found" << endl;
//     // }

//     // // Find if Number is Present in more than 1 index
//     // allArraySearch(userInput, size, element);

//     // // Swap the first and last elements of the array and print the new array.
//     // swapArray(userInput, size);

//     // 1️⃣ Student Marks Analyzer
//     markAnalyzer(userInput, size);

//     // // linearSearch of 2D Array
//     int rows, cols = 3;
//     cout << "How many rows You want: ";
//     cin >> rows;
//     cout << "Enter 3 3 Number in each Row: ";
//     int my2dArray[rows][3];
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> my2dArray[i][j];
//         }
//     }
//     // cout << "Which Number You want to find in an array: ";
//     // cin >> element;
//     // // calling linear Search Function
//     // linearSearch(my2dArray, rows, cols, element);

//     // calling maxColSUm Function
//     cout << "Max Column Sum is: " << maxColSum(my2dArray, rows, cols) << endl;
// }

// ====================Quiz=====================

// int main()
// {

//     string questions[] = {"1. What is the correct syntax to declare a variable in C++?: ",
//                           "2. Which of the following is used to take input in C++?: ",
//                           "3. What is the correct file extension for C++ files?: ",
//                           "4. Which symbol is used for single-line comments in C++?: ",
//                           "5. What will be the output? int x = 5; cout << x++; : ",
//                           "6. Which data type is used to store decimal numbers?: ",
//                           "7. What does return 0; indicate in main()?: ",
//                           "8. Which operator is used for comparison?: ",
//                           "9. What is the size of int (commonly)?: ",
//                           "10. Which loop executes at least once?: "};

//     string options[][4] = {{"A) int = x;", "B) x int;", "C) int x;", "D) declare int x;"},
//                            {"A) cout", "B) cin", "C) input", "D) scanf"},
//                            {"A) .c", "B) .cpp", "C) .java", "D) .py"},
//                            {"A) /* */", "B) #", "C) //", "D) --"},
//                            {"A) 6", "B) 5", "C) Error", "D) 0"},
//                            {"A) int", "B) char", "C) float", "D) bool"},
//                            {"A) Error occurred", "B) Program will repeat", "C) Successful execution", "D) Stop compilation"},
//                            {"A) =", "B) ==", "C) !=", "D) Both B and C"},
//                            {"A) 2 bytes", "B) 4 bytes", "C) 8 bytes", "D) Depends on compiler"},
//                            {"A) for", "B) while", "C) do-while", "D) None"}

//     };

//     char answerKey[] = {'C', 'B', 'B', 'C', 'B', 'C', 'C', 'D', 'D', 'C'};

//     int size = sizeof(questions) / sizeof(questions[0]);
//     char guess;
//     int score = 0;

//     cout << "**************************************\n";
//     cout << "***            C++ Quiz            ***\n";
//     cout << "**************************************\n";

//     for (int i = 0; i < size; i++)
//     {
//         cout << questions[i];
//         cout << endl;

//         for (int j = 0; j < 4; j++)
//         {
//             cout << options[i][j] << endl;
//         }

//         do
//         {
//             cout << "Answer: ";
//             cin >> guess;
//             guess = toupper(guess);
//         } while (guess != 'A' && guess != 'B' && guess != 'C' && guess != 'D');

//         cout << "**************************************\n";
//         if (guess == answerKey[i])
//         {
//             cout << "Correct\n";
//             score++;
//         }

//         else
//         {
//             cout << "Wrong!\nCorrect Answer: " << answerKey[i] << endl;
//         }
//         cout << "**************************************\n";
//     }

//     cout << "**************************************\n";
//     cout << "***            Result             ***\n";
//     cout << "**************************************\n";

//     cout << "Correct Answers: " << score << endl;
//     cout << "Total Questions: " << size << endl;
//     cout << "Score          : " << (score / double(size)) * 100 << "% \n";
// }

// int main()
// {
// int n = 7;
// int mid = n / 2 + 1;

// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= n; j++)
//     {
//         if (i == mid || j == mid || (i == 1 && j >= mid) || (i <= mid && j == 1) || (i == n & j <= mid) || (j == n && i >= mid))
//         {
//             cout << " *";
//         }
//         else
//             cout << "  ";
//     }
//     cout << endl;
// }

// string str = "Hey Uzair, Whats Up!";
// int lenght = str.length();
// string reverse = "";

// for (int i = lenght - 1; i >= 0; i--)
// {
//     reverse += str[i];
// }
// cout << reverse << endl;
// cout << endl;

// for (char &n : str)
// {
//     cout << n << " ";
// }
// }

// bool inputValidator(int &input)
// {
//     if (cin.fail())
//     {
//         cin.clear();                                         // clear the error state
//         cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
//         return false;                                        // indicate invalid input
//     }

//     if (cin.peek() != '\n')
//     {                                                        // check if there is any non-numeric input
//         cin.clear();                                         // clear the error state
//         cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
//         return false;                                        // indicate invalid input
//     }

//     return true; // indicate valid input
// }

// int main()
// {
//     int num;

//     do
//     {
//         cout << "Enter a number: ";
//         cin >> num;
//         if (!inputValidator(num))
//         {
//             cout << "Invalid input. Please enter a valid number.\n";
//             continue;
//         }
//         break;
//     } while (true);
// }
int x = 100; // Global Variable

int funtion()
{
    int x = 10;
    return x;
}

int main()
{
    int x = 20;
    cout << "Local x: " << x << endl;
    cout << "Global X: " << ::x << endl;

    cout << "Function x: " << funtion() << endl;
}