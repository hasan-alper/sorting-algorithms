# Implementation of Selection Sort
def selection_sort(arr: list) -> None:
    for i in range(len(arr)):
        min_idx = i
        for j in range(i + 1, len(arr)):
            if arr[min_idx] > arr[j]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
            

# Driver code to test above
if __name__ == "__main__":
    nums = [6, 1, 5, 9, 9, 5, 3, 8, 0]
    selection_sort(nums)
    print(nums)
