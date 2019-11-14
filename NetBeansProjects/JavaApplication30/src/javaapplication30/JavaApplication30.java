/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication30;

/**
 *
 * @author eian
 */
public class JavaApplication30 
{

    /**
     * @param args the command line arguments
     */
    public static void func(int A[])
    {
        int B[] = new int[A.length];
        for (int i = 0; i < A.length; i++)
        {
            B[i] = A[i]*10+1;
        }
        A=B;
    }
    public static void main(String[] args) 
    {
        int A[] = {10, 20, 30, 40, 50};
        func(A);
        System.out.println(A[2]);
        
        // TODO code application logic here
    }
    
}
