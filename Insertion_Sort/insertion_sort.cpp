#include <iostream>

void insertion_sort(int l[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (l[j] > l[j + 1] && j >= 0)
        {
            std::swap(l[j], l[j + 1]);
            j--;
        }
    }
}


// A utility function to print an array of size n
void print_array(int l[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        std::cout << l[i] << " ";
    std::cout << std::endl;
}

// Driver code to test above
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);
    print_array(arr, n);

    return 0;
}
