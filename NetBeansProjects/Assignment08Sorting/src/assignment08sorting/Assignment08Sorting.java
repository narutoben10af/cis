/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment08sorting;

/**
 *
 * @author eian
 */
public class Assignment08Sorting 
{

    public static int nQuickComparisons;
    public static int nQuickExchanges;
    public static int nMergeComparisons;    
    public static int nMergeExchanges;
    public static int nInsertionComparisons;
    public static int nInsertionExchanges;
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        //QuickSort
        long nQuickTime1 = System.nanoTime();
        int arr[] = {6, 5, 4, 3 ,2, 1}; 
        printArray(arr); 
        int nLen = arr.length; 
        quicksort(arr, 0, nLen-1);
  
        System.out.println("sorted array"); 
        printArray(arr); 

        long nQuickTime2 = System.nanoTime();
        long nQuickRunTime = nQuickTime2 - nQuickTime1;
        System.out.println("Quick Sort Run Time: " + nQuickRunTime);
        System.out.println("Quick Sort Comparisons: " + nQuickComparisons);
        System.out.println("Quick Sort Exchanges: " + nQuickExchanges);
        
        //InsertionSort
        long nInsertionTime1 = System.nanoTime();
        int arr2[] = {6, 5, 4, 3 ,2, 1}; 
        printArray(arr2); 
        int nLen2 = arr2.length; 
        insertionsort(arr2);
       
        System.out.println("sorted array"); 
        printArray(arr2); 

        long nInsertionTime2 = System.nanoTime();
        long nInsertionRunTime = nInsertionTime2 - nInsertionTime1;
        System.out.println("Insertion Sort Run Time: " + nInsertionRunTime);
        System.out.println("Insertion Sort Comparisons: " + nInsertionComparisons);
        System.out.println("Insertion Sort Exchanges: " + nInsertionExchanges);

        //MergeSort
        long nMergeTime1 = System.nanoTime();
        int arr3[] = {6, 5, 4, 3 ,2, 1}; 
        printArray(arr3); 
        int nLen3 = arr3.length; 
        mergesort(arr3, 0, arr3.length-1);
       
        System.out.println("sorted array"); 
        printArray(arr3); 

        long nMergeTime2 = System.nanoTime();
        long nMergeRunTime = nMergeTime2 - nMergeTime1;
        System.out.println("Merge Sort Run Time: " + nMergeRunTime);
        System.out.println("Merge Sort Comparisons: " + nMergeComparisons);
        System.out.println("Merge Sort Exchanges: " + nMergeExchanges);


    }
    
    public static void merge(int arr[], int l, int m, int r) 
    { 
        // Find sizes of two subarrays to be merged 
        int n1 = m - l + 1; 
        int n2 = r - m; 
  
        /* Create temp arrays */
        int L[] = new int [n1]; 
        int R[] = new int [n2]; 
  
        /*Copy data to temp arrays*/
        for (int i=0; i<n1; ++i) 
        {
            L[i] = arr[l + i]; 
            nMergeExchanges++;
        }
        for (int j=0; j<n2; ++j) 
        {
            R[j] = arr[m + 1+ j]; 
            nMergeExchanges++;           
        }
  
        /* Merge the temp arrays */
  
        // Initial indexes of first and second subarrays 
        int i = 0, j = 0; 
  
        // Initial index of merged subarry array 
        int k = l; 
        while (i < n1 && j < n2) 
        { 
            if (L[i] <= R[j]) 
            { 
                nMergeComparisons++;
                arr[k] = L[i]; 
                i++; 
                nMergeExchanges++;
               
            } 
            else
            { 
                arr[k] = R[j]; 
                j++; 
                nMergeExchanges++;
            } 
            k++; 
        } 
  
        /* Copy remaining elements of L[] if any */
        while (i < n1) 
        { 
            arr[k] = L[i]; 
            i++; 
            k++; 
            nMergeExchanges++;
        } 
  
        /* Copy remaining elements of R[] if any */
        while (j < n2) 
        { 
            arr[k] = R[j]; 
            j++; 
            k++; 
            nMergeExchanges++;            
        } 
    } 
  
    // Main function that sorts arr[l..r] using 
    // merge() 
    public static void mergesort(int arr[], int l, int r) 
    { 
        if (l < r) 
        { 
            // Find the middle point 
            int m = (l+r)/2; 
            nMergeComparisons++;
  
            // Sort first and second halves 
            mergesort(arr, l, m); 
            mergesort(arr , m+1, r); 
  
            // Merge the sorted halves 
            merge(arr, l, m, r); 

        } 
    } 
  
    /* A utility function to print array of size n */
    public static void printArray(int arr[]) 
    { 
        int n = arr.length; 
        for (int i=0; i<n; ++i) 
        {
            System.out.print(arr[i] + " "); 
        }
        System.out.println(); 
    } 
    
    
    public static void insertionsort(int arr[]) 
    { 
        int n = arr.length; 
        for (int i = 1; i < n; ++i) 
        { 
            int key = arr[i]; 
            int j = i - 1; 
            
            /* Move elements of arr[0..i-1], that are 
               greater than key, to one position ahead 
               of their current position */
            while (j >= 0 && arr[j] > key) 
            { 
                arr[j + 1] = arr[j]; 
                j = j - 1; 
                nInsertionExchanges+=2;
            } 
            arr[j + 1] = key; 
            nInsertionExchanges++;
        } 
    } 
    
    public static int partition(int arr[], int low, int high) 
    { 
        int pivot = arr[high];  
        int i = (low-1); // index of smaller element 
        for (int j=low; j<high; j++) 
        { 
            // If current element is smaller than the pivot 
            if (arr[j] < pivot) 
            { 
                i++; 
                nQuickComparisons++;
                // swap arr[i] and arr[j] 
                int temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
                nQuickExchanges+=2;
            } 
        } 
  
        // swap arr[i+1] and arr[high] (or pivot) 
        int temp = arr[i+1]; 
        arr[i+1] = arr[high]; 
        arr[high] = temp; 
        nQuickExchanges+=2;

        return i+1; 
    } 
  
  
    /* The main function that implements QuickSort() 
      arr[] --> Array to be sorted, 
      low  --> Starting index, 
      high  --> Ending index */
    public static void quicksort(int arr[], int low, int high) 
    { 
        if (low < high) 
        { 
            /* pi is partitioning index, arr[pi] is  
              now at right place */
            int pi = partition(arr, low, high); 
            nQuickComparisons++;
            // Recursively sort elements before 
            // partition and after partition 
            quicksort(arr, low, pi-1); 
            quicksort(arr, pi+1, high); 
        } 
    } 

    
    
}
