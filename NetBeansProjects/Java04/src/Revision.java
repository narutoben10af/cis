
import java.util.*;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author eian
 */
public class Revision 
{
    public static void main(String[] args)
    {
        

//       LinkedList<Integer> listInt = new LinkedList<>();
//        listInt.add(5);
//        listInt.add(8);
//        listInt.add(14);
//        System.out.println(listInt);
//        listInt.add(0, 10); // add(position, value)
//        listInt.add(3, 30);
//        listInt.add(4, 0);
//        System.out.println(listInt);
//        int i = listInt.removeFirst();
//        System.out.println(listInt);
//        System.out.println(i);
//        int j = listInt.removeLast();
//        System.out.println(listInt);
//        System.out.println(j);
//        int k = listInt.remove(2);
//        System.out.println(listInt);
//        System.out.println(k);
//        // int i = listInt[3]; // Array notation cannot be used!
//        int b = listInt.get(1); 
//        System.out.println(listInt);
//        System.out.println(b);  // get() returns the element but does not remove it
//        int nSize = listInt.size();
//        System.out.println("Size = " + nSize);
//        ListIterator<Integer> listIterator = listInt.listIterator();
//        while(listIterator.hasNext())
//        {
//        System.out.println(listIterator.next());
//        }
//        // start from the last element
//        while(listIterator.hasPrevious())
//        {
//        System.out.println(listIterator.previous());
//        }
//        for(int y = 0; y < nSize; y++)
//            {
//            System.out.println(listInt.get(y));
//            }
//        for(int m: listInt)
//        {
//        System.out.println(m);
//        }
//        
        
//                HashMap<String, Integer> hashMap = new HashMap<>();
//        hashMap.put("Smith", 30);
//        hashMap.put("Anderson", 31);
//        
//        System.out.println(hashMap);
//        
//        int nAge = hashMap.get("Anderson");
//        System.out.println(nAge);
//
//        nAge = hashMap.remove("Anderson");
//        System.out.println(hashMap);
//        System.out.println(nAge);
//// Removes the value in hashMap and returns the value into nAge at the same time
//
//        for(HashMap.Entry<String, Integer> entry : hashMap.entrySet())
//        {
//            System.out.print("Key: " + entry.getKey() + "\t");
//            System.out.println("Value: " + entry.getValue());
//        }
//        // Exercise - count the occurence of words in a string
//        //Set text in a string 
//        String strText = "Good Morning. Have a good day. Have a good visit. Have fun!";
//        
//        //Create a HashMap to hold words as key and count as value
//        HashMap<String, Integer> map = new HashMap<>();
//        
////        strText = strText.toLowerCase();
//        
//        String[] words = strText.split("[ .!]"); // Regex on what to split
//        
//        for (int a = 0; a < words.length; a++)
//        {
//            int nCount = 1;
//            if(map.containsKey(words[a].toLowerCase()))
//            {
//                nCount++;
//                map.put(words[a].toLowerCase(), nCount);
//            }
//            else
//            {
//                nCount = 1;
//                map.put(words[a].toLowerCase(), nCount);
//            }
//        }
//        
//        System.out.println(map);
//        
//        for(HashMap.Entry<String, Integer> entry : map.entrySet())
//        {
//            System.out.print("Key: " + entry.getKey() + "\t");
//            System.out.println("Value: " + entry.getValue());
//        }
//        
//        for(int i = 1; i < 6; i++)
//        {
//            System.out.print("Row " + i + "\t");
//            for(int j = 1; j < 4; j++) 
//            {
//                System.out.print((j + (i - 1) * 3) + "\t"); 
//            }
//            System.out.println(); 
//        }
       //Multiplication table 
        for(int i = 1; i <= 9; i++) 
        {
            System.out.print(i + " | ");
            for(int j = 1; j <= 9; j++) 
            {
            System.out.printf("%4d", i * j); 
            }
            System.out.println(); 
        }
    
        int [][] matrix = { {1, 2, 3}, 
                            {7, 8, 9}}; 
        int [][] matrix2 = new int[3][4];   
        int nRows = matrix.length;
        int nCols = matrix[0].length;
        Scanner kb = new Scanner(System.in);
        for(int i = 0; i < nRows; i++) 
        {
            for(int j = 0; j < nCols; j++) 
            {
                System.out.print("Input element " + (i + 1) + ", " + (j + 1) + ": ");
                matrix2[i][j] = kb.nextInt();
            }
            System.out.println();
        }
                for(int i = 0; i < nRows; i++) 
        {
            for(int j = 0; j < nCols; j++) 
            {
                System.out.print(matrix2[i][j] + "\t"); 
            }
            System.out.println();
        }

        
//        int [] arrNumbers = {1, 2, 3, 4, 5};
//        doubleArray(arrNumbers); // Double it
//        printArray(arrNumbers); 
//    }
//    public static void printArray(int[] a_nArray) 
//    {
//        int nLen = a_nArray.length;
//        for (int i = 0; i < nLen; i++) 
//        {
//            System.out.print(a_nArray[i] + " ");
//        }
//        System.out.println(); 
//    }
//    public static void doubleArray(int[] a_nArray) 
//    {
//        int nLen = a_nArray.length;
//        for (int i = 0; i < nLen; i++) 
//        {
//            a_nArray[i] = a_nArray[i] * 2; 
//        }
//    }
//    
//    private double m_x;
//    private double m_y;
//    private double getY()
//    {
//    return m_y;
//    }
//    public void setX(double a_x)
//    {
//    m_x = a_x;
//    }
    }
}
