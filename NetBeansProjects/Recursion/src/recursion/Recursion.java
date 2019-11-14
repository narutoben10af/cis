/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package recursion;

/**
 *
 * @author eian
 */
public class Recursion 
{
    
    public int nQueens = 8; 
  
    public static void main(String args[]) 
    { 
        Recursion Queen = new Recursion(); 
        Queen.confirmQueenLocation(); 
    } 
    
        public void printSolution(int board[][]) 
    { 
        for (int i = 0; i < nQueens; i++) 
        { 
            for (int j = 0; j < nQueens; j++) 
            {
                System.out.print(" " + board[i][j] + " "); 
            }
            System.out.println(); 
        } 
    } 
  
    boolean isSafe(int nBoard[][], int nRows, int nCols) 
    { 
        int i, j; 
  
        for (i = 0; i < nCols; i++) 
        {
            if (nBoard[nRows][i] == 1) 
            {
                return false; 
            }
        }
  
        for (i = nRows, j = nCols; i >= 0 && j >= 0; i--, j--) 
        {
            if (nBoard[i][j] == 1) 
            {
                return false; 
            }
        }
  
        for (i = nRows, j = nCols; j >= 0 && i < nQueens; i++, j--) 
        {
            if (nBoard[i][j] == 1) 
            {
                return false; 
            }
        }
        
        return true; 
    } 
  
    boolean solveQueensLocations(int nBoard[][], int nCols) 
    { 
        if (nCols >= nQueens) 
        {
            return true; 
        }
  
        for (int i = 0; i < nQueens; i++) 
        { 
            if (isSafe(nBoard, i, nCols)) 
            { 
                nBoard[i][nCols] = 1; 
  
                if (solveQueensLocations(nBoard, nCols + 1) == true) 
                {
                    return true; 
                }
                
                //backtracking
                nBoard[i][nCols] = 0; 
            } 
        } 
  
        return false; 
    } 
  
    boolean confirmQueenLocation() 
    { 
        int nBoard[][] = new int[8][8];
  
        if (solveQueensLocations(nBoard, 0) == false) 
        { 
            System.out.print("No Solution Queens"); 
            return false; 
        } 
  
        printSolution(nBoard); 
        return true; 
    } 
  
  
} 
