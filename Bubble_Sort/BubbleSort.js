// Implementation of Bubble Sort
const bubbleSort = (arr) => {
    for(let i = 0; i < arr.length; i++) {
        let swapped = false
        for(let j = 0; j < arr.length - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                let temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
                swapped = true
            }
        }
        if(!swapped) {
            break
        }
    }
}

// Driver code to test above
let nums = [6, 1, 5, 9, 9, 5, 3, 8, 0]
bubbleSort(nums)
console.log(nums)