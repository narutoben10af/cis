//
//  main.c
//  Functions
//
//  Created by Lim Si Eian on 20/02/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <math.h>
#include <stdio.h>
#include "myFunctions.h"

//int square(int value); //prototype of function
//int cube(int value);

int main(void)
{
    printf("APPLE\n");
    int i = 4;
    int x = sqrt(i);
    printf("%d\n", x);
    int result = square(i);
    int resultCube = cube(i);
    printf("%d\n", result);
    printf("cube of %d is %d\n", i, resultCube);
    sayHello();
    f1();
    
    
    int a = 7, b = 14;
    printf("The value of a is %d\n", a);
    printf("The address of a is %lo\n", &a);
  

    int *ptrA = NULL, *ptrC = NULL;
    ptrA = &a;
    printf("The value of ptrA is %lo\n", ptrA);
    
    printf("the dereferenced value of ptrA is %d\n", *ptrA);
    
    //Point to A
    int *ptrB = &a;
    printf("The value of ptrB is %lo\n", ptrB);
    printf("the dereferenced value of ptrB is %d\n", *ptrB);

    *ptrB = 5; //change variable in a
    printf("The value of ptrB is %lo\n", ptrB);
    printf("the dereferenced value of ptrB is %d\n", *ptrB);
    
    //Point to B
    ptrB = &b;
    printf("The value of ptrB is %lo\n", ptrB);
    printf("the dereferenced value of ptrB is %d\n", *ptrB);

    *ptrB = 20;
    printf("The value of ptrB is %lo\n", ptrB);
    printf("the dereferenced value of ptrB is %d\n", *ptrB);

    int *p = ptrB; //p is also pointing to b now
    printf("The value of b is %lo\n", p);
    printf("the dereferenced value of b is %d\n", *p);

    int arr[10] = {1, 2, 3, 4};
    //arr is a pointer //arr[10] is the value
    
    int *ptr = arr;
    
    printf("the value of ptr[0] is %d\n", ptr[0]);
    
    //arr = ptr gives error , it is constant pointer cannot be changed
    
    
    
}




