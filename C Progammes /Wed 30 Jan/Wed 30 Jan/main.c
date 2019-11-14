//
//  main.c
//  Wed 30 Jan
//
//  Created by Lim Si Eian on 30/01/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>

int main()
{
//    int nProduct = 3;
//    while (nProduct <= 100)
//    {
//        printf("%d\n", nProduct);
//        nProduct = 3 * nProduct;
//    }
//
    unsigned int nStudents = 0;
    int nGrade = 0, nSum = 0;
    float fAverage = 0.0;
    
    printf("Enter grade %d or -1 to end: ", nStudents + 1);
    scanf("%d", &nGrade);
    
    while(nGrade != -1)
    {
        nSum = nSum + nGrade;
        nStudents++;
        
        printf("Enter grade %d or -1 to end: ", nStudents + 1);
        scanf("%d", &nGrade);

    }
    
    if(nStudents != 0)
    {
        fAverage = (float)(nSum) / nStudents;
        printf("%f, %d, %d", fAverage, nSum, nStudents);
    }
    
    int nNum = 0;
    
    while(nNum < 15)
    {
        nNum++;
        printf("Number: %d \n", nNum);
    }
    
    nSum = 0;
    nNum = 0;
    
    while(nNum < 10)
    {
        nNum++;
        nSum = nNum + nSum;
        printf("Total: %d", nSum);
    }
    
    printf("New line \n");
    
    nNum = 5;
    
    while(nNum < 30 )
    {
        printf("%d ", nNum);
        nNum += 4;
    }
    
    
    // For loops
    // DO NOT USE FLOATS FOR COMPARISON LIKE x == y OR on for/while loops, ONLY Integer
    for (int i = 10, j = 2; i > 0 && j < 500; i--, j*=2)
    {
        printf("i = %d, j = %d \n", i, j);
    }
    
    
    nSum = 0;
    for (int i = 3; i < 100; i+=3)
    {
        nSum = nSum + i;
    }

    printf("%d", nSum);
    
    printf("\n");
    //Do While
    int i = 0 ;
    while (i < 10)
    {
        printf("%d", i);
        if(i == 5)
        {
            break;
        }
        if(i == 4)
        {
            i = 8;
            continue;
        }

        i++;

    }
    
    
    printf("\n");


    i = 0;
    
    //do while will execute at least once as it starts with do then checks the condition at while.
    do
    {
        printf("%d", i);
        i++;
    }
        while (i < 10);
    
}

