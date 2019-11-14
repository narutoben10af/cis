//
//  main.c
//  String Exercises
//
//  Created by Lim Si Eian on 15/03/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 80

long myStrLen(char *);

int main(int argc, const char * argv[])
{
    //Exercise 01
    //let user input 2 strings
    char strInput1[SIZE]; //buffer
    char strInput2[SIZE]; //buffer
    
    puts("Enter line of text: ");
    fgets(strInput1, SIZE, stdin);
    
    puts(strInput1);
    
    puts("Enter another line of text: ");
    fgets(strInput2, SIZE, stdin);
    
    puts(strInput2);
    
    long nLen1 = strlen(strInput1);
    long nLen2 = strlen(strInput2);
    long nLen3 = nLen1 + nLen2 + 1;

    puts("RESULTS BELOW");
    char * strArray = (char *)malloc(sizeof(char) * (nLen3));
    strcpy(strArray, strInput1);
    printf("%s", strArray);
    strcat(strArray, strInput2);
    
    printf("%s\n", strArray);

    int nLen5 = myStrLen(strArray);

    printf("%lo", nLen5);
}

long myStrLen(char * arrSentence)
{
    long nLen = 0;
    while(arrSentence[nLen] != '\0')
    {
        nLen++;
    }
    return nLen;
}


