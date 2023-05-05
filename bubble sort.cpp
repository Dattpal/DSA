#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    int count = 0;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            count++;
    if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    cout << "count:" << count << endl;
}

void printArray(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {7, 6, 2, 5, 6, 4, 5, 8, 9, 2};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);

    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}
