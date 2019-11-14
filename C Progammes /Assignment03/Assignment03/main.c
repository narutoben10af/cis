//
//  main.c
//  Assignment03
//
//  Created by Lim Si Eian on 04/02/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    
    int nGrade = 0;
    float fAverage = 0;
    char cAnswer;
    bool bAnswer;
    int nCount = 1;
    int nTotal = 0;
    char cLetterGrade;
    puts("Input grade");
    scanf("%d", &nGrade);


    while(true)
    {
        nTotal = nTotal + nGrade;
        printf("Input another grade?");
        scanf(" %c", &cAnswer);
        if(cAnswer == 'y')
        {
            bAnswer = true;
        }
        else
        {
            bAnswer = false;
            fAverage = (float)nTotal / nCount;
            if (fAverage >= 90)
            {
                cLetterGrade = 'A';
            }
            else if (fAverage >= 80)
            {
                cLetterGrade = 'B';
            }
            else if (fAverage >= 70)
            {
                cLetterGrade = 'C';
            }
            else if (fAverage >= 60)
            {
                cLetterGrade = 'D';
            }
            else
            {
                cLetterGrade = 'F';
            }
            printf("The average grade is %f, (%c)", fAverage, cLetterGrade);
            break;

        }
        puts("Input grade:");
        scanf("%d", &nGrade);
        printf("%d\n", nGrade);
        nCount++;
    
        //Exercise 02
        
    int nGrade = 0;
    float fAverage = 0;
    char repeat = '\0';
    bool bAnswer;
    int nCount = 1;
    int nTotal = 0;
    char cLetterGrade;
    puts("Input grade");
    scanf("%d", &nGrade);


    while(repeat != 'n')
    {
        nTotal = nTotal + nGrade;
        printf("Input another grade?");
        scanf(" %c", &repeat);
        if(repeat == 'n')
        {
            bAnswer = false;
            fAverage = (float)nTotal / nCount;
            if (fAverage >= 90)
            {
                cLetterGrade = 'A';
            }
            else if (fAverage >= 80)
            {
                cLetterGrade = 'B';
            }
            else if (fAverage >= 70)
            {
                cLetterGrade = 'C';
            }
            else if (fAverage >= 60)
            {
                cLetterGrade = 'D';
            }
            else
            {
                cLetterGrade = 'F';
            }
            printf("The average grade is %f, (%c)", fAverage, cLetterGrade);
            break;
        }

        puts("Input grade:");
        scanf("%d", &nGrade);
        printf("%d\n", nGrade);
        nCount++;

    }
    
    //Exercise03
    int nNum = 0, nCount = 0, nMax = 0;
    for(nCount = 0; nCount <10; nCount++)
    {
        puts("Input a positive integer");
        scanf("%d", &nNum);
        if(nNum <0)
        {
            nNum = -nNum;
        }
        if(nMax < nNum)
        {
            nMax = nNum;
        }
    }
    printf("nMax is %d", nMax);

    //Exercise 04
    int nVal = 0, nSum = 0, nSquare = 0, nCube = 0, nSumSquare = 0, nSumCube = 0, nInput = 0;
    printf("input a natural number:");
    scanf("%d", &nInput);
    for(nVal = 0; nVal <= nInput; nVal++)
    {
        nSum = nSum + nVal;
        nSquare = nVal * nVal;
        nSumSquare = nSumSquare + nSquare;
        nCube = nVal * nSquare;
        nSumCube = nSumCube + nCube;
    }
    printf("Sum is %d, Sum of Squares is %d, Sum of Cubes is %d", nSum, nSumSquare, nSumCube);

}
