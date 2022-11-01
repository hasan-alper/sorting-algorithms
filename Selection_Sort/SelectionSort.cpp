#include <iostream>

// Implementation of Selection Sort
void selectionSort(int arr[], int n) 
{
    int min_idx;
    for(int i = 0; i < n - 1; i++) 
    {
        min_idx = i;
        for(int j = i + 1; j < n ; j++) 
        {
            if(arr[min_idx] > arr[j]) 
            {
                min_idx = j;
            }
        }
        std::swap(arr[i], arr[min_idx]);
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
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}