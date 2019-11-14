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
public class Exercise02 
{
    public static void main(String[] args) 
    {
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Please give number A");
        double nA = keyboard.nextDouble(); 
        System.out.println("Please give number B");
        double nB = keyboard.nextDouble();
        System.out.println("Please give number C");
        double nC = keyboard.nextDouble();
        System.out.println("Please give number D");
        double nD = keyboard.nextDouble();
        double fResult = (nA / nB) + (nC / nD);
        System.out.println(fResult);
    }
}
