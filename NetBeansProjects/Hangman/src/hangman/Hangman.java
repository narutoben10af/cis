/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hangman;
import java.util.Random;
import java.util.*;
/**
 *
 * @author eian
 */
public class Hangman 
{
    static String [] listOfWords = {"Apple", "Google", "Microsoft", "Facebook"};

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
//        
//        String strTest = resetString(6, '*');
//        String strWord = "abcabc";
//        char [] arrTest = strTest.toCharArray();
//        int nCount = fillString(arrTest, strWord, 'b');
//        System.out.println(arrTest);
//        println("Count:" + nCount);
//        String strFillerTest = new String(arrTest);
//        int nCountFiller = countFiller(strFillerTest, '*');
//        println("Count Filler: " + nCountFiller);
        
        mainLoop();
    }
    
    public static String chooseWord(String [] a_listWords)
    {
        int nMin = 0;
        int nMax = a_listWords.length - 1; 
        int nRan = 0;
        Random r1 = new Random();
        int nRand = r1.nextInt((nMax - nMin) + 1) + nMin;
        return a_listWords[nRan];
    }
   
     
    public static void printAsString(String a_listString)
    {
        String [] arrWord = {"Apple", "Google", "Microsoft", "Facebook"};
        int nLen = arrWord.length;
        int nLen2 = a_listString.length();
        for (int i = 0; i < nLen2; i++)
        {
           print(a_listString.charAt(i) + " ");      
        }
        
    }
   
    public static String resetString(int a_nSize, char a_cFiller)
    {
        String strWord = new String();

        for (int i = 0; i < a_nSize; i++)
        {
            String strTemp = String.valueOf(a_cFiller);
            strWord += strTemp;
        }
      
        return strWord;
        
    }
    

    public static int fillString(char [] a_Word, String a_strOriginalWord, char a_cGuess)
    {
        int nLen = 0, nCount = 0;
        nLen = a_strOriginalWord.length();
       
        for(int i = 0; i < nLen; i++)
        {
             if(a_cGuess == a_strOriginalWord.charAt(i))
             {
                a_Word[i] = a_cGuess;
                nCount += 1;

             }
        }
        return nCount;
    }
    
    public static int countFiller(char [] a_strWord, char a_cFiller)
    {
        int nCount = 0;
        int nLen = a_strWord.length;
        
        for(int i = 0; i < nLen; i++)
        {
         if(a_cFiller == a_strWord[i])
            {
             nCount++;
            }
                     
        }
         
         return nCount;
                 
    }
    
   public static void mainLoop()
   {
    int nRemainingGuess = 6;
    //Get Random Word
    String strWord = chooseWord(listOfWords);
    char cFiller = '*';
    String strMask = resetString(strWord.length(), cFiller);
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
        fillString(arrMask,strWord,cGuess);
         
        if(nGuess == 0)
        {
            nRemainingGuess --;
            print("wrong guess, try again!");
            print("You have:" + nRemainingGuess + "guesses left");
        }
        
        if (nRemainingGuess == 0)
        {
            print("You lose");
            print("the answer is: " + strWord);
            break;
        }
        nCountFiller = countFiller(arrMask, cFiller);
        
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
