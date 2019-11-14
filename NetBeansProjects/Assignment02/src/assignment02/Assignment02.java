/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment02;

import java.util.*;
import java.util.Random;
/**
 *
 * @author eian
 */
public class Assignment02 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        Scanner keyboard = new Scanner(System.in);
        
        Random r1 = new Random();
        int nLow = 0;
        int nHigh = 100;
        int nRand = r1.nextInt(nHigh - nLow) + nLow;
        //System.out.println(nRand);
        int nTries = 0;
        
        while(true)
        {
            System.out.println("Guess number");
            int nGuess = keyboard.nextInt();
            nTries += 1;
            if(nGuess > nRand)
            {
                System.out.println("too high, try again!");
            }
            else if(nGuess < nRand)
            {
                System.out.println("too low, try again");
            }
            else 
            {
                System.out.println("correct");
                break;
            } 
        }

        System.out.println(nTries);
        

// Exercise 02
        System.out.println("Word: ");
        keyboard.nextLine();
        String strWord = keyboard.nextLine();
        String strSliced = "";
        Random r2 = new Random();
        while(strWord.length() > 0)
        {
           int nPos1 = r2.nextInt(strWord.length());
           strSliced += strWord.charAt(nPos1);
           strWord = strWord.substring(0, nPos1) + strWord.substring(nPos1 + 1, strWord.length());
//            System.out.println(strSliced);


        }


      System.out.println(strSliced);

//Exercise 03
       
        int nAnswer = 0;
         System.out.println("Input Number");
        int nNum = keyboard.nextInt();
         while(nNum > 0)
       {
        nNum = nNum / 10;   //Divide until less than 0 to coubt only the full value
        nAnswer = nAnswer + 1;
        }
        
         System.out.println(nAnswer);

    }
    
}
