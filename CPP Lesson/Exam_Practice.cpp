#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// =========================================================
// 2d array practice
// ==========================================================

// =========================================================
// Sum of Matrix == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==
// void matrixSum(int matix1[][3], int matix2[][3], int result[][3], int cols, int rows)
// {
//     // taking sum of two matrix
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             result[i][j] = matix1[i][j] + matix2[i][j];
//         }
//     }
// }

// int main()
// {
//     int rows = 3, cols = 3;
//     int matix1[rows][3], matix2[rows][3], result[rows][3];
//     // taking value from the user
//     // taking matix1 value
//     cout << "Enter Value matix1 Value in (3 by 3):\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matix1[i][j];
//         }
//     }

//     // taking matix2 value
//     cout << "Enter Value matix2 Value in (3 by 3):\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> matix2[i][j];
//         }
//     }

//     // calling Sum function
//     matrixSum(matix1, matix2, result, rows, cols);

//     // Printing Sum of two matrix
//     cout << "Sum of matrix:\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// =========================================================
// Subtraction of Matrix
// ==========================================================

// void matrixSub(int matix1[][3], int matix2[][3], int result[][3], int cols, int rows)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             result[i][j] = matix1[i][j] - matix2[i][j];
//         }
//     }
// }
// int main()
// {
//     int rows = 3, cols = 3;
//     int matix1[rows][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
//         matix2[rows][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
//         result[rows][3];
//     // calling Sum function
//     matrixSub(matix1, matix2, result, rows, cols);

//     // Printing Sum of two matrix
//     cout << "Sum of matrix:\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// ==========================================================
// Multiplication of Matrix
// ==========================================================

// void arrayMultiplication(int matix1[][3], int matix2[][3], int result[][3], int rows, int cols)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             result[i][j] = 0;
//             for (int k = 0; k < cols; k++)
//             {
//                 result[i][j] += matix1[i][k] * matix2[k][j];
//             }
//         }
//     }
// }
// int main()
// {
//     int rows = 3, cols = 3;
//     int matix1[rows][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
//         matix2[rows][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
//         result[rows][3];
//     // calling Sum function
//     arrayMultiplication(matix1, matix2, result, rows, cols);

//     // Printing multiply of two matrix
//     cout << "Multiplication of matrix:\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// ==========================================================
// chech Symetric Matrix
// ==========================================================
// bool isSymmetric(int matrix[][3], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++) // check only upper triangle
//         {
//             if (matrix[i][j] != matrix[j][i])
//                 return false; // not symmetric
//         }
//     }
//     return true; // all mirrored elements are equal
// }

// int main()
// {
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {2, 2, 5},
//         {3, 5, 7}};

//     if (isSymmetric(matrix, 3))
//         cout << "Matrix is Symmetric";
//     else
//         cout << "Matrix is Not Symmetric";

//     return 0;
// }
// ==========================================================
// Transpose of Matrix
// ==========================================================

// void arraytranspose(int matix1[][3], int result[][3], int rows, int cols)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             result[j][i] = matix1[i][j];
//         }
//     }
// }
// int main()
// {
//     int rows = 3, cols = 3;
//     int matix1[rows][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
//         result[rows][3];
//     cout << "My matrix:\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << matix1[i][j] << " ";
//         }
//         cout << endl;
//     }
//     arraytranspose(matix1, result, rows, cols);
//     // Printing Tranpose of matrix
//     cout << "Transpose of matrix:\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// ==========================================================
// Transpose of Matrix 4by3 to 3by4
// ==========================================================

// ==========================================================
// Determinent of Matrix 2by2
// =========================================================

// void determinent2b2(int matrix1[][2], int rows, int cols)
// {
//     int result;
//     result = matrix1[0][0] * matrix1[1][1] - matrix1[0][1] * matrix1[1][0];
//     cout << "Determinent of matrix:\n"
//          << result;
// }
// int main()
// {
//     int rows = 2, cols = 2;
//     int matrix[rows][2] = {{1, 2}, {2, 3}};
//     cout << "Original Matrix:\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     determinent2b2(matrix, rows, cols);
//     // Printing Tranpose of matrix
// }

// ==========================================================
// Determinent of Matrix 3 by 3
// ==========================================================
// void determinent3by3(int matrix[][3], int rows, int cols)
// {
//     int result;
//     result = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
//              matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2]) +
//              matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);
//     cout << "Determinent of matrix:\n"
//          << result;
// }
// int main()
// {
//     int rows = 3, cols = 3;
//     int matrix[rows][3] = {{1, 5, 2}, {4, 5, 6}, {7, 1, 9}};
//     cout << "Original Matrix:\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     determinent3by3(matrix, rows, cols);
// }

// ==========================================================
// Transpose of Matrix
// ==========================================================

// int main()
// {
//     int arr1[2][3]{{1, 2, 3}, {4, 5, 6}},
//         arr2[3][2];

//     cout << "Before Transpose:\n";
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr1[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             arr2[j][i] = arr1[i][j];
//         }
//     }

//     cout << "After Transpose:\n";
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout << arr2[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// ================================================================
// You are given a 2D array marks[5][4] where each row represents a student and each column represents a subject.

// Task:

// Calculate the total marks of each student.

// Find the roll number of the student with the highest total.

// Print the average marks of each subject.
// ================================================================

// void takeInput(string names[], int marks[][4], int students, int subject)
// {
//     for (int i = 0; i < students; i++)
//     {
//         cout << "Enter the name of Student " << i + 1 << ":\n";
//         cin >> names[i];
//         cout << "Marks of " << names[i] << " for " << subject << " subjects\n";
//         for (int j = 0; j < subject; j++)
//         {
//             cin >> marks[i][j];
//         }
//     }
// }

// void totalMarks(string names[], int marks[][4], int students, int subject)
// {
//     for (int i = 0; i < students; i++)
//     {
//         int sum = 0, topMarks = INT_MIN;
//         cout << "Total Marks of " << names[i] << " is: ";
//         for (int j = 0; j < subject; j++)
//         {
//             sum += marks[i][j];
//         }
//         cout << sum << endl;
//     }
// }
// void topMarks(string names[], int marks[][4], int students, int subject)
// {
//     cout << "Hightest Marks\n";
//     int topMarks = INT_MIN, roll;
//     for (int i = 0; i < students; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < subject; j++)
//         {
//             sum += marks[i][j];
//         }
//         if (topMarks < sum)
//         {
//             topMarks = sum;
//             roll = i;
//         }
//     }
//     cout << names[roll] << "Got the Highest marks " << topMarks << "\n";
//     cout << "He is at Index " << roll << endl;
// }

// int main()
// {
//     string names[5];
//     int students = 5, subject = 4, marks[students][4];
//     takeInput(names, marks, students, subject);
//     totalMarks(names, marks, students, subject);
//     topMarks(names, marks, students, subject);
// }

// ==========================================================
// Recursion Factorial
// ==========================================================

// int factorial(int n)
// {
//     if (n == 1)
//         return 1;                // base case
//     return n * factorial(n - 1); // recursive case
// }
// int main()
// {
//     int n;
//     cout << "Enter a Integer N: ";
//     cin >> n;

//     cout << "Factorial is: " << factorial(n) << endl;
// }

// ==========================================================
// Recursion Sum of 1 to N
// ==========================================================

// int mysum(int n)
// {
//     int sum = 0;
//     if (n == 1)
//     {
//         return 1;
//     }
//     return sum += n + mysum(n - 1);
// }
// int main()
// {
//     int n;
//     cout << "Enter An Integer N: ";
//     cin >> n;
//     cout << "Sum of First Integer up to " << n << " is: " << mysum(n) << endl;
// }

// ==========================================================
// Recursion Print 1 to N
// ==========================================================

// void print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     print(n - 1);
//     cout << n << " ";
// }
// int main()
// {
//     int n;
//     cout << "Enter an Integer n: ";
//     cin >> n;
//     print(n);
//     cout << endl;
// }

// ==========================================================
// Recursion Power
// ==========================================================
// double power(int n, int x)
// {
//     if (x == 0)
//     {
//         return 1;
//     }
//     return n * power(n, x - 1);
// }
// int main()
// {
//     int n, x;
//     cout << "Enter a number: ";
//     cin >> n >> x;
//     cout << "Power is: " << power(n, x) << endl;
// }

// ==========================================================
// Bubble Sort for 1d Array
// ==========================================================
// void bubbleSort(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int size;
//     cout << "Enter the size of an Array: ";
//     cin >> size;
//     int arr[size];
//     cout << "Enter the Element in an Array:\n";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "=============Orignal Array=============\n";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     bubbleSort(arr, size);
//     cout << "=============Sorted Array=============\n";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// ==========================================================
// Bubble Sort for 2d Array
// ==========================================================
// void bubbleSort(int arr[][4], int rows, int cols)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols - 1; j++)
//         {
//             for (int k = 0; k < cols - 1 - j; k++)
//             {
//                 if (arr[i][k] > arr[i][k + 1])
//                 {
//                     int temp = arr[i][k];
//                     arr[i][k] = arr[i][k + 1];
//                     arr[i][k + 1] = temp;
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     int rows = 2, cols = 4;
//     int arr[rows][4] = {{1, 5, 6, 2}, {3, 4, 7, 8}};
//     cout << "=============Orignal Array=============\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     bubbleSort(arr, rows, cols);
//     cout << "=============Sorted Array=============\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// ==========================================================
// convert 2d array into 1d array
// ==========================================================

// void convert2dInto1d(int arr[][4], int rows, int cols)
// {
//     int size = rows * cols;
//     int temp[size];
//     int index = 0;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             temp[index++] = arr[i][j];
//         }
//     }
//     cout << "=============Converted Array=============\n";
//     for (int i = 0; i < size; i++)
//     {
//         cout << temp[i] << " ";
//     }
// }
// int main()
// {
//     int rows = 2, cols = 4;
//     int arr[rows][4] = {{1, 5, 6, 2}, {3, 4, 7, 8}};
//     cout << "=============Orignal Array=============\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     convert2dInto1d(arr, rows, cols);
// }

// ==========================================================
// Bubble Sort for 2d Array
// ==========================================================

// void bubbleSort2D(int arr[][4], int rows, int cols)
// {
//     int size = rows * cols;
//     int temp[size];
//     int index = 0;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             temp[index++] = arr[i][j];
//         }
//     }

//     // Bubble Sort
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - 1 - i; j++)
//         {
//             if (temp[j] > temp[j + 1])
//             {
//                 int temp1 = temp[j];
//                 temp[j] = temp[j + 1];
//                 temp[j + 1] = temp1;
//             }
//         }
//     }
//     index = 0;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             arr[i][j] = temp[index++];
//         }
//     }
// }
// int main()
// {
//     int rows = 2, cols = 4;
//     int arr[rows][4] = {{1, 5, 6, 2}, {3, 4, 7, 8}};
//     cout << "=============Orignal Array=============\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     bubbleSort2D(arr, rows, cols);
//     cout << "=============Sorted Array=============\n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// ==========================================================
// Selection Sort for 1d Array
// ==========================================================

// struct Product
// {
//     string name;
//     double price;
// };

// double calculateItemBill(double total, double price, int quanity)
// {
//     return total + price * quanity;
// }

// int main()
// {
//     Product products[5] = {
//         {"rice", 200},
//         {"sugar", 150},
//         {"milk", 220},
//         {"bread", 100},
//         {"eggs", 30}};
//     int itemNumber, quantity;
//     double totalBill = 0;
//     char choice = 'y';

//     cout << "===Grocery Store===" << endl;
//     cout << "Available Products: \n";
//     cout << "1. " << products[0].name << " - " << products[0].price << " RS per Kg" << endl;
//     cout << "2. " << products[1].name << " - " << products[1].price << " RS per Kg" << endl;
//     cout << "3. " << products[2].name << " - " << products[2].price << " RS per litre" << endl;
//     cout << "4. " << products[3].name << " - " << products[3].price << " RS per piece" << endl;
//     cout << "5. " << products[4].name << " - " << products[4].price << " RS per egg" << endl;
//     cout << "=========================================" << endl;

//     while (choice == 'Y' || choice == 'y')
//     {
//         cout << "\nEnter item number (1-5): ";
//         cin >> itemNumber;

//         if (itemNumber < 1 || itemNumber > 5)
//         {
//             cout << "Invalid Item number, enter a valid number between 1 and 5. " << endl;
//             continue;
//         }
//         cout << "Enter quantity: ";
//         cin >> quantity;

//         double itemTotal = products[itemNumber - 1].price * quantity;
//         totalBill = calculateItemBill(totalBill, products[itemNumber - 1].price, quantity);

//         cout << products[itemNumber - 1].name << " x " << quantity << " = " << itemTotal << "Rs\n";
//         cout << "Do you want to add more items? (y/n): ";
//         cin >> choice;
//     }

//     cout << "\n=======================\n";
//     cout << "Total Bill: " << totalBill << "Rs\n";
// }

// ==========================================================
// Recursion Print 1 to N
// ==========================================================

// void print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     print(n - 1);
//     cout << n << " ";
// }
// int main()
// {
//     int n;
//     cout << "Enter an Integer n: ";
//     cin >> n;
//     print(n);
//     cout << endl;
// }

// ==========================================================
// Recursion Count Digit
// ==========================================================

// int countDigit(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return 1 + countDigit(n / 10);
// }
// int main()
// {
//     int n;
//     cout << "Enter a Integer: ";
//     cin >> n;
//     cout << "Total Digit: " << countDigit(n) << endl;
// }

// ==========================================================
// Recursion Count Digit
// ==========================================================
// int sumDigit(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return (n % 10) + sumDigit(n / 10);
// }
// int main()
// {
//     int n;
//     cout << "ENter a Number N; ";
//     cin >> n;
//     cout << "Sum is: " << sumDigit(n) << endl;
// }

// ==========================================================
// Without Recursion Count Digit
// ==========================================================

// int sumDigit(int n)
// {
//     int sum = 0, digit;
//     while (n != 0)
//     {
//         digit = n % 10;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cout << "ENter a Number N; ";
//     cin >> n;
//     cout << "Sum is: " << sumDigit(n) << endl;
// }

// ==========================================================
// Without Recursion Count Digit
// ==========================================================

// int reverseNum(int n, int reverse)
// {
//     if (n == 0)
//     {
//         return reverse;
//     }
//     int digit = n % 10;
//     reverse *= 10 + digit;
//     reverseNum(n / 10, reverse);
// }

// int reverseNum(int n)
// {
//     int digit, reverse = 0;
//     while (n != 0)
//     {
//         digit = n % 10;
//         reverse = reverse * 10 + digit;
//         n = n / 10;
//     }
//     return reverse;
// }
// ==========================================================
// File Handling == Writing and creating the file
// ==========================================================

// int main()
// {
//     ofstream fout("data.txt");
//     if (!fout)
//     {
//         cout << "Error! File Not Generated!" << endl;
//         return 1;
//     }
//     string name = "Uzair";
//     string clas = "2A";
//     int rollNo = 052;

//     fout << "Name: " << name << endl;
//     fout << "Class: " << clas << endl;
//     fout << "Roll: " << rollNo << endl;
//     fout.close();
//     cout << "Data written to the File Ended\n";
// }

// ==========================================================
// File Handling == reading from the file
// ==========================================================

// int main()
// {
//     ifstream fin;
//     fin.open("data.txt");
//     string line;
//     while (getline(fin, line))
//     {
//         cout << line << endl;
//     }
//     fin.close();
// }

// ==========================================================
// File Handling == Going to Use Mod (ios::in,out,app)
// ==========================================================

// int main()
// {
//     int vowelcount = 0, conCount = 0;

//     // Writing to file
//     ofstream subhani("data.txt", ios::out);
//     if (!subhani)
//     {
//         cout << "Error! File Not Generated!" << endl;
//         return 1;
//     }

//     string name, myClass, rollNo, address;

//     cout << "Enter Your Name: ";
//     getline(cin, name);
//     cout << "Enter Your Class: ";
//     cin >> myClass;
//     cout << "Enter Your Roll No.: ";
//     cin >> rollNo;
//     cin.ignore();
//     cout << "Enter Your Address: ";
//     getline(cin, address);

//     subhani << "Student Number 3\n";
//     subhani << "Hey " << name << endl;
//     subhani << "Your Class is " << myClass << endl;
//     subhani << "Your Roll No: " << rollNo << endl;
//     subhani << "Your Address is: " << address << endl;
//     subhani.close();
//     cout << "Data written to the File.\n";

//     // Reading and counting vowels
//     ifstream fin("data.txt");
//     string line;

//     while (getline(fin, line))
//     {
//         cout << line << endl;

//         for (char ch : line)
//         {
//             ch = tolower(ch);

//             if (ch >= 'a' && ch <= 'z')
//             {
//                 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//                     vowelcount++;
//                 else
//                     conCount++;
//             }
//         }
//     }
//     fin.close();

//     // Writing counts
//     ofstream fout("data.txt", ios::app);
//     fout << "Vowel Count: " << vowelcount << endl;
//     fout << "Consonant Count: " << conCount << endl;
//     fout.close();
// }

// ==========================================================
// MaxColSum for 2D Array
// ==========================================================

// int maxColSum(int arr[][3], int rows, int cols)
// {
//     int maxSum = INT_MIN;
//     for (int i = 0; i < cols; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < rows; j++)
//         {
//             sum += arr[j][i];
//         }
//         if (sum > maxSum)
//         {
//             maxSum = sum;
//         }
//     }
//     return maxSum;
// }
// int main()
// {
//     int rows = 3, cols = 3;
//     int arr[rows][3] = {{1, 3, 4}, {2, 4, 5}, {6, 9, 7}};
//     cout << "Max Column sum is: " << maxColSum(arr, rows, cols) << endl;
// }

// ==========================================================
// Diagonal Sum for 2D Array
// ==========================================================
// void diagonalSum(int arr[][3], int rows, int cols)
// {
//     int diagonaLSum = 0,
//         primarySum = 0,
//         secondarySum = 0;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (i == j)
//             {
//                 primarySum += arr[i][j];
//             }
//             else if (j == cols - 1 - i)
//             {
//                 secondarySum += arr[i][j];
//             }
//         }
//     }
//     cout << "Primary Sum is: " << primarySum << endl;
//     cout << "Secondary Sum is: " << secondarySum << endl;
//     cout << "Diagonal Sum is: " << primarySum + secondarySum << endl;
// }

// int main()
// {
// int rows = 3, cols = 3;
// int arr[rows][3] = {{1, 3, 4},
//                     {2, 4, 5},
//                     {6, 9, 7}};
// diagonalSum(arr, rows, cols);
//     int a = 5, b = 10;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "a = " << a << ", b = " << b;
// }

// ==========================================================
// Reverse Num Using recuring
// ==========================================================
// int reverseNum(int num, int reverse)
// {

//     if (num == 0)
//     {
//         return reverse;
//     }
//     int digit = num % 10;
//     reverse = reverse * 10 + digit;
//     return reverseNum(num / 10, reverse);
// }

// int main()
// {
//     int num, reverse = 0;
//     cout << "ENter a number: ";
//     cin >> num;
//     cout << reverseNum(num, reverse);
// }

// ==========================================================
// Print numbers from 1 to n using recursion
// ==========================================================
// void nTo1Num(int num)
// {
//     if (num == 0)
//     {
//         return;
//     }
//     cout << num << " ";
//     nTo1Num(num - 1);
// }
// int main()
// {
//     int num;
//     cout << "ENter a number: ";
//     cin >> num;
//     nTo1Num(num);
// }

// ==========================================================
// Print numbers from 1 to n using recursion
// ==========================================================
// void oneToN(int num)
// {
//     if (num == 0)
//     {
//         return;
//     }
//     else
//     {
//         oneToN(num - 1);
//         cout << num << " ";
//     }
// }
// int main()
// {
//     int num;
//     cout << "ENter a number: ";
//     cin >> num;
//     oneToN(num);
// }

// ==========================================================
// Print Factroial using recursion
// ==========================================================
// long long factorial(int num)
// {
//     if (num == 1 || num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return num * factorial(num - 1);
//     }
// }
// int main()
// {
//     int num;
//     cout << "ENter a number: ";
//     cin >> num;
//     cout << factorial(num);
// }

// ==========================================================
// Find the power of a number
// ==========================================================

// double power(int base, int expo)
// {
//     double powr = 1;
//     for (int i = 0; i < expo; i++)
//     {
//         powr = powr * base;
//     }
//     return powr;
// }
// int main()
// {
//     cout << "ENter base, and Expo: ";
//     int n, e;
//     cin >> n >> e;
//     cout << "Power is " << power(n, e) << endl;
// }

// ==========================================================
// Find the power of a number using Recursion
// ==========================================================

// double power(int base, int expo, double powr)
// {
//     if (expo == 0)
//     {
//         return powr;
//     }
//     powr = powr * base;
//     return power(base, expo - 1, powr);
// }
// int main()
// {
//     double powr = 1;
//     cout << "ENter base, and Expo: ";
//     int n, e;
//     cin >> n >> e;
//     cout << "Power is " << power(n, e, powr) << endl;
// }

// ==========================================================
// Count the number of digits in a number
// ==========================================================

// int count(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     return 1 + count(num / 10);
// }
// int main()
// {
//     cout << "ENter num: ";
//     int n;
//     cin >> n;
//     cout << "count is " << count(n) << endl;
// }

// ==========================================================
// Fibonacci Series
// ==========================================================

// void fibonacci(int n)
// {
//     cout << "Fibonacci Series is: ";
//     int sum = 0, t1 = 0, t2 = 1, fiboSum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << t1 << " ";
//         fiboSum = fiboSum + t1;
//         sum = t1 + t2;
//         t1 = t2;
//         t2 = sum;
//     }
//     cout << endl;
//     cout << "FiboSum is: " << fiboSum << endl;
// }
// int main()
// {
//     cout << "ENter num: ";
//     int n;
//     cin >> n;
//     fibonacci(n);
// }

// ==========================================================
// Write a Program to Check if Two Arrays Are Equal or Not.
// ==========================================================
// void checkArrays(int arr1[], int arr2[], int arr1Size, int arr2Size)
// {

//     if (arr1Size != arr2Size)
//     {
//         cout << "Array Are Not Equal in size!" << endl;
//     }
//     else
//     {
//         cout << "They are equal and their size is: " << arr1Size << endl;
//     }
// }
// void printArray(int arr[], int size)
// {
//     cout << "{";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i];

//         if (i == size - 1)
//         {
//         }
//         else
//         {
//             cout << ", ";
//         }
//     }
//     cout << "}" << endl;
// }
// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 6};
//     int arr2[] = {2, 4, 6, 8, 10, 11};
//     int arr1Size = sizeof(arr1) / sizeof(int);
//     int arr2Size = sizeof(arr2) / sizeof(int);
//     cout << "Check if They are Equal: " << endl;
//     printArray(arr1, arr1Size);
//     printArray(arr2, arr2Size);

//     checkArrays(arr1, arr2, arr1Size, arr2Size);
// }

// ==========================================================
// Calculate the Average of All the Elements Present in an Array
// ==========================================================
// double avgArray(int arr[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     return double(sum) / size;
// }
// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 6, 43, 11, 34};
//     int arr1Size = sizeof(arr1) / sizeof(int);
//     printArray(arr1, arr1Size);
//     cout << "Average is: " << fixed << setprecision(2)
//          << avgArray(arr1, arr1Size);
// }

// ==========================================================
// Find the Maximum and Minimum and Middle in an Array.
// ==========================================================

// void findMaxMidMin(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int minInd = i;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[minInd] > arr[j])
//             {
//                 minInd = j;
//             }
//         }
//         int temp = arr[minInd];
//         arr[minInd] = arr[i];
//         arr[i] = temp;
//     }
//     cout << "Minimum value is: " << arr[0] << endl;
//     cout << "Middle Value is: " << arr[size / 2] << endl;
//     cout << "Maximum Value is " << arr[size - 1] << endl;
// }
// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 6, 43, 11, 34};
//     int arr1Size = sizeof(arr1) / sizeof(int);
//     cout << "Before Sorted: ";
//     printArray(arr1, arr1Size);
//     findMaxMidMin(arr1, arr1Size);

//     cout << "\nAfter Sorted: ";
//     printArray(arr1, arr1Size);
// }

// ==========================================================
// Search an Element in an Array (Linear Search).
// ==========================================================

// int linearSearch(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (key == arr[i])
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int key;
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     cout << "Enter the Elemnet you want to Find: ";
//     cin >> key;
//     int result = linearSearch(arr, 6, key);

//     if (result != -1)
//     {
//         cout << key << " is at index " << result << endl;
//     }
//     else
//     {
//         cout << key << " not Found" << endl;
//     }
// }

// ==========================================================
// Average of an Array.
// ==========================================================

// double avg(int arr[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     return double(sum) / size;
// }

// int main()
// {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     printArray(arr, 6);

//     cout << "Average is: " << avg(arr, 6) << endl;
// }

// ==========================================================
// count Even and Odd of an Array.
// ==========================================================

// void evenOddCounter(int arr[], int size)
// {
//     int evenCount = 0, oddCount = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             evenCount++;
//         }
//         else
//         {
//             oddCount++;
//         }
//     }
//     cout << "Total Even Count: " << evenCount << endl;
//     cout << "Total Odd Count: " << oddCount << endl;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 5, 6, 6, 7, 8};
//     int arrSize = sizeof(arr) / sizeof(arr[0]);
//     printArray(arr, arrSize);

//     evenOddCounter(arr, arrSize);
// }

// ==========================================================
// Reverse an array
// ==========================================================

// void reverseArray(int arr[], int size)
// {
//     int start = 0, end = size - 1;
//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int size = 6;
//     int arr[size] = {1, 2, 3, 4, 5, 6};
//     cout << "Original Array is: " << endl;
//     printArray(arr, size);

//     reverseArray(arr, size);
//     cout << "Reverse Array is: " << endl;
//     printArray(arr, size);
// }

// ==========================================================
// Clone an array
// ==========================================================
// void arrClone(int arr1[], int size, int arr2[])
// {
//     for (int i = 0; i < size; i++)
//     {
//         arr2[i] = arr1[i];
//     }
// }
// int main()
// {
//     int size = 6;
//     int arr1[size] = {1, 2, 3, 4, 5, 6};
//     int arr2[size];
//     cout << "Original Array is: " << endl;
//     printArray(arr1, size);

//     arrClone(arr1, size, arr2);
//     cout << "Clone Array is: " << endl;
//     printArray(arr2, size);
// }

// ==========================================================
// Count the Given Number in array
// ==========================================================

// int countGivenNum(int arr[], int size, int num)
// {
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (num == arr[i])
//         {
//             count++;
//         }
//     }
//     return count;
// }
// int main()
// {
//     int size = 8, key;
//     int arr1[size] = {1, 2, 3, 4, 5, 6, 6, 6};
//     cout << "Original Array is: " << endl;
//     printArray(arr1, size);
//     cout << "Which Number You want To Check: ";
//     cin >> key;

//     cout << key << " Repeated " << countGivenNum(arr1, size, key) << " times\n";
// }

// ==========================================================
// Shift All element 1 position to right in array
// ==========================================================

// void shiftArray(int arr[], int size)
// {
//     int last = arr[size - 1];
//     for (int i = size - 1; i > 0; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = last;
// }
// int main()
// {
//     int size = 6;
//     int arr1[size] = {1, 2, 3, 4, 5, 6};
//     cout << "Original Array is: " << endl;
//     printArray(arr1, size);

//     shiftArray(arr1, size);
//     cout << "Shifted Array is: " << endl;
//     printArray(arr1, size);
// }

// ==========================================================
// Remove dublicate element in array
// ==========================================================
// void removeDublicate(int arr[], int &size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 for (int k = j; k < size - 1; k++)
//                 {
//                     arr[k] = arr[k + 1];
//                 }
//                 size--;
//                 j--;
//             }
//         }
//     }
// }

// int main()
// {
//     int size = 9;
//     int arr1[size] = {1, 2, 3, 4, 5, 6, 6, 6, 6};
//     cout << "Original Array is: " << endl;
//     printArray(arr1, size);

//     removeDublicate(arr1, size);
//     cout << "Remove Dublicated Array is: " << endl;
//     printArray(arr1, size);
// }

// ==================================================================
// Search an Element in an Array (Linear Search). Show Multiple Index
// ==================================================================
// void linearSearch(int arr[], int size, int key)
// {
//     int index[size];
//     int count = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (key == arr[i])
//         {
//             index[count] = i;
//             count++;
//         }
//     }
//     if (count == 0)
//     {
//         cout << key << " not Found" << endl;
//     }
//     else
//     {
//         cout << key << " is at Index {";
//         for (int i = 0; i < count; i++)
//         {
//             cout << index[i];
//             if (i == count - 1)
//             {
//             }
//             else
//             {
//                 cout << ", ";
//             }
//         }
//         cout << "}" << endl;
//     }
// }

// int main()
// {
//     int size = 9, key;
//     int arr1[size] = {1, 2, 3, 4, 5, 6, 6, 6, 6};
//     cout << "Original Array is: " << endl;
//     printArray(arr1, size);

//     cout << "Which Element You want to Find: ";
//     cin >> key;
//     linearSearch(arr1, size, key);
// }

// ==========================================================
// Insert a new element at a given index.
// ==========================================================
// void insertElement(int arr[], int size, int index, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         // I did this, because User donot know, array index start from 0
//         if (index - 1 == i)
//         {
//             arr[i] = key;
//         }
//     }
// }
// int main()
// {
//     int size = 6, key, index;
//     int arr1[size] = {1, 2, 3, 4, 5, 6};
//     cout << "Original Array is: " << endl;
//     printArray(arr1, size);

//     cout << "Enter the Postion, the element you want to change: ";
//     cin >> index;
//     cout << "What you want to replace it with: ";
//     cin >> key;

//     insertElement(arr1, size, index, key);
//     printArray(arr1, size);
// }

// ==========================================================
// Merge two arrays into a third array.
// ==========================================================
// void mergeArray(int arr1[], int arr2[], int size1, int size2)
// {
//     int size3 = size1 + size2;
//     int arr3[size3];
//     int k = 0;
//     for (int i = 0; i < size1; i++)
//     {
//         arr3[k] = arr1[i];
//         k++;
//     }
//     // After copying arr1, k becomes equal to size1.
//     // So arr3[k] now points to the first empty position.
//     // The next loop will start inserting arr2 from index size1.
//     // | Iteration | i value | k before | k after |
//     // | -- -- --  | -- - -- | -- -- -- | -- -- --|
//     // | 1         | 0       | 0        | 1       |
//     // | 2         | 1       | 1        | 2       |
//     // | 3         | 2       | 2        | 3       |
//     // | 4         | 3       | 3        | 4       |

//     for (int i = 0; i < size2; i++)
//     {
//         arr3[k] = arr2[i];
//         k++;
//     }

//     // Print Merge Array
//     cout << "Merged Array is:\n{";
//     for (int i = 0; i < size3; i++)
//     {
//         cout << arr3[i];
//         if (i == size3 - 1)
//         {
//         }
//         else
//         {
//             cout << ", ";
//         }
//     }
//     cout << "}" << endl;
// }

// int main()
// {
//     int size1 = 6, size2 = 5;
//     int arr1[size1] = {1, 2, 3, 4, 5, 6};
//     int arr2[size2] = {7, 8, 9, 10, 11};

//     cout << "First Original Array is: " << endl;
//     printArray(arr1, size1);

//     cout << "Second Original Array is: " << endl;
//     printArray(arr2, size2);

//     mergeArray(arr1, arr2, size1, size2);
// }

// int main()
// {
//     int num1, num2;
//     cout << "Enter two integers: ";
//     cin >> num1 >> num2;

//     int gcd;
//     if (num1 <= num2)
//     {
//         gcd = num1;
//     }
//     else
//     {
//         gcd = num2;
//     }

//     while (num1 % gcd != 0 || num2 % gcd != 0)
//     {
//         gcd--;
//     }
//     cout << "Gcd is: " << gcd << endl;
//     int lcm;
//     lcm = (num1 * num2) / gcd;
//     cout << "LCM is: " << lcm << endl;
// }

// Another Mehtod

int main()
{
    int num1, num2;
    cout << "Enter Two integers: ";
    cin >> num1 >> num2;

    int a = num1, b = num2;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    int gcd = a;
    cout << "GCD is:  " << gcd << endl;
    int lcm = (num1 * num2) / gcd;
    cout << "LCM is: " << lcm << endl;
}