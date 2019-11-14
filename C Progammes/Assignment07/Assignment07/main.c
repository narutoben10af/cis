//
//  main.c
//  Assignment07
//
//  Created by Lim Si Eian on 18/03/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define COL 20

bool isPalindrome(char * word);
void printTh(char arr[][20]);
void printIon(char arr[][20]);
void printLatinWord(char token[]);

int main(void)
{
//Exercise01
    char word[] = "racecar";
    printf("%d", isPalindrome(word));
    char word2[] = "level";
    printf("%d", isPalindrome(word2));
    char word3[] = "hello";
    printf("%d", isPalindrome(word3));
    
    char strSentence[] = "Testing hello";
    char * tokenPtr = strtok(strSentence, " ");
    
    for(int i = 0; tokenPtr != NULL; i++)
    {
        printLatinWord(tokenPtr);
        tokenPtr = strtok(NULL, " ");
    }


    char string[] = "hello";
    char string2[] = "tuition";
    char string3[] = "execution";
    char string4[] = "The";
    char string5[] = "Thesis";

    

    
    char arr[5][20] = {"Hello", "tuition", "execution", "The", "Thesis"};
//    char * array = (char *)malloc(sizeof(char) * 5);

    printTh(arr);

    printIon(arr);


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



//Exercise 02
//jump
//become umpjay
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
void printTh(char arr[][20])
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
void printIon(char arr[][COL])
{
//    char arr2[4] = {"t", "i", "o", "n"};
//    int nLen = strlen(arr[1]);
//    int nLen2 = strlen(arr[2]);
//    int nLen3 = strlen(arr[3]);
    
    for(int i = 0; i < 5; i++)
    {
        if(strcmp(&arr[i][(strlen(arr[i]) - 4)], "tion") == 0)
        {
            printf("%s\n",  arr[i]);
        }
//        for(j= 20-4; j < 20; j++)
//        {
////            if(strcmp(arr[i][j], arr2[])) == 0);
//        }
    }
    
}
