/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hangman2;
import java.util.Random;
import java.util.Scanner;
/**
 *
 * @author eian
 */

public class Hangman 
{ 
        
    private static String m_strWord;
    private static char m_cFiller;
    private String [] m_arrListOfWords;
    private char m_cGuess;
    private int m_nSize = m_strWord.length();
    
//    public void setWord(String a_strWord)
//    {
//       m_strWord = a_strWord;
//    }
//    public void setFiller(char a_cFiller)
//    {
//       m_cFiller = a_cFiller;
//    }
//
//    public void setList(String [] a_arrListOfWords)
//    {
//        m_arrListOfWords = a_arrListOfWords;
//    }
    
    public char getGuess()
    {
        return m_cGuess;
    }
    
    public String getString()
    {
        return m_strWord;
    }
    
    public String [] getList()
    {
       return m_arrListOfWords; 
    }
    
    public int getSize()
    {
        return m_nSize;
    }
    
    public char getFiller()
    {
        return m_cFiller;
    }
    
    public Hangman()
    {
        print(getString());
        System.out.println("Constructor called");
    }
    
//    public void setAll(String a_strWord, char a_cFiller, String [] m_arrListOfWords)
//    {
//        a_strWord = chooseWord(m_arrListOfWords);
//        a_strWord = m_strWord;
//        a_cFiller = m_cFiller;
//    }

    private int countFiller()
    {
        int nCount = 0;
        int nLen = m_strWord.length();
        
        for(int i = 0; i < nLen; i++)
        {
         if(m_cFiller == m_strWord.charAt(i))
            {
             nCount++;
            }
        }
         
        return nCount;
                 
    }
    
    private int fillString(char [] a_Word, char a_cGuess)
    {
        int nLen = 0, nCount = 0;
        nLen = m_strWord.length();
       
        for(int i = 0; i < nLen; i++)
        {
             if(a_cGuess == m_strWord.charAt(i))
             {
                a_Word[i] = a_cGuess;
                nCount ++;

             }
        }
        return nCount;
    }
    
    private String resetString(int a_nSize, char a_cFiller)
    {
        String strWord = new String();
         
       m_cFiller = a_cFiller;
        for (int i = 0; i < a_nSize; i++)
        {
            String strTemp = String.valueOf(m_cFiller);
            strWord += strTemp;
        }
      
        return strWord;
        
    }
    
    public String chooseWord()
    {
       String [] ListOfWords = {"Apple", "Google", "Microsoft", "Facebook"};

        int nMin = 0;
        int nMax = ListOfWords.length - 1; 
        int nRan = 0;
        Random r1 = new Random();
        int nRand = r1.nextInt((nMax - nMin) + 1) + nMin;
        m_strWord = ListOfWords[nRan];
        return m_strWord;
    }
        
       
   
   public void mainLoop()
   {
    int nRemainingGuess = 6;
    //Get Random Word
//    char cFiller = '*';
    String strMask = resetString(m_strWord.length(), '-');
    Scanner keyboard = new Scanner(System.in);
    char cGuess;
    char [] arrMask = strMask.toCharArray();
    int nGuess = 0;
    int nCountFiller = 0;
    
    while(true)
    {
        println(strMask);
        println("Remaining Guesses: " + nRemainingGuess);
        print("Input a letter: ");
        String strTemp = keyboard.next();
        cGuess = strTemp.charAt(0);
        nGuess = fillString(arrMask, cGuess);
                
        if(nGuess == 0)
        {
            nRemainingGuess --;
            print("wrong guess, try again!");
            print("You have:" + nRemainingGuess + "guesses left");
        }
        
        if (nRemainingGuess == 0)
        {
            print("You lose");
            print("the answer is: " + m_strWord);
            break;
        }
        nCountFiller = countFiller();
        
        if(nCountFiller == 0)
        {
            System.out.println(arrMask);
            println("You win");   
            break;
        }
    }
   }
   
    public static void println(String a_strValue)
    {
       System.out.println(a_strValue);
    }
    public static void println(int a_nValue)
    {
       System.out.println(a_nValue);
    }
    public static void println(double a_fValue)
    {
       System.out.println(a_fValue);
    }
    public static void print(double a_fValue)
    {
       System.out.print(a_fValue);
    }
    public static void print(int a_nValue)
    {
       System.out.print(a_nValue);
    }
    public static void print(String a_strValue)
    {
       System.out.print(a_strValue);
    }

}
