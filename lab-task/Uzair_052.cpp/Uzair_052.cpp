#include <iostream>
using namespace std;

// void selectedArray(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int minIdx = i;

//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[j] > arr[minIdx])
//             {
//                 minIdx = j;
//             }
//         }

//         int temp = arr[minIdx];
//         arr[minIdx] = arr[i];
//         arr[i] = temp;
//     }
// }

// int main()
// {
//     int size;
//     cout << "Enter the number of Integers: ";
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "original Array: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     selectedArray(arr, size);
//     // Print the swapped array
//     cout << "Swapped Array: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

void arraySwap(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minInd = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minInd])
            {
                minInd = j;
            }
        }
        int temp = arr[minInd];
        arr[minInd] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int size;
    cout << "Enter the number of Integers: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arraySwap(arr, size);
    // Print the swapped array
    cout << "Swapped Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}