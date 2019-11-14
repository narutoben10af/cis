/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java05;

import java .util.*;
/**
 *
 * @author eian
 */
public class friday_sept14 
{
    
    public static void main(String[] args)
    {
      
    
     /* if(x > 0)
      {      
        System.out.println("x is positive");
      }
      else
      { 
        System.out.println("x is negative");
      }
    != is not equal to
*/
     
     
     //String comparison 
     Scanner keyboard = new Scanner(System.in);
     String strPassword = "Java";
     System.out.print("Enter password: ");
     String strInput = keyboard.nextLine();
     
     if(strInput.equals(strPassword) == true)
     {
        System.out.println("Access granted");
     }
     else
     {
        System.out.println("Access denied");
     }
                //always use .equals to equal two strings as == will only point to same memory in Java
     
     int x = 5;
     if(x >= 0)
     { 
         if (x == 0)
         {
             System.out.println("x is zero");
         }
         else
         {
             System.out.println("x is positive");
                  
         }
     }
     else 
     {
          System.out.println("x is negative");
     }
     
     System.out.println("Enter temperature: ");
     int nTemperature = keyboard.nextInt();
     if (nTemperature >= 30)
     {
         System.out.println("Hot");
     }
     else if (nTemperature >= 25)
     {
         System.out.print("Warm");
     }
     else if (nTemperature >=15)
     {
         System.out.print("Cool");
     }
     else 
     {
         System.out.print("Cold");
     }
  
    }

        
    
}
