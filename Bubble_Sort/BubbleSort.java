public class BubbleSort {
    
    // A utility function to print an array
    public static void printArray(int[] arr) {
        for(int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    
    public static void bubbleSort(int[] arr) {
        for(int i = 0; i < arr.length; i++) {
            boolean flag = false;
            for(int j = 0; j < arr.length - i - 1; j++) {
                if(arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;  
                    flag = true;
                }
            }
            if(!flag) {
                break;
            }
        }
    }
    
    // Driver code to test above
    static int[] arr = {6, 1, 5, 9, 9, 5, 3, 8, 0};
    
    public static void main(String[] args) {
        bubbleSort(arr);
        printArray(arr);
    }
        
}