/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment01;

import java.util.*;
/**
 *
 * @author eian
 */
public class Exercise01
{

    /**
     */
    public static void main(String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Hello, What is your first name?");
        String strFirstName = keyboard.nextLine();
        System.out.println("Hello, what is your last name");
        String strLastName = keyboard.nextLine();
        System.out.println("Hello " + strFirstName + " " + strLastName);
        
        System.out.println("Hello " + strLastName + ", " + strFirstName);
                
    }
    
}
