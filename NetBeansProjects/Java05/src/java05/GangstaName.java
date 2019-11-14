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
public class GangstaName 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.print("Type your name, player: ");
        String name = keyboard.nextLine();
        
        //split name into first name and last name and initial
        String first = name.substring(0, name.indexOf(" "));
        String last = name.substring(name.indexOf(" ") + 1 );
        last = last.toUpperCase();
        String fInitial = first.substring(0,1);
        
        System.out.println("Your gangsta name is \"" + fInitial + ". Diddy "
        + last + " " + first + "=izzle\"");
        
        System.out.print("Type your name, player: ");
        name = keyboard.nextLine();
        
        first = name.substring(0, name.indexOf(",") + 2);
        last = name.substring(name.indexOf(","));
        last = last.toUpperCase();

        System.out.println("Your gangsta name is \"" + fInitial + ". Diddy "
        + first + " " + last + "=izzle\"");
        // TODO code application logic here
    }
    
}
