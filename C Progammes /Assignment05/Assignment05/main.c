//
//  main.c
//  Assignment05
//
//  Created by Lim Si Eian on 27/02/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#define ROWS 4 // Number of rows in matrix
#define COLS 4 // Number of columns in matrix
#define SUB_ROWS 2 // Number of rows in sub-matrix
#define SUB_COLS 2 // Number of columns in sub-matrix

bool hasSubmatrix(int matrix[][COLS], int rows, int cols, int submat[][SUB_COLS], int subRows, int subCols);

int main(void)
{
    int matrix[ROWS][COLS] = {{1,2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12},
                            {13, 14, 15, 16}};

    int subMat[SUB_ROWS][SUB_COLS] = {{1, 2}, {3,6}};
            
    bool hasSub = hasSubmatrix(matrix, ROWS, COLS, subMat, SUB_ROWS, SUB_COLS);
    printf("%d", hasSub);
}


bool hasSubmatrix(int matrix[][COLS], int rows, int cols, int submat[][SUB_COLS], int subRows, int subCols)
{
    bool nHasMatrix = 0;
    int i = 0, j = 0, x = 0, y = 0;
    for( i = 0; i < rows - subRows + 1; i++)
    {
        for( j = 0; j < cols - subCols + 1; j++)
        {
            if(matrix[i][j] == submat[0][0])
            {
                for(x = 0; x < subRows; x++)
                {
                    for(y = 0; y < subCols; y++)
                    {
                        if(submat[x][y] == matrix[i+x][j+y])
                        {
                            nHasMatrix = true;
                        }
                        else
                        {
                            nHasMatrix = false;
                        }
                    }
                }
            }
            if(nHasMatrix == true)
            {
                return nHasMatrix;
            }
        }
    }
    
    return nHasMatrix;
}
