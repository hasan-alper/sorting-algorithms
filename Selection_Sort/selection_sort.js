const selectionSort = (arr) => {
    let minIdx;
    for(let i = 0; i < arr.length - 1; i++) {
        minIdx = i;
        for(let j = i + 1; j < arr.length ; j++) {
            if(arr[minIdx] > arr[j]) {
                minIdx = j;
            }
        }
        let temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;  
    }
}

// Driver code to test above
let lst = [6, 1, 5, 9, 9, 5, 3, 8, 0]
selectionSort(lst)
console.log(lst)