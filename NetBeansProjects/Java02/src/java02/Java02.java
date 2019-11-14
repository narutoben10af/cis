/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java02;

/**
 *
 * @author eian
 */
public class Java02 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) /* String is a class,
            System is a class
            class usually starts with Capital letter
            this is a multiple line comment
            */
    {
        System.out.println("Hello World");
        System.out.println(); //prints an empty line
        System.out.println("\tThis is a new line\nAnother new line");
        System.out.println("\tThis\tis\ta\t\"tab\"\\");
        System.out.println("\nC:\\Documents\\JavaFiles");
        int x = 5, y = 10, z = 15;
        func(y, z, x);
        System.out.println("x=" + x + ", y=" + y + ", z =" + z);
        
        int A[] = {10, 20, 30};
//        func2(A);
        System.out.println(A[0]);
        func3(A);
        System.out.println(A[0]);
        
        Derp d1 = new Derp(10);
        func4(d1);
        System.out.println(d1);
        func5(d1);
        System.out.println(d1);

// TODO code application logic here
//9.4e3 = 9.4 x10^3
//int 10 numbers (0-9) so 0-10 -1 if in code 
//int 1 interger is 4 bytes 
//1 byte = 8 bits, 4 bytes = 32 bits, 2^31 - 1, why 31? because the first bit used for positive or negative integer 
// if 2bytes = 16 bits, only 15 bits usable 
    }
    
    
    
    
    public static void func(int x, int y, int z)
    {
        x++;
        y+=x;
        z+=y;
                     System.out.println("x=" + x + ", y=" + y + ", z =" + z);

        
    }
    
    public static void func2(int A[])
    {
        A[0]++;
    }
    
    public static void func3(int A[])
    {
        int B[] =  new int[A.length];
        for(int i = 0; i < A.length; i++)
        {
            B[i] = A[i] + 1;
        }
        A = B;
    }
    
    public static void func4(Derp f)
    {
        f.x++;
        System.out.println(f);
    }
    public static void func5(Derp f)
    {
        f = new Derp(20);
    }

    
}

class Derp 
{
    public int x;
    public Derp(int x)
    {
        this.x = x;
    
    }
    
    public String toString()
    {
        return new String("x=" +x);
        
    }
}
