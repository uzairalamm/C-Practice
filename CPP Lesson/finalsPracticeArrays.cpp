#include <iostream>
using namespace std;

// =========================================================
// You are given a 2D array marks[5][4] where each row represents a student and each column represents a subject.

// Task:

// Calculate the total marks of each student.

// Find the roll number of the student with the highest total.

// Print the average marks of each subject.
// ==========================================================

// void inputData(string names[], int marks[][4], int students, int subjects)
// {
//     cout << "====Enter Data====\n";

//     for (int i = 0; i < students; i++)
//     {
//         cout << "Enter name of student " << i << ":\n";
//         cin >> names[i];
//         cout << "Enter " << subjects << " marks for " << names[i] << ":\n";
//         for (int j = 0; j < subjects; j++)
//         {
//             cin >> marks[i][j];
//         }
//     }
// }

// void printStudentTotals(string names[], int marks[][4], int students, int subjects)
// {
//     for (int i = 0; i < students; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < subjects; j++)
//         {
//             sum += marks[i][j];
//         }
//         cout << "Total Marks of " << names[i] << "= " << sum << endl;
//     }
// }

// int findTopper(string names[], int marks[][4], int students, int subjects)
// {
//     int maxTotal = -1;
//     int topperIndex = -1;
//     for (int i = 0; i < students; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < subjects; j++)
//         {
//             sum += marks[i][j];
//         }
//         if (sum > maxTotal)
//         {
//             maxTotal = sum;
//             topperIndex = i;
//         }
//     }
//     cout << "Highest Total Marks = " << maxTotal << " (" << names[topperIndex] << ")\n";
//     return topperIndex;
// }

// void printSubjectAverages(string names[], int marks[][4], int students, int subjects)
// {
//     for (int j = 0; j < subjects; j++)
//     {
//         int colSum = 0;
//         for (int i = 0; i < students; i++)
//         {
//             colSum += marks[j][i];
//         }
//         double avg = (double)colSum / students;
//         cout << "Average of subjects " << j << " = " << avg << endl;
//     }
// }

// int main()
// {
//     const int students = 5;
//     const int subjects = 4;
//     string names[students];
//     int marks[students][4];
//     inputData(names, marks, students, subjects);
//     cout << "\n =======Totals======\n";
//     printStudentTotals(names, marks, students, subjects);
//     int topper = findTopper(names, marks, students, subjects);
//     cout << "Topper is: " << names[topper] << " (index " << topper << " )" << endl;
//     cout << "\n =======Subject Averages======\n";
//     printSubjectAverages(names, marks, students, subjects);
// }
// =============DONE=================

// ==========================================================
// Hospital Bed System with Functions

// We’ll keep it simple (no names, just floors/rooms), but very clean.

// What it does

// Reads a floors × rooms matrix (0 = empty, 1 = occupied)

// Counts empty beds

// Finds first empty bed

// Prints any completely empty floors
// =========================================================

// const int FLOORS = 3;
// const int ROOMS = 4;

// void inputBeds(int beds[FLOORS][ROOMS])
// {
//     cout << "Enter 0 (empty) or 1 (occupied) for each bed: \n";
//     for (int i = 0; i < FLOORS; i++)
//     {
//         for (int j = 0; j < ROOMS; j++)
//         {
//             cout << "Floor " << i << " Room " << j << ": ";
//             cin >> beds[i][j];
//         }
//     }
// }

// int countEmptyBeds(int beds[FLOORS][ROOMS])
// {
//     int count = 0;
//     for (int i = 0; i < FLOORS; i++)
//     {
//         for (int j = 0; j < ROOMS; j++)
//         {
//             if (beds[i][j] == 0)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// bool findFirstEmptyBed(int beds[FLOORS][ROOMS], int &floorIndex, int &roomIndex)
// {
//     for (int i = 0; i < FLOORS; i++)
//     {
//         for (int j = 0; j < ROOMS; j++)
//         {
//             if (beds[i][j] == 0)
//             {
//                 floorIndex = i;
//                 roomIndex = j;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// bool printEmptyFloors(int beds[FLOORS][ROOMS])
// {
//     bool anyEmpty = false;
//     for (int i = 0; i < FLOORS; i++)
//     {
//         bool floorEmpty = true;
//         for (int j = 0; j < ROOMS; j++)
//         {
//             if (beds[i][j] == 1)
//             {
//                 floorEmpty = false;
//                 break;
//             }
//         }
//         if (floorEmpty)
//         {
//             cout << "Floor " << i << " is completly empty. \n";
//             anyEmpty = true;
//         }
//     }
//     return anyEmpty;
// }

// int main()
// {
//     int beds[FLOORS][ROOMS];
//     inputBeds(beds);
//     int emptyCount = countEmptyBeds(beds);
//     cout << "Total Empty beds: " << emptyCount << endl;

//     int floorIndex, roomIndex;
//     if (findFirstEmptyBed(beds, floorIndex, roomIndex))
//     {
//         cout << "First empty bed at floor " << floorIndex << ", Room" << roomIndex << endl;
//     }
//     else
//     {
//         cout << "No empty beds.\n";
//     }
//     if (!printEmptyFloors(beds))
//     {
//         cout << "No completly empty floors.\n";
//     }
// }

// =============DONE=================

// ==========================================================

// Sort Each Row of a 2D Matrix (Ascending Order)

// void inputMatrix(int arr[][5], int rows, int cols)
// {
//     cout << "Enter matrix values: \n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
// }

// void bubbleSortRows(int rows[], int cols)
// {
//     for (int i = 0; i < cols - 1; i++)
//     {
//         for (int j = 0; j < cols - 1 - i; j++)
//         {
//             if (rows[j] > rows[j + 1])
//             {
//                 int temp = rows[j];
//                 rows[j] = rows[j + 1];
//                 rows[j + 1] = temp;
//             }
//         }
//     }
// }

// void sortAllRows(int arr[][5], int rows, int cols)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         bubbleSortRows(arr[i], cols);
//     }
// }

// void printMatrix(int arr[][5], int rows, int cols)
// {
//     cout << "Matrix after sorting the rows in ascending order: \n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     const int rows = 4;
//     const int cols = 5;

//     int arr[rows][cols];
//     inputMatrix(arr, rows, cols);
//     sortAllRows(arr, rows, cols);
//     printMatrix(arr, rows, cols);
// }

// =============DONE=================

// ==========================================================

// void inputMatrix(int arr[][5], int rows, int cols)
// {
//     cout << "Enter matrix values: \n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
// }

// void bubbleSortRows(int rows[], int cols)
// {
//     for (int i = 0; i < cols - 1; i++)
//     {
//         for (int j = 0; j < cols - 1 - i; j++)
//         {
//             if (rows[j] < rows[j + 1])
//             {
//                 int temp = rows[j];
//                 rows[j] = rows[j + 1];
//                 rows[j + 1] = temp;
//             }
//         }
//     }
// }

// void sortAllRows(int arr[][5], int rows, int cols)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         bubbleSortRows(arr[i], cols);
//     }
// }

// void printMatrix(int arr[][5], int rows, int cols)
// {
//     cout << "Matrix after sorting the rows in descending order: \n";
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     const int rows = 4;
//     const int cols = 5;

//     int arr[rows][cols];
//     inputMatrix(arr, rows, cols);
//     sortAllRows(arr, rows, cols);
//     printMatrix(arr, rows, cols);
// }

// =============DONE=================

// ==========================================================
// Input an n x n matrix

// Sort the main diagonal (top-left → bottom-right) in ascending order

// Print the updated matrix
// =======================================================

// const int SIZE = 4;

// void inputMatrix(int arr[][SIZE], int n)
// {

//     cout << "Enter " << n << " x " << n << " matrix values: \n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
// }

// void sortDiagonalAscending(int arr[][SIZE], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[i][j] > arr[i + 1][i + 1])
//             {
//                 int temp = arr[i][j];
//                 arr[i][j] = arr[i + 1][i + 1];
//                 arr[i + 1][i + 1] = temp;
//             }
//         }
//     }
// }

// void printMatrix(int arr[][SIZE], int n)
// {
//     cout << "MATRIX: \n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int n = SIZE;
//     int arr[SIZE][SIZE];
//     inputMatrix(arr, n);
//     cout << "\nBefore Sorting the matrix: \n";
//     printMatrix(arr, n);
//     sortDiagonalAscending(arr, n);
//     cout << "\nThe matrix after sorting diagonally in ascending order: \n";
//     printMatrix(arr, n);
// }

// =========================================================
// Print matrix
// ==========================================================
void printMatrix(int mat[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// =========================================================
// Add two matrices
// ==========================================================
// void addTwoMatrix(int mat1[][3], int mat2[][3], int result[][3], int rows, int cols)
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             result[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }
// }
// int main()
// {
//     int mat1[4][3] = {{1, 2, 3},
//                       {2, 3, 4},
//                       {6, 7, 8},
//                       {9, 10, 11}};
//     int mat2[4][3] = {{1, 2, 3},
//                       {2, 3, 4},
//                       {6, 7, 8},
//                       {9, 10, 11}};
//     int result[4][3];
//     addTwoMatrix(mat1, mat2, result, 4, 3);
//     printMatrix(result, 4, 3);
// }

// ==========================================================
// Multiplication two matrices
// ==========================================================
void matrixMultiplication(int mat1[][3], int mat2[][3], int result[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
