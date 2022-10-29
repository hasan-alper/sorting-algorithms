#include <iostream>

void bubbleSort(int arr[], int n) {
    bool flag = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(!flag) {
            break;
        }
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

    bubbleSort(arr, n);
    printArray(arr, n);
    
    return 0;
}