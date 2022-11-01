#include <iostream>

// Implementation of Insertion Sort
void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n ; i++)
    {
        int j = i;
        while (arr[j - 1] > arr[j] && j > 0)
        {
            std::swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

// Utility function to print an array of size n
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

// Driver code to test above
int main()
{
    int arr[] = { 6, 1, 5, 9, 9, 5, 3, 8, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}