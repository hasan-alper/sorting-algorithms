const insertionSort = (arr) => {
    for(let i = 0; i < arr.length - 1; i++) {
        let j = i;
        while(j >= 0 && arr[j] > arr[j+1]) {
            let temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;  
            j--;
        }
    }
}

// Driver code to test above
let lst = [6, 1, 5, 9, 9, 5, 3, 8, 0]
insertionSort(lst)
console.log(lst)