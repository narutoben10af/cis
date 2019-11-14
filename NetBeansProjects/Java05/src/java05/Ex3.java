/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java05;

import java.util.*;
/**
 *
 * @author eian
 */
public class Ex3 {
    
    public static void main(String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Write something");
        String strSentence = keyboard.nextLine();
        System.out.println("Search for something you wrote");
        String strSearch = keyboard.nextLine();
        
        if (strSentence.contains(strSearch)) //find in python, contains in java
        {
            System.out.println("Found");
        }
        else
        {
            System.out.println("Not found");
        }
    
    }
}
