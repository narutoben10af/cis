/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java05;

import java.util.Random;
/**
 *
 * @author eian
 */
public class Java05 {
    
    public static void main(String[] agrs)
            
    {
        int nMin = 1;
        int nMax = 5;
        int nRan = 0; 
        Random randomGenerator = new Random();
        
        nRan = randomGenerator.nextInt((nMax - nMin) + 1) + nMin;
        //  the +nMin to make sure it goes from 1 -> 5 because if not it will start from 0 
        //if nMin = 3, n Max = 8, (nMax - nMin) + 1 will go from 0 -> 5, and adding +nMin will give u 3 -> 8
        
        
        System.out.println(nRan);
    }
    
}
