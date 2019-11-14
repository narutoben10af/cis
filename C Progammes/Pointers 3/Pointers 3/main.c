//
//  main.c
//  Pointers 3
//
//  Created by Lim Si Eian on 08/03/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
void printCharacters(const char *sPtr);

int main(void)
{
 //const qualifier
    int x = 7;
    int arr[6] = {0, 1, 2, 3, 4, 5}; //arr is a pointer that cannot be changed
    int * p = arr; //p is equal to arr[0] position like 5000 or sth
    p++; // skip to next element in array  -> arr[1], ONLY POSSIBLE FOR ARRAYS
    p = p + 1; //same as above as alternative notation OR p +=1
    printf("%d", *p);
    //*(p + 3) is p + 3 in the array or arr[2 + 3] in this case
    x = 5;
    const int a = 8; //a will always be 8, cannot be modified
    
    char string [] = "prints characters of a string";
    
    double real [22];
    
    sizeof(real) / sizeof(real[0]);
    
    
    const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    //array of strings

    
    //vPtr = 3000, vPtr2 = 3008, x = vPtr2 - vPtr is 2 not 8
    
    // can use less than or greater than (comparison and equality operators) for pointers ONLY INSIDE arrays
    //Usually used to determine if a pointer is NULL.
}

//
//void printCharacters(const char *sPtr)
//{
//    for(; *sPtr !)
//}


//copy value of s1 to s2
void copy(char * const s1, const char * const s2)
{
    //loop through strings
    for (size_t i = 0; (s1[i] = s2[i]) != '\0'; ++i)
    {
        ; //do nth in body
    }
}

void copy2(char *s1 , const char *s2)
{
    for(; (*s1 = *s2) != '\0'; ++s1, ++s2)
    {
        ; //do nth in body
    }
}
