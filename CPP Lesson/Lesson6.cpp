#include <iostream>
#include <algorithm>
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

int main()
{
    int middle, temp;
    int array[5] = {2, 5, 3, 8, 9};

    // sorting the array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    middle = array[5 / 2];
    cout << "Middle = " << middle << endl;
}
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
