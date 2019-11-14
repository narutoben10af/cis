/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package contacts;
import java.util.*;
/**
 *
 * @author eian
 */
public class Contact 
{
    private String m_strFirst;
    private String m_strLast;
    private String m_strPhoneNum;
          
    public Contact() 
    {
        setContact("Blank", "Blank", "Blank");
    }
    
    public Contact(String a_strFirst, String a_strLast, String a_strPhoneNum) 
    {
        setContact(a_strFirst, a_strLast, a_strPhoneNum);
    }
    
    public String getFirst()
    {
      return m_strFirst;
    }
    public String getLast()
    {
      return m_strLast;
    }
    public String getPhoneNum()
    {
      return m_strPhoneNum;
    }
    
    public void setFirst(String a_strFirst)
    {
        m_strFirst = a_strFirst;
    }
    public void setLast(String a_strLast)
    {
        m_strLast = a_strLast;
    }
    public void setPhoneNum(String a_strPhoneNum)
    {
        m_strPhoneNum = a_strPhoneNum;
    }    
    protected void setContact(String a_strFirst, String a_strLast, String a_strPhoneNum)
    {
        m_strFirst = a_strFirst;
        m_strLast = a_strLast;
        m_strPhoneNum = a_strPhoneNum;               
    }
    
    public void print()
    {
        System.out.print("First Name: " + m_strFirst + "\t");
        System.out.print("Last Name: " + m_strLast + "\t");
        System.out.print("Phone Number: " + m_strPhoneNum + "\t");        
    }
  

}
