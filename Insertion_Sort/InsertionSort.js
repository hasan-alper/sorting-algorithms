// Implementation of Insertion Sort
const insertionSort = (arr) => {
    for(let i = 1; i < arr.length; i++) {
        let j = i
        while(j >= 0 && arr[j - 1] > arr[j]) {
            let temp = arr[j - 1]
            arr[j - 1] = arr[j]
            arr[j] = temp
            j--;
        }
    }
}

// Driver code to test above
let nums = [6, 1, 5, 9, 9, 5, 3, 8, 0]
insertionSort(nums)
console.log(nums)