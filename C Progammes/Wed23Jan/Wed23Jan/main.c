//
//  main.c
//  Wed23Jan
//
//  Created by Lim Si Eian on 23/01/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool b1 = true;
    bool b2 = false;
    
    if (b1 == true)
    {
        printf("b1 is true\n");
    }
    
    if (b2 == false)
    {
        printf("b2 is false\n");
    }
    
    int x = 5;

    if (8 == x)
    {
        printf("x is equal to 8");
    }
    
    if (x > 0)
    {
        printf("true is evaluated as %d\n", x > 3);
        printf("false is evaluated as %d\n", x > 8);
        {
            printf("True\n");
        }
        //0 is false, 1 or above is true
//        scanf("%d", &x);
//        printf("%d\n", x);
//        printf("x is definetly positive");
        
    }
    else if(x < 0)
    {
        printf("WOW\n");
    }
    else
    {
        printf("zzz\n");
    }
    
    //++x, int y = ++x; x=2, y = 2 -> preincrement
    //x++; int y = x++; x=2, y = 1 -> postincrement
    //--x; preincrement x=0 y=0
    //x--; postincrement y=1 x =0
    
    //boolean is bool in C
    //&& and
    // \\ or
    // ! not, !x is not x
    
    //Quiz 1
//    int nNum1, nNum2;
//    printf("insert two numbers:");
//    scanf("%d, %d", &nNum1, &nNum2);
//    float fResult;
//    fResult = (nNum1 + nNum2)/2.0;
//    printf("Average of %d and %d is %f", nNum1,nNum2, fResult);
//
    float fGrade = 90;
//    scanf("%f", &fGrade);
    int nGrade = 70;
    
    if(fGrade>=92.5 && fGrade <93)
    {
        nGrade = 93;
        if(fGrade>=69.5 && fGrade <70)
        {
            nGrade = 70;
        }
        if(nGrade >= 93)
        {
            puts("Get A on course\n");
        }
        else if (nGrade >=70)
        {
            printf("Passed the course\n");
        }
        else
        {
            printf("You failed the course\n");
        }


    }

    
    
    
    //puts for string
    //putc for character
    //gets
    //getc
    
    //Conditional operator
    //? :
    //before ? is if, after is then, then else
    //if ? then : else
    nGrade >= 60? puts("Passed"): puts("Failed");
    bool bPass = nGrade >=60? true: false;
    printf("%d\n", bPass);
    
    /* switch(status)
     {
     case0: compute taxes for single filers;
     break;
     case1: compute taxes for married file jointly.
     break;
     case2: compute taxes for married file separately;
     break;
     case 3: compute taxes for head of household;
     break;
     default:
     break;
     */
    
     //only integer or character chars allowed (place inside status)
    
    int nNum = -1;
    if (nNum <0)
    {
        nNum = -nNum;
    }
    
    printf("%d", nNum);
    switch (nNum)
    {
        case 0: //value == 0;
            puts("Zero");
            break;
        case 1: //value of nNum == 1;
            puts("One");
            break;
        case 2: //value == 2;
            puts("Two");
            break;
        default:
            puts("Large Number");
            break;
            
    }
    
    int day = 0;
    //0 and 6 sunday and sat
    //1 monday and 5 friday
    switch(day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        puts("Weekday");
            break;
    case 0:
    case 6:
        puts("Weekend");
            break;
    }
    
}
