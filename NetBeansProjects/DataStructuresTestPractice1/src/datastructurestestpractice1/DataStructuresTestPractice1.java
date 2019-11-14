/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datastructurestestpractice1;
import java.util.*;
/**
 *
 * @author eian
 */
public class DataStructuresTestPractice1 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        List <String> list = new ArrayList <String>();
        list.add("hello");
        list.add("whatever");
        list.add("test");
        list.add("fuck");
        List <String> newList = reverseWords(list);
        System.out.println(newList);
    }
    
    public static List <String> reverseWords(List<String> list)
    {
        List <String> newList = new ArrayList<String>();
        
        for(int i = 0; i < list.size(); i++)
        {
            String oldWord = list.get(i);
            String newWord = "";
            int nLen = oldWord.length();
            for(int j = nLen-1; j >= 0; j--)
            {
                newWord += oldWord.charAt(j);
            }
            newList.add(newWord);
        }
        
        
        return newList;
    }
}
