/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arraylist_exercise;
import java.util.*;
import java.lang.*;
/**
 *
 * @author eian
 */
public class ArrayList_Exercise 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        List <Integer> nList = new ArrayList<Integer>();
        for(int i=0; i < 10; i++)
        {
            nList.add(i+2);
        }
//        nList.add(2);
        boolean nResult = unique(nList);
        System.out.println("nResult = " + nResult);
        
        Integer integer = new Integer(5);
        int i = integer.intValue();
        
        List <String> strList = new ArrayList<String>();
        strList.add("Hello");
        strList.add("Test");
        strList.add("Fool");
        strList.add("Mat");
        strList.add("Eat");
        strList.add("Drink");
        strList.add("Pork");
       List <String> strList2 = new ArrayList<String>();
        strList2 = allStringsOfSize(strList, 3);
        for( i = 0; i< strList2.size(); i++)
        {
            System.out.println(strList2.get(i));
        }
        
        List <Integer> strList3 = new ArrayList<Integer>();
        strList3.add(3);
        strList3.add(2);
        strList3.add(3);
        strList3.add(5);
        strList3.add(5);
        strList3.add(4);
        strList3.add(12);

        System.out.println(allMultiples(strList3, 5));
        // TODO code application logic here
        
        List <Integer> strList4 = new ArrayList<Integer>();
        strList4.add(2);
        strList4.add(3);
        strList4.add(3);
        strList4.add(5);
        strList4.add(12);
        strList4.add(5);
        strList4.add(4);

        System.out.println(isPermutation(strList3, strList4));

        String strSentence = "Hello, how are you?";
        System.out.println(stringToListOfWords(strSentence));
        List <String> strString2 = new ArrayList<String>();
        strString2 = stringToListOfWords(strSentence);
        System.out.println(strString2.size());
        
        int x = 13;
        removeAllInstances(strList4, x);
        System.out.println(strList4);

    }
    
    
    public static <E> boolean unique(List<E> a_list)
    {
        for(int i = 0; i < a_list.size(); i++)
        {
            for(int j = i+1; j < a_list.size(); j++)
            {
                if(a_list.get(i).equals(a_list.get(j)))
                {
                    return false;
                }
            }
        }
        return true;
    }
    
    public static List <Integer> allMultiples(List<Integer> a_list, int a_nNum)
    {
//        int nYes = 0;
//        for(int i = 0; i < a_list.size(); i++)
//        {
//           if(a_list.get(i).equals(a_nNum))
//           {
//               nYes = 1;
//           }
//        }
//        if(nYes == 1)
//        {
        
        List <Integer> listMultiple = new ArrayList<Integer>();
            for(int j = 0; j < a_list.size(); j++)
            {
                int nInt = (int) a_list.get(j);
                 if((nInt % a_nNum) == 0)
                 {
                     listMultiple.add(a_list.get(j));
                 }
            }
            
            return listMultiple;
//        }

    }
    
    public static <String> List allStringsOfSize(List<String> a_list, int a_nLength)
    {
        List <String> listSameSize = new ArrayList<String>();
        for(int i = 0; i < a_list.size(); i++)
        {
            String strString = a_list.get(i);
            int nLen = strString.toString().length();
            if(nLen == a_nLength)
            {
                listSameSize.add(a_list.get(i));
            }
        }
        
        return listSameSize;
    }
    
    public static <E> boolean isPermutation(List <E> a_list, List <E> a_list2)
    {
        if(a_list.size() != a_list2.size())
        {
            return false;
        }
        for(int i = 0; i < a_list.size(); i++)
        {
            int nCount = 0;
            int nCount2 = 0;
            for(int j = 0; j < a_list.size(); j++)
            {
              if(a_list.get(i).equals(a_list2.get(j)))
                {
                    nCount++;
                }
            }
            if(nCount == 0)
            {
                return false;
            }
            if(nCount >= 1)
            {
                for(int x = 0; x < a_list.size(); x++)
                {
                    if(a_list.get(i).equals(a_list.get(x)))
                    {
                        nCount2++;
                    }
                }
                if(nCount != nCount2)
                {
                    return false;
                }
            }
        }
        
        return true;
        
    }
    
    public static List <String> stringToListOfWords(String strString)
    {
       List <String> listString = new ArrayList<String>();
       String[] strNew = strString.replaceAll("[^a-zA-Z ]","").split("\\s+");
       for(int i = 0; i < strNew.length; i++)
       {
           listString.add(strNew[i]);
       }
       
       return listString;

        
    }
    
    
    
    public static <E> void removeAllInstances(List<E> a_list, E a_item)
    {
        for(int i = 0; i < a_list.size(); i++)
        {
            if(a_list.get(i).equals(a_item))
            {
                a_list.remove(i);
                i--;
            }

         
        }
    }
}
