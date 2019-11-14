/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contacts;

/**
 *
 * @author eian
 */
public class Contacts 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        Contact c1 = new Contact("Si Eian", "Lim", "0122916183");
        c1.print();
        System.out.println();
        Student s1 = new Student("Si Eian", "Lim", "05035930823", "limsieian@me.com", "Computer Science");
        s1.print();
    }
    
}
