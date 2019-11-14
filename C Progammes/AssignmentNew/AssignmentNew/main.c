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
#define SIZE 64

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, const char * argv[])
{
    
    char sFile[SIZE];
    scanf("%s", sFile);
    printf("%s", sFile);
    
    FILE *fPtr;
    FILE *fPtr2;
    int nSlashes1, nLines, nSlashes2, bPrint1, nErrorStart, bPrint2, nCharacters, state, nSpaces;
    state = OUT;
    nLines = 1;
    nSlashes1=nSlashes2=bPrint1=bPrint2=nCharacters=nSpaces=0;
    if ((fPtr = fopen(sFile, "r")) == NULL)
    {
        puts("File could not be opened");
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
            bPrint1 = false;
            //            if (cCharacter == '/')
            //            {
            //                state = OPEN;
            //                continue;
            //            }
            //            else if (cCharacter == '*' && state == OPEN)
            //            {
            //                state = IN;
            //                continue;
            //            }
            //            else if (cCharacter == '*' && state == IN)
            //            {
            //                state = CLOSE;
            //            }
            //            else
            //            {
            //                state = OUT;
            //                fputc(cCharacter, fPtr2);
            //            }
            //            if(cCharacter == '/' && state == CLOSE)
            //            {
            //                state = OUT;
            //            }
            //            if(state == OUT)
            //            {
            //                printf("space");
            //            }
            //            else if (state == OUT)
            //            {
            //                fputc(cCharacter, fPtr2);
            //            }
            //            else
            //            {
            //                state = OUT;
            //                fputc(cCharacter, fPtr2);
            //            }
            //            switch (cCharacter)
            //            {
            //                case '/':
            //                    if(state == OUT)
            //                    {
            //                        state = OPEN;
            //                    }
            //                    else if(state == CLOSE)
            //                    {
            //                        state = OUT;
            //                    }
            //                    else if(state == IN)
            //                    {
            //                        state = IN;
            //                    }
            //                    else
            //                    {
            //                        state = OPEN;
            //                    }
            //                    break;
            //                case '*':
            //                    if(state == OPEN)
            //                    {
            //                        state = IN;
            //                    }
            //                    else if(state == IN)
            //                    {
            //                        state = CLOSE;
            //                    }
            //                    else
            //                    {
            //                        state = OUT;
            //                        fputc(cCharacter, fPtr2);
            //                    }
            //                    break;
            ////                case '*':
            ////                    if(state == IN)
            ////                    {
            ////                        state = CLOSE;
            ////                    }
            ////                    break;
            //
            //                default:
            //                    if(state == OUT )
            //                    {
            //                        fputc(cCharacter, fPtr2);
            //                    }
            //                    break;
            //            }
            switch (state)
            {
                case OUT:
                    if(cCharacter == '\n')
                    {
                        nLines++;
                    }
                    if(cCharacter == '/' && nSlashes2 != 1)
                    {
                        nSlashes1 = 1;
                        nSlashes2 = 0;
                        state = OPEN;
                        break;
                    }
                    //                    else if(cCharacter == '/' && nSlashes1 == 1)
                    //                    {
                    //                        nSlashes1 = 1;
                    //                        state = OPEN;
                    //                    }
                    else if(cCharacter != '/')
                    {
                        nSlashes1 = 0;
                        nSlashes2 = 0;
                    }
                    
                    if(isspace(cCharacter))
                    {
                        nSpaces++;
                        if(nSpaces == 1)
                        {
                            fputc(cCharacter, fPtr2);
                        }
                    }
                    //                    else if(cCharacter == '/')
                    //                    {
                    //
                    //                    }
                    else
                    {
                        fputc(cCharacter, fPtr2);
                    }
                    if(!isspace(cCharacter))
                    {
                        nSpaces = 0;
                    }
                    
                    if(nSlashes2 == 1)
                    {
                        if(cCharacter == '/')
                        {
                            if(nSlashes2 > 1)
                            {
                                bPrint1 = true;
                            }
                            nSlashes2++;
                        }
                        else if(cCharacter != '/')
                        {
                            nSlashes2 = 0;
                        }
                    }
                    if(bPrint1 == true)
                    {
                        fputc(cCharacter, fPtr2);
                    }
                    break;
                    
                case OPEN:
                    if(cCharacter == '\n')
                    {
                        nLines++;
                    }
                    if(cCharacter == '*')
                    {
                        state = IN;
                        nErrorStart = nLines;
                    }
                    else if (cCharacter == '/')
                    {
                        state = OPEN;
                        nSlashes1++;
                        if(nSlashes1 > 1)
                        {
                            fputc(cCharacter, fPtr2);
                        }
                    }
                    else
                    {
                        state = OUT;
                        fputc('/', fPtr2);
                        fputc(cCharacter, fPtr2);
                    }
                    break;
                    
                case IN:
                    if(cCharacter == '\n')
                    {
                        nLines++;
                    }
                    if(cCharacter == '*')
                    {
                        state = CLOSE;
                    }
                    else
                    {
                        state = IN;
                    }
                    break;
                    
                case CLOSE:
                    if(cCharacter == '\n')
                    {
                        nLines++;
                    }
                    if(cCharacter == '/')
                    {
                        state = OUT;
                        nSlashes2 = 1;
                    }
                    else if(cCharacter == '*')
                    {
                        state = CLOSE;
                    }
                    else
                    {
                        state = IN;
                    }
                    break;
                    
                    //                default:
                    //                    if(state == OUT )
                    //                    {
                    //                        fputc(cCharacter, fPtr2);
                    //                    }
                    //                    break;
            }
            
        }
        if(state == CLOSE || state == IN)
        {
            printf("error on line %d\n", nErrorStart);
        }
        
    }
    
    
    fclose(fPtr);
    fclose(fPtr2);
    
    printf("Line %d", nLines);
}

