/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package assignment01;

import java.util.*;
import java.util.Random;
/**
 *
 * @author eian
 */
public class Exercise04 {
    
    public static void main(String[] args)
    {
       Scanner keyboard = new Scanner(System.in);
       String strText = "Java is much more difficult than Python";
       //System.out.println(strText.length()); 39 length
       
       Random r1 = new Random();
        int nLow = 0;
        int nHigh = strText.length() - 1;
        //highest value we can use is always Length - 1 
        int nRand1 = r1.nextInt(nHigh-nLow) + nLow;
        int nRand2 = r1.nextInt(nHigh-nLow) + nLow;
        System.out.println(nRand1);
        System.out.println(nRand2);
        String strSliced = strText.substring(nRand1, nRand2);
        System.out.println(strSliced);
        
        
    }
}
