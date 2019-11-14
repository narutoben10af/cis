//
//  main.c
//  Debugging Practice
//
//  Created by Lim Si Eian on 29/03/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

bool checkprime(int a_value);

int main(void)
{
    int nNum = 0;
    int nCount = 1;
    printf("Insert Number");
    scanf("%d", &nNum);
    

    for(int i = 2; i< nNum; i++)
    {
        if(nNum % i == 0)
        {
            nCount = 0;
        }
    }
    
    if(nNum == 1)
    {
        nCount = 0;
    }

    if(nCount == 0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    
    
    if(nNum < 0)
    {
        nNum = -nNum;
    }
    
    int nFactor = 1;
    int nFactor2 = nNum;
    printf("Factor %d, ", nFactor);

    for(int i = 2; i < nNum; i++)
    {
        if(nNum % i == 0)
        {
            nFactor = i;
            printf("%d, ", nFactor);
        }
            
    }
    
    printf("%d ", nFactor2);
    
    int nVal1, nVal2;
    scanf("%d %d", &nVal1, &nVal2);
    for(int i = nVal1; i <= nVal2; i++)
    {
        if(checkprime(i) == true)
        {
            printf("prime number: %d ", i);
        }
    }
    
    nCount = 0;
    puts("hello ");
    scanf("%d", &nNum);
    while(nNum /10 > 0)
    {
        nCount++;
        nNum = nNum /10;
    }
    printf(" Number of digits %d", nCount + 1);
    
    
    
}


bool checkprime(int a_value)
{
//    int nNum = 0;
    int nCount = 1;
    
    for(int i = 2; i< a_value; i++)
    {
        if(a_value % i == 0)
        {
            nCount = 0;
        }
    }
    
    if(a_value == 1)
    {
        return 0;
    }
    
    if(nCount == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }


}
