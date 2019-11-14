//
//  Submit.c
//  Assignment07
//
//  Created by Lim Si Eian on 22/03/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

//Exercise01
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char * word);

int main(void)
{
    //Exercise01
    char word[] = "racecar";
    printf("%d", isPalindrome(word));
    char word2[] = "level";
    printf("%d", isPalindrome(word2));
    char word3[] = "hello";
    printf("%d", isPalindrome(word3));

    
}

bool isPalindrome(char * word)
{
    long nLen = strlen(word);
    for(int i = 0; i < (nLen)/2; i++)
    {
        if(word[i] != word[nLen-1-i])
        {
            return false;
        }
        
    }
    return true;
}



//Exercise02
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printLatinWord(char token[]);

int main(void)
{
    char strSentence[] = "Test This";
    char * tokenPtr = strtok(strSentence, " ");
    
    for(int i = 0; tokenPtr != NULL; i++)
    {
        printLatinWord(tokenPtr);
        tokenPtr = strtok(NULL, " ");
    }
    
}


void printLatinWord(char token[])
{
    long nLen = strlen(token);
    int i = 0, j = 0;
    char * strResult = (char *)malloc(sizeof(char)*(nLen + 2));
    
    for(i = 1, j = 0; i < nLen; i++, j++)
    {
        strResult[j] = token[i];
    }
    strResult[j] = token[0];
    strResult[j + 1] = 'a';
    strResult[j + 2] = 'y';
    
    printf("%s ", strResult);
    
    
    free(strResult);
    
}

//Exercise03
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COL 20

void printTh(char arr[][COL]);

int main(void)
{
    char arr[5][COL] = {"Hello", "tuition", "execution", "The", "Thesis"};
    //    char * array = (char *)malloc(sizeof(char) * 5);
    
    printTh(arr);
    
    
}

void printTh(char arr[][COL])
{
    //    char * array = (char *)malloc(sizeof(char) * 5);
    for(int i = 0; i < 5; i++)
    {
        char * temp = strstr(arr[i], "Th");
        if(temp != NULL)
        {
            printf("%s\n", arr[i]);
        }
    }
    
    
}


//Exercise04
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COL 20

void printIon(char arr[][COL]);

int main(void)
{
    
    char arr[5][20] = {"Hello", "tuition", "execution", "The", "Thesis"};
    
    printIon(arr);
    
    
}

void printIon(char arr[][COL])
{
    for(int i = 0; i < 5; i++)
    {
        if(strcmp(&arr[i][(strlen(arr[i]) - 4)], "tion") == 0)
        {
            printf("%s\n",  arr[i]);
        }
    }
    
}
