//
//  main.c
//  Ks
//
//  Created by Lim Si Eian on 25/07/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int setAnswer(char * c);

int main(void)
{
    
    int nCount =1;
    nCount *=5;
    printf("nCount = %d", nCount);

    ///YOUR ORDER STUFF
    ///THEN BELOW
    int i = 0;
    int g = 0;
    int nNum = 0;
    char c = 'n';
    int * nNumPtr = (int*) malloc(sizeof(int) * i);
    //    printf("Do you want to continue? Y for Yes, N for No \n");
//    scanf("%c", &c);
//    if(c == 'y')
//    {
//        i = 1;
//    }
    setAnswer(&c);
if(g == 0)
    {
        
    
        while(c != 'N')
        {
        scanf(" %d", nNumPtr);
        printf("%d\n", *nNumPtr);
        ///your order stuff again
//        printf("Do you want to continue? 1 for Yes 0 for No \n");
//        scanf("%c", &c);
//        if(c == 'y')
//        {
//            i = 1;
//        }
        setAnswer(&c);

        getchar();
        }
    }
else
    {
    printf("Thanks");

        
    }
    printf("Hello");
}


int setAnswer(char * c)
    {
        printf("Do you want to continue? Y for Yes N for No \n");
        char d = 0;
        scanf(" %c", &d);
        if(d == 'n')
        {
            d = 'N';
        }
        if(d == 'y')
        {
            d = 'Y';
        }

        *c = d;
        return *c;
    }
    

