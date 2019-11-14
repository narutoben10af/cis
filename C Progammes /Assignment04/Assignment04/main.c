//
//  main.c
//  Assignment04
//
//  Created by Lim Si Eian on 13/02/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Exercise01
int main(void)
{
    float fAverage = 0;
    int nArray[10] = {5, 24, 76, 1, 8, 53, 40, 7, 33, 10};
    int nSmallest = nArray[0], nLargest = nArray[0], nSmallestIndex = 0, nLargestIndex = 0, nTotal = 0;
    for(int i = 0; i < 10; i++)
    {
        if(nSmallest > nArray[i])
        {
            nSmallest = nArray[i];
        }
        if(nLargest < nArray[i])
        {
            nLargest = nArray[i];
        }
        if(nSmallest == nArray[i])
        {
            nSmallestIndex = i;
        }
        if(nLargest == nArray[i])
        {
            nLargestIndex = i;
        }
        nTotal = nTotal + nArray[i];
    }
    
    fAverage = (float)nTotal/10;
    
    printf("Smallest is %d at position %d, Largest is %d at position %d, Average is %f \n", nSmallest, nSmallestIndex, nLargest, nLargestIndex, fAverage);
    
    
    //Exercise02

    int nArray2[2][10] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9} };
    srand(time(NULL));
    int nRand = 0;
    for(int i = 0; i < 100; i++)
    {
        nRand = rand() % 10;
        
        for(int j = 0; j < 10; j++)
        {
            if(nArray2[0][j] == nRand)
            {
                nArray2[1][j] = nArray2[1][j] + 1;
            }
        }
    }
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d\t", nArray2[i][j]);
        }
        printf(" \n");
    }

    
    
    //Exercise03
    
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            printf("%d \t", (i*3) + (j-3));
        }
        printf("\n");
    }

}
