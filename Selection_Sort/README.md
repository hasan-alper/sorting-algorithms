# Selection Sort

![Selection Sort](https://miro.medium.com/max/1400/1*5WXRN62ddiM_Gcf4GDdCZg.gif)

*Selection Sort is quite straightforward, but not very efficient. On the first pass, the smallest value is found and moved to index 0. The remainder of the unsorted array is then searched for the new minimum, which is placed at index 1, and so on. For an array of n items, his will require n-passes.*

**Selection sort** divides the input list into two parts: a sorted sublist of items which is built up from left to right at the front (left) of the list and a sublist of the remaining unsorted items that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

**Pseudocode of the complete algorithm:**

```
procedure selection sort 
   list  : array of items
   n     : size of list

   for i = 1 to n - 1
      min = i   

      for j = i+1 to n 
         if list[j] < list[min] then
            min = j;
         end if
      end for

      if indexMin != i  then
         swap list[min] and list[i]
      end if
   end for
	
end procedure
```

**Best, worst, and average cases:**

The average case time complexity of selection sort is O(N^2).

The worst-case time complexity of selection sort, as well as the best-case time complexity of selection sort, comes out to be the same as the average case time complexity of selection sort i.e. O(N^2).