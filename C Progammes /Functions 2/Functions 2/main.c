//
//  main.c
//  Functions 2
//
//  Created by Lim Si Eian on 25/02/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#define SIZE 5
#define ROWS 4
#define COLS 3

int factorial(int n);
int fibonacci(int n);
void tower(int disk, char start, char destination, char aux);
void swap(int *a, int *b);
void printArray(int arr[], int size);
void printMatrix(int matrix[][COLS], int rows, int cols);
void doubleArray(int arr[], int size);


int main(void)
{
    int fact = factorial(5);
    int fib = fibonacci(8);
    printf("%d\n", fact);
    printf("%d\n", fib);
    int x = 5, y = 3;
    swap(&x, &y);
    printf("x: %d y: %d \n", x, y);
    int arr[SIZE] = {1, 2, 3, 4, 5};
    printArray(arr, SIZE);
    int mat[ROWS][COLS] = { {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9},
                            {10, 11, 12}
                            };
    printMatrix(mat, ROWS, COLS);
    doubleArray(arr, SIZE);
    printArray(arr, SIZE); 
    
}


int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }

    
    return n * factorial(n-1);
    
}

int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void tower(int n, char start, char destination, char aux)
{
    tower(n - 1, start, aux, destination);
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n", start, destination);
    }
    tower(n-1, start, aux, destination);
    printf("Move disk from %c to %c\n", start, destination);
    tower(n-1, aux, destination, start);
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printArray(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("%d\n", arr[size - 1]);
    // OR
    //int i = 0;
//    for(int i = 0; i < size - 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    printf("%d\n", arr[i]);

    
    
}

void printMatrix(int matrix[][COLS], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        puts("");
    }
}


void doubleArray(int arr[], int size)
{
    for( int i = 0; i < size; i ++)
    {
        arr[i] = arr[i] * 2;
    }
    printf("\n");
}

//fib(0) = 0
// fib(1) 1
// fib(2) = fib(1) + fib(0);
//fib(3) = fib(2) + fib(1);
//fib(n) = fib(n-1) + fib(n-2);

