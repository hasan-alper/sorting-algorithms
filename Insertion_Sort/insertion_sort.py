def insertion_sort(l):
    """
    A sorting algorithm that places an unsorted element at its suitable place in each iteration.
    """
    for i in range(len(l) - 1):
        j = i
        while l[j] > l[j + 1]:
            l[j], l[j + 1] = l[j + 1], l[j]
            j = max(j - 1, 0)

    return l
     
        
# Driver code to test above
lst = [6, 1, 5, 9, 9, 5, 3, 8, 0]
sorted_list = insertion_sort(lst)
print(sorted_list)
