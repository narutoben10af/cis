//
//  main.c
//  Assignment 2 Low Level
//
//  Created by Lim Si Eian on 23/09/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//#include <ctype.h>
#define OUT 0
#define OPEN 1
#define IN 2
#define CLOSE 3

#include <stdio.h>
#include <ctype.h>



int main(int argc, const char * argv[])
{
    FILE *fPtr;
    FILE *fPtr2;
    int nLines, nCharacters, state;
    state = OUT;
    nLines=nCharacters=0;
    if ((fPtr = fopen("file.c", "r")) == NULL)
    {
        puts("File could not be opened");
    }
    else
    {
        fprintf(fPtr, "hello how are you /* hello */ hello hello" );
    }
    if ((fPtr2 = fopen("file2.c", "w")) == NULL)
    {
        puts("File could not be opened");
    }
    
    else
    {
        while(!feof(fPtr))
        {
            char cCharacter = fgetc(fPtr);
            if (cCharacter == '/')
            {
                state = OPEN;
            }
            else
            {
                state = OUT;
                printf("%c", cCharacter);
            }
            if (cCharacter == '*' && state == OPEN)
            {
                state = IN;
            }
            else if (cCharacter == '/')
            {
                state = OPEN;
            }
            else
            {
                state = OUT;
            }
            if (cCharacter == '*' && state == IN)
            {
                state = CLOSE;
            }
            else
            {
                state = IN;
            }
            if(cCharacter == '/' && state == CLOSE)
            {
                state = OUT;
            }
            if(state == OUT && cCharacter == ' ')
            {
                printf("space");
            }
            else if (state == OUT)
            {
                printf("%c", cCharacter);
            }
        }
    }
    
    
    fclose(fPtr);
    fclose(fPtr2);
    
}

