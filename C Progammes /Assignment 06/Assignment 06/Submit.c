//
//  Submit.c
//  Assignment 06
//
//  Created by Lim Si Eian on 10/03/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

//Exercise 1
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void swap(int *a, int *b);

int main(void)
{
    int a = 2, b = 5;
    swap(&a, &b);
    printf("a is %d, b is %d", a, b);
    
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Exercise 2
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

double * getPointer(int size);
void computeAverage(double * arr, int size, double *fSum, double *fAverage);
int main(void)
{
    double * arr = getPointer(SIZE);
    double fSum = 0.0, fAverage = 0.0;
    computeAverage(arr, SIZE, &fSum, &fAverage);
    printf("Average is %f\n", fAverage);
    
}

double * getPointer(int size)
{
    double * arr = (double *)malloc(sizeof(double) * size);
    for(int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    
    return arr; //Don't free!
    
}

void computeAverage(double * arr, int size, double *fSum, double *fAverage)
{
    for(int i = 0; i < size; i++)
    {
        *fSum = *fSum + arr[i];
    }
    
    *fAverage = *fSum / size;
    
    
}

//Exercise03

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void findMaxAndPos(int * arrInt, int size, int *nMax, int *nMaxPos);
float * createArray(int nSize);

int main(void)
{
    
    int arrInt[SIZE] = {1, 3, 5, 7, 8, 12, 2, 4, 9, 10};
    int nMax = 0.0;
    int nMaxPos = 0;
    
    findMaxAndPos(arrInt, SIZE, &nMax, &nMaxPos);
    printf("nMax = %d, nMaxPos = %d \n", nMax, nMaxPos);
}



void findMaxAndPos(int * arrInt, int size, int *nMax, int *nMaxPos)
{
    for(int i = 0; i < size; i++)
    {
        if(*nMax < arrInt[i])
        {
            *nMax = arrInt[i];
            *nMaxPos = i;
        }
    }
    
}

//Exercise 04 & Exercise 05
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

float * createArray(int nSize);

int main(void)
{
    float * arrFloat = createArray(SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        printf("%f ", arrFloat[i]);
    }
}

float * createArray(int nSize)
{
    float * arrFloat = (float *)malloc(sizeof(float) * nSize);
    for(int i = 0; i < nSize; i++)
    {
        arrFloat[i] = i;
    }
    
    return arrFloat;
}

