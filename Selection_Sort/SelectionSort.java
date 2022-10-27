public class SelectionSort {
    
    // A utility function to print an array
    public static void printArray(int[] arr) {
        for(int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    
    public static void selectionSort(int[] arr) {
        int minIdx;
        for(int i = 0; i < arr.length - 1; i++) {
        minIdx = i;
        for(int j = i + 1; j < arr.length ; j++) {
            if(arr[minIdx] > arr[j]) {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;  
    }
    }
    
    // Driver code to test above
    static int[] arr = {6, 1, 5, 9, 9, 5, 3, 8, 0};
    
    public static void main(String[] args) {
        selectionSort(arr);
        printArray(arr);
    }
        
}