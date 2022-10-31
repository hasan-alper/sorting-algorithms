# Implementation of Bubble Sort
def bubble_sort(arr: list) -> None:
    for i in range(len(arr)):
        swapped = False
        for j in range(len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped: break
     
        
# Driver code to test above
if __name__ == "__main__":
    nums = [6, 1, 5, 9, 9, 5, 3, 8, 0]
    bubble_sort(nums)
    print(nums)
