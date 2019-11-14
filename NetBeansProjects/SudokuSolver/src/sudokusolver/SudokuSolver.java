/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sudokusolver;

import java.util.*;
/**
 *
 * @author eian
 */
public class SudokuSolver 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) 
    {
        
        int[][] board = new int[9][9];
        
        int nBoardLen = board.length;

        if (solveSudoku(board, nBoardLen)) 
        {
            print(board, nBoardLen); // print solution 
        } 
        
        else
        {
            System.out.println("No solution");
        }
    }


    public static boolean isSafe(int[][] board, int nRows, int nCols, int nNum) 
    {
        for (int i = 0; i < board.length; i++) 
        {
            if (board[nRows][i] == nNum) 
            {
                return false;
            }
        }

        for (int j = 0; j < board.length; j++) 
        {
            if (board[j][nCols] == nNum) 
            {
                return false;
            }
        }

        int nSqrt = (int) Math.sqrt(board.length);
        int boxRowStart = nRows - nRows % nSqrt;
        int boxColStart = nCols - nCols % nSqrt;

        for (int i = boxRowStart; i < boxRowStart + nSqrt; i++) 
        {
            for (int j = boxColStart; j < boxColStart + nSqrt; j++) 
            {
                if (board[i][j] == nNum) 
                {
                    return false;
                }
            }
        }

        return true;
    }

    public static boolean solveSudoku(int[][] board, int nMax) 
    {
        int nRows = -1;
        int nCols = -1;
        boolean isEmpty = true;
        for (int i = 0; i < nMax; i++) 
        {
            for (int j = 0; j < nMax; j++) 
            {
                if (board[i][j] == 0) 
                {
                    nRows = i;
                    nCols = j;

                    isEmpty = false;
                    break;
                }
            }
            
            if (!isEmpty) 
            {
                break;
            }
        }

        if (isEmpty) 
        {
            return true;
        }

        for (int nNum = 1; nNum <= nMax; nNum++) 
        {
            if (isSafe(board, nRows, nCols, nNum)) 
            {
                board[nRows][nCols] = nNum;
                if (solveSudoku(board, nMax)) 
                {
                    return true;
                } 
                else 
                {
                    board[nRows][nCols] = 0;  
                }
            }
        }
        return false;
    }

    public static void print(int[][] board, int nMax) 
    {
        for (int i = 0; i < nMax; i++) 
        {
            for (int j = 0; j < nMax; j++) 
            {
                System.out.print(board[i][j]);
                System.out.print(" ");
            }
            
            System.out.print("\n");

            if ((i + 1) % (int) Math.sqrt(nMax) == 0) 
            {
                System.out.print("");
            }
        }
    }

}
