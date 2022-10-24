public class InsertionSort {
    
    // A utility function to print an array
    public static void printArray(int[] arr) {
        for(int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    
    public static void insertionSort(int[] arr) {
        for(int i = 0; i < arr.length - 1; i++) {
            int j = i;
            while(j >= 0 && arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;  
                j--;
            }
        }
    }
    
    // Driver code to test above
    static int[] arr = {6, 1, 5, 9, 9, 5, 3, 8, 0};
    
    public static void main(String[] args) {
        insertionSort(arr);
        printArray(arr);
    }
        
}