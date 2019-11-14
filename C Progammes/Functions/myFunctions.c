//
//  myFunctions.c
//  Functions
//
//  Created by Lim Si Eian on 20/02/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include "myFunctions.h"
int square(int value)
{
    return value * value;
}

int cube(int value)
{
    return square(value) * value; //or value * value * value
}

void sayHello(void)
{
    puts("Hello\n");
}

void f1(void)
{
    printf("Inside f1()....\n");
    printf("Calling f2()\n");
    
    f2();
    
    printf("Inside f1() after calling f2\n");
}

void f2(void)
{
    printf("Inside f2()....\n");
    printf("Calling f3()\n");
    
    f3();
    
    printf("Inside f2() after calling f3\n");

}

//if no return then write void

void f3(void)
{
    printf("Inside f3()....\n");
    printf("Calling f3()\n");
    return; //anything after return will be stopped
    
    printf("test"); 
}

bool isNegative(int number)
{
    if (number < 0)
    {
        return true;
    }
    
    return false;
}
