def selection_sort(l):
    """
    The selection sort algorithm sorts an array by repeatedly finding the minimum element from the unsorted part and putting it at the beginning. 
    """
    result = []
    for _ in range(len(l)):
        min = l[0]
        for j in range(len(l)):
            if l[j] < min:
                min = l[j]
        result.append(min)
        l.remove(min)
    return result
            
# Driver code to test above
lst = [6, 1, 5, 9, 9, 5, 3, 8, 0]
sorted_list = selection_sort(lst)
print(sorted_list)