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
public class Ex4 {
    public static void main(String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.println("type your name with initial as capital letter");
        String strName1 = keyboard.nextLine();
        System.out.println("type your name all lowercase");
        String strName2 = keyboard.nextLine();
        String strName3 = strName1.toLowerCase();
        String strName4 = strName2.toLowerCase();
        
        if (strName3.equals(strName4) == true)
        {
            System.out.println("Names are same");
        }
        else
        {
            System.out.println("Names are different");
        }
                
    }
    
    
}
