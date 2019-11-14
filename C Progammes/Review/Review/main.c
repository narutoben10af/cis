//
//  main.c
//  Review
//
//  Created by Lim Si Eian on 15/02/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#define ever ;;

int main(void)
{
    printf("\"");
    
    int nVal1 = 0;
    scanf("%d", &nVal1);
    printf("%d", nVal1);
//no need & in char array
    //i%2 == n  - 1 is odd, 0 is even
    
    // K = ++i     , i = 6, k = 6
    // m = j++;    , m = 5; j = 6
    
    // 8 bits signed -128 -> 127
    // unsigned is 0 -> 255
    
    
//    for(ever)
//    {
//        printf("LOL");
//    }
    if(1)
    {
        printf("hello");
    }
    //5 + rand()%4 return 5 6 7 8
    // as rand() % 4 return 0 1 2 3 4 
    
    
    int test = 0;
    scanf("%d", &test);
    
    switch (test) {
        case 90:
            printf("Hello");
            break;
            
        default:
            break;
    }
    
    
    
    
    int arrNum[5] = { 4, 5, 3, 2, 9 };
    int temp = 0;
    int z = arrNum[0];
    for(z = arrNum[0]; z < 5; z++)
    {
        for(int i = 0; i < 5; i++)
        {
        if(arrNum[z] > arrNum[i])
        {
            temp = arrNum[i];
            arrNum[i] = arrNum[z];
            arrNum[z] = temp;
        }
//        if(arrNum[4] < arrNum[i])
//        {
//            temp = arrNum[i];
//            arrNum[i] = arrNum[0];
//            arrNum[0] = temp;
//        }
        }
        
    }
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d", arrNum[i]);
    }
    
}
