//
//  main.c
//  Pointers and Functions
//
//  Created by Lim Si Eian on 01/03/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define ROWS 4
#define COLS 3


void swap(int *a, int *b);
int * getPointer(int size);
void circleProperties(int nRadius, double *nArea, double *nPerimeter);
void printArray(int ** arr, int rows, int cols);
void allocateArrays(int ** arr1, int ** arr2, int size);


int main(void)
{
    int a = 8;
    int b = 5;
    int * p = NULL;
    int * q = NULL;
    p = &a;
    q = &b;
    printf("%d\n", *p);
    *p = 3;
    printf("%d\n", *p);
    printf("%d\n", a);

    swap(p, q);
    printf("%d\n", a);
    printf("%d\n", b);
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    
    
    
    
//    int n = 0;
//    scanf(" %d\n ", &n);
//
//    int arr[n];
//
//    printf(" %d\n", arr[3]);
    
    int *ptr = NULL;
    ptr = (int*)malloc(sizeof(int));
    
    *ptr = 8;
    printf("The value of the memory is %d\n", *ptr);

    free(ptr);
    
    
    
    ptr = (int*)malloc(sizeof(int) * SIZE);
    ptr[0] = 12;
    ptr[1] = 3;
    ptr[2] = 6;
    ptr[3] = 1;
    ptr[4] = 5;
    
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", ptr[i]);
    }
    
    free(ptr);
    
    int nSize = 0;
    printf(" Input size of the array: ");
    scanf(" %d\n ", &nSize);
    ptr = getPointer(nSize);
    
    for(int i = 0; i< nSize; i++)
    {
        printf(" %d ", ptr[i]);
    }
    
    free(ptr);
    
    
    int x = 3, y = 1;
    swap(&x, &y);
    printf("x is %d, y is %d\n", x, y);
    
    int nRadius = 0;
    double nPerimeter = 0.0, nArea = 0.0;
    printf("Input radius: ");
    scanf("%d\n", &nRadius);
    circleProperties(nRadius, &nPerimeter, &nArea);
    
    printf("Area is %f, Perimeter is %f", nArea,  nPerimeter);
    
    //Allocate Rows
    int ** arr = (int **)malloc(sizeof(int) * ROWS);
    
    //Allocate Columns
    for(int i = 0; i < ROWS; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * COLS);
        
         
    }

    int counter = 0;
    
    //Fill with consecutive numbers
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            arr[i][j] = ++counter;
        }
    }
    
    //Print array
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            printf("%d\n", arr[i][j]);
        }
        
        printf("\n");
    }
    printf("\n");
    
    printArray(arr, ROWS, COLS);

    
    //Free columns
    for(int i = 0; i < ROWS; i++)
    {
        free(arr[i]);
    }
    //Free Rows
    free(arr);
    
    
    arr = NULL;
    int * arr1 = NULL, * arr2 = NULL;
    allocateArrays(&arr1, &arr2, SIZE);
    
    free(arr1);
    free(arr2);

}


//void swap(int *a, int *b)
//{
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}



//THIS IS WRONG
// NEVER RETURN THE ADDRESS OF A LOCAL VARIABLE
//int * getPointer()
//{
//    int arr[SIZE] = {2, 4, 6, 8, 10};
//    return arr; // NEVER RETURN THE ADDRESS OF A LOCAL VARIABLE
//}
// INI SALAH JANGAN BUAT YA


// CORRECT WAY

int * getPointer(int size)
{
    int * arr = (int *)malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    
    return arr; //Don't free!
    
}



void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void circleProperties(int nRadius, double *nArea, double *nPerimeter)
{
    double pi = 3.142;
    *nArea = pi * (nRadius * nRadius);
    *nPerimeter = 2 * pi * nRadius;
}


void printArray(int ** arr, int rows, int cols)
{
    for(int i = 0; i < rows; i ++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        
        printf("\n");
    }
}

void allocateArrays(int ** arr1, int ** arr2, int size)
{
    *arr1 = (int *)malloc(sizeof(int) * size);
    *arr2 = (int *)malloc(sizeof(int) * size);
    
    for(int i = 0; i < size; i++)
    {
        (*arr1)[i] = (*arr2)[i] = i + 1;
    }
    
}



void createArrays(int ** arr1, int ** arr2)
{
    *arr1 = (int *)malloc(sizeof(...)); //points to address
}
