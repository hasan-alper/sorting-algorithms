# Implementation of Insertion Sort
def insertion_sort(arr: list) -> None:
    for i in range(1, len(arr)):
        j = i
        while arr[j - 1] > arr[j] and j > 0:
            arr[j - 1], arr[j] = arr[j], arr[j - 1]
            j -= 1
     
        
# Driver code to test above
if __name__ == "__main__":
    nums = [6, 1, 5, 9, 9, 5, 3, 8, 0]
    insertion_sort(nums)
    print(nums)
