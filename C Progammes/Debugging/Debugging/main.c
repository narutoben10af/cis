//
//  main.c
//  Debugging
//
//  Created by Lim Si Eian on 27/03/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 10

int triple(int value);
void fillArray(int arr[], int size);
int findMin(int * arr, int size);
int findMax(int * arr, int size);

int main(void)
{
    int a = 2;
//    printf("Hello");
    int b = 9;
    
    int c = 0;
    
    c = a * b;
    
    int d = triple(a);
    
    for(int i = 0; i < 5; i++)
    {
        a = i;
        c += i;
    }
    
    int arr[SIZE];
    int debugSize = SIZE;
    fillArray(arr, debugSize);
    printf("Max = %d\n", findMax(arr, debugSize));
    printf("Min = %d\n", findMin(arr, debugSize));

    
//    printf("Hello");
}


int triple(int value)
{
    int result = 0;
    result = value * 3;
    
    return result;
}

void fillArray(int arr[], int size)
{
    srand(time(NULL));
    
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20 + 1;
    }
}



int findMin(int * arr, int size)
{
    int nMin = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(nMin > arr[i])
        {
            nMin = arr[i];
        }
    }
    
    return nMin;
}
    
    
int findMax(int * arr, int size)
{
    int nMax = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(nMax < arr[i])
        {
            nMax = arr[i];
        }
    }
    
    return nMax;
}

