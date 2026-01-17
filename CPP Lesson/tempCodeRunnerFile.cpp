void mergeArray(int arr1[], int arr2[], int size1, int size2)
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
