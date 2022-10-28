def bubble_sort(l):
    """
    A sorting algorithm that repeatedly steps through the input list element by element, comparing the current element with the one after it, swapping their values if needed.
    """
    for i in range(len(l)):
        flag = False
        for j in range(len(l) - i - 1):
            if(l[j] > l[j+1]):
                l[j], l[j+1] = l[j+1], l[j]
                flag = True
        if(not flag): break
    return l
     
        
# Driver code to test above
lst = [6, 1, 5, 9, 9, 5, 3, 8, 0]
sorted_list = bubble_sort(lst)
print(sorted_list)
