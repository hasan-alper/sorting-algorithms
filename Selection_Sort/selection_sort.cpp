#include <iostream>

void selectionSort(int arr[], int n) {
    int min_idx;
    for(int i = 0; i < n - 1; i++) {
        min_idx = i;
        for(int j = i + 1; j < n ; j++) {
            if(arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }
        std::swap(arr[i], arr[min_idx]);
    }
}

// A utility function to print an array of size n
void printArray(int l[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        std::cout << l[i] << " ";
    std::cout << std::endl;
}

// Driver code to test above
int main() {
    
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}