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
public class Student extends Contact
{
    private String m_strEmail;
    private String m_strMajor;    
    
    public Student() 
    {
        setStudent("None", "None", "None", "None", "None");
        
    }

    public Student(String a_strFirst,String a_strLast,String a_strPhoneNum,String a_strEmail,String a_strMajor) 
    {
        setStudent(a_strFirst,a_strLast, a_strPhoneNum, a_strEmail, a_strMajor);
    }
    
    protected void setStudent(String a_strFirst, String a_strLast, String a_strPhoneNum, String a_strEmail, String a_strMajor)
    {
        super.setContact(a_strFirst, a_strLast, a_strPhoneNum);
        m_strEmail = a_strEmail;
        m_strMajor = a_strMajor;
    }
    
    public String getEmail()
    {
       return m_strEmail;
    }

    public String getMajor()
    {
        return m_strMajor;
    }
    
    public void setEmail(String a_strEmail)
    {
        m_strEmail = a_strEmail;        
    }
    
    public void setMajor(String a_strMajor)
    {
        m_strMajor = a_strMajor;
    }
    
    public void print()
    {
        super.print();
        System.out.print("Email: " + m_strEmail + "\t");
        System.out.print("Major: " + m_strMajor + "\t");
    }
 
}
