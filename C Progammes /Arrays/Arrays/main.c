//
//  main.c
//  Arrays
//
//  Created by Lim Si Eian on 06/02/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#define SIZE 5 //define  before hand, not a variable, determines and fixed the value in it before hand
#define HMM 'L'
#define H 'O'
#define ROWS 2
#define COLS 3
#define STUDENTS 3
#define EXAMS 4
int main(void)
{
    printf("size is %d\n", SIZE);
    printf("hmm is %c%c%c\n", HMM, H, HMM);
    //cannot assign SIZE = 5 or anything as it is preprocessor directive
    int arrNum5[SIZE] = {0};
    
    
    
    int arrNum [4] = {0, 1, 4, 5};
    printf("%d\n", arrNum[2]);
    printf("%s%13s\n", "Element", "Value");
    int i = 0;
    for(i = 0; i < 4; i++)
    {
        printf("%7d%13d\n",i, arrNum[i]);
    }
    
    int arrNum2 [10] = {0};
    arrNum2[9] = 88;
    printf("%d ", arrNum2[9]);
    
    int arrNum3[5];
    for(i = 0; i < 5; i++)
    {
        arrNum3[i] = i*2;
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arrNum3[i]);
    }
    
    int arrNum4[] = {1, 2, 3, 4, 5, 6, 1}; //automatically makes array of the size u make
    
    
    int n[SIZE] = {32, 27, 64, 18, 95};
    int nSum = 0;
    
    for (int i = 0; i < SIZE; i++)
    {
        nSum = nSum + n[i];
    }
    
    printf("The sum is %d", nSum);
    
    //increase each element by 1
    
    for (i = 0; i < SIZE; i++)
    {
        n[i]++;
        printf("%d ", n[i]);
    }
    
    
    int arrNew[SIZE] = {0};
    int nNum = 0;
    
    for(int i = 0; i < SIZE; i++)
    {
        printf("Insert value of element %d ", i+1);
        scanf(" %d", &nNum);
        arrNew[i] = nNum;
    }
    
    for (i = 0; i < SIZE; i++)
    {
        n[i]++;
        printf("%d ", arrNew[i]);
    }
    
    int nSizeOfSum = sizeof(nSum);
    printf("Size of Sum is %d", nSizeOfSum);
    int nSizeofInt = sizeof(int);
    printf("Size of Int is %d", nSizeofInt);
    
    //to determine length of array
    int nLen = sizeof(arrNew) /sizeof(arrNew[0]);
    printf("Length of array is %d", nLen);
    int nMin = arrNew[0];
    int nMax = arrNew[0];
    for(int i = 1; i < nLen; i++)
    {
        if(nMin > arrNew[i])
        {
            nMin = arrNew[i];
        }
        if(nMax < arrNew[i])
        {
            nMax = arrNew[i];
        }
    }
    
    printf("Max is %d, Min is %d \n", nMax, nMin);

//
//    for (i = 0; i < SIZE; i++)
//    {
//    }
//
    
    
    //Strings using arrays
    
    char string[] = "Hello";
    for(i = 0; i < 5; i++)
    {
        printf("%c", string[i]);
    }
    
    
    //scanf("%s", strValue); //No &
    char strValue[20];
    char strReverse[20];
    scanf("%s", strValue);
    printf(" %s ", strValue);
    int nCount = 0;
    while(strValue[nCount] != '\0')
    {
        nCount++;
    }
    printf("The nCount is %d", nCount);
    
    for(i = 0; i < nCount; i++)
    {
        printf("%c", strValue[nCount - 1 - i]);
//       strReverse[i] = strValue[nCount - 1 - i];
    }
//    printf(" The reverse is %s\n", strReverse);

    //OR
    for(i = nCount - 1; i >= 0; i--)
    {
        printf("%c", strValue[i]);
        //       strReverse[i] = strValue[nCount - 1 - i];
    }
    
    int counter = 1;
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            printf("%d\t", counter);
            counter++;
        }
        puts("");
    }
    
    int arr[3][4]; //[row][column]
    for (i = 0; i < 3; i++)
    {
        printf("Hello");
        for (int j = 0; j < 4; j++)
        {
            printf("%d", counter);
        }
        puts("");
    }
    
    int arr2[3][2] =  {{1, 2},
                        {3, 5},
                        {2, 0}};
    
    int arr3[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    
    arr3[2][1] = 9;
    for(int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            printf("%d\t", arr3[j][i]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    
    int nTotal = 0;
    int nAverage = 0;
    int scores[STUDENTS][EXAMS] =
    {
        {93, 84, 99, 100},
        {100, 50, 40, 30},
        {20, 89, 93, 95}
    };
    
    for(int i = 0; i < STUDENTS; i++)
    {
        for(int j = 0; j < EXAMS; j++)
        {
            nTotal = nTotal + scores[STUDENTS][EXAMS];
            nAverage = nTotal/4;
        }
        
    }
    
//    for(int k = 0; k < (ROWS * COLS) ; k++)
//    {
//        printf("%d", arr[k]);
//    }
    
    }
