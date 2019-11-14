/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java04;

import java.util.*;

/**
 *
 * @author eian
 */
public class Java04 
{
/*
   
    public static void main(String[] args) 
    {
        Scanner keyboard = new Scanner(System.in);
        
        System.out.print("How old are you? ");
        int age = keyboard.nextInt();
        int years = 65 - age; 
        System.out.println(years + " years to retirement");
        
        // TODO code application logic here
    }
    

    public static void main(String[] agrs) 
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.print("Please type two numbers: ");
        int num1 = keyboard.nextInt();
        int num2 = keyboard.nextInt();
        int product = num1 * num2;
        System.out.println("The product is " + product);2
    }
    */
    
    public static void main(String[] agrs)
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.print("What is your name? ");
        String name = keyboard.next();
        name = name.toUpperCase();
        System.out.println(name + " has " + name.length() + 
                " letters and starts with " + name.substring(0,1));
       
       
        
        
    }
    
}
