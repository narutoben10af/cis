//
//  main.c
//  Strings
//
//  Created by Lim Si Eian on 11/03/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 80
#define SIZE2 4

int isdigit(int c);


int main(void)
{
    char color[] = "blue";
    const char *colorPtr = "blue";
    //both pointers, but for array we can assign and modify element by element
    //const is fixed
    // \0 not counted in the length of string
    
    //when u input strings, dont need &
    char word[20];
    printf("%s", "Input");
    scanf("%19s", word);
    getchar();
    printf("%s", word);
    
    
    int test = isdigit(word);
    printf("%d", test);
    int test2 = isascii(word);
    printf("%d\n", test2);

    int x = putchar('A'); //prints the character inside put char and returns integer into x .
    printf("%d\n", x);
    printf("%c\n", x);
    
    int a = 5;
    printf("The value of a is %d", a);
//    sprintf("%s", "The value of a is stored in an array %d", a);
    
    
    char sentence[SIZE]; //buffer
    
    puts("Enter line of text:");
    //use fgets to read of text
    fgets(sentence, SIZE, stdin);
    //fgets accepts space unlike scanf
    
    puts(sentence);
    
    
    int i = 0; // counter
    int c = 0; //variable to hold char input by user
    
    puts("Enter line of text:");

    //use get char to read each character
    while((i < SIZE - 1) && (c = getchar()) != '\n')
    {
        sentence[i++] = c; //assignment occurs before i++ increments
    }
    
    
    sentence[i] = '\0';//terminate string
    
    i = 10;
    double z = 30;
    puts("Enter integer and double");
    scanf("%d%lf", &i, &z);
    puts(sentence);
    
    char s[SIZE];
    sprintf(s, "Hello %6d %7.2f", i, z);
    
    printf("%s\n%s\n","The formatted outpute is stored in array s is: ", s);

    
    //stores input into array
    char g[] = "31298 87.375"; //use space to tell there is two values
    int j;
    double k;
    sscanf(g, "%d%lf", &j, &k);
    printf("%s\n%s%6d\n%s%8.3f\n", "The values stored in character array s are:", "integer: ", j, "double: ", k);
    
    char buffer[256];
    
    strcat(buffer, "hello");
    strcat(buffer, "world");
    printf("%s", buffer);
    strcpy(buffer, g);
    printf("%s", buffer);
    
    
    char s1[20] = "Happy"; //initialize char array x
    char s2[] = "New Year"; //create char array y
    char s3[20]; //create chr array z
    
    //copy
//    printf("s", strcpy(s1, s2));
    
    strcat(s1, s2);
    printf("%s", s1);

    int nVal = strcmp(s1, s2); //if s1 and s2 equal = 0, if s1< s2, negative value, s1>s2, positive value)
    printf("%d\n", nVal);
    
    char s10[] = "Computes";
    char s20[] = "Computer";
    char s30[] = "Computer";
    

    long nLen = strlen(s1); //nLen does not include \0 so when we use must add +1 like for loops and stuff
    printf("%lo\n", nLen);

    s1[13] = 'b';
    printf("%s\n", s1);
    int nVal2 = strcmp(s10, s20);
    printf("%d\n", nVal2);
    int nVal3 = strcmp(s20, s30);
    printf("%d\n", nVal3);
    
    char s11[] = "Computing";
    char s15[] = "put";
    char s12[] = "as";
    const char * res = strstr(s11, s15);
    printf("%s", res);

    const char * res2 = strstr(s11, s12);
    if(res2 == NULL)
    {
        printf("%s", "Substring not found");
    }
    else
    {
        printf("%s\n", res2);
    }
    
    char string[] = "This is a sentence with 7 tokens";
    char * tokenPtr = strtok(string, " "); //begin tokenizing sentence // must be string not NULL
    char arr[100];
    int nNum = 0;
    //continue tokenizing until tokenPtr becoems Null
    while (tokenPtr != NULL)
    {
        arr[nNum] =  *strcpy(&arr[nNum], tokenPtr);
        printf("%s\n", &arr[nNum]);
        tokenPtr = strtok(NULL, " "); //must be NULL not string //gets next token
        nNum++;
    }
    
//    for(i = 0; i < 8; i++)
//    {
//        printf(arr[i]);
//    }
//    char * tokenPtr2 = strtok(string, "en"); //begin tokenizing sentence // must be string not NULL
//    while (tokenPtr2 != NULL)
//    {
//        printf("%s\n", tokenPtr);
//        tokenPtr2 = strtok(NULL, "en"); //must be NULL not string //gets next token
//    }

    
//    printf("%s", string);

    //atoi(<#const char *#>)
    
    char number[] = "12";
    
    int n1 = atoi(number);
    
    printf("The number and its double are %d and %d\n", n1, n1 * 2);
    
    char number2[] = "12.3";
    float n2 = atof(number2);
    printf("The number and its double are %f and %f\n", n2, n2 * 2);
   
    //memory functions
    //void *memcpy(void *s1, const void *s2, size_t n):
    
    //void *memset(void *__b, <#int __c#>, size_t __len)
    
    char s4[17];
    char s5[] = "Copy this string";
    
    memcpy(s4, s5, 17);
    printf("%s\n%s\"%s\"\n", "After s4 is copied into s5 with memcpy", "s4 contains ", s4);
    
    
    char string1[15] = "BBBBBBBBBBBBB"; //intialize string1
    
    printf("string1 = %s\n", string1);
    printf("string 1 after memset = %s\n", (char*)memset(string1, 'b', 7));
    
    
    int arr10[] = {1, 2, 3, 4};
    int arrDest[SIZE2];
    memcpy(arrDest, arr10, SIZE2 * sizeof(int));
    
    for(int i = 0; i < SIZE2; i++)
    {
        printf("%d ", arrDest[i]);
    }
    
    
    memset(arr10, 0, SIZE2 * sizeof(int));
    
    for(int i = 0; i < SIZE2; i++)
    {
        printf("%d ", arr10[i]);
    }
    

    //mfor memset 0 and '\0' same for strings
    
    char buffer2[256] = "Hello";
    buffer2[0] = 'L';
    buffer2[1] = 'O';
    buffer2[2] = 'L';
    printf("%s\n", buffer2);
    
    
    
    //Exercise 01
    //let user input 2 strings
    char strInput1[SIZE]; //buffer
    char strInput2[SIZE]; //buffer

    puts("Enter line of text:");
    //use fgets to read of text
    fgets(strInput1, SIZE, stdin);
    //fgets accepts space unlike scanf
    
    puts(strInput1);
    
    puts("Enter another line of text:");
    fgets(strInput2, SIZE, stdin);

    puts(strInput2);
    
    long nLen1 = strlen(strInput1);
    long nLen2 = strlen(strInput2);
    
    
    char * strArray = (char *)malloc(sizeof(char) * (nLen1 + nLen2));
    strcpy(strArray, strInput1);
    strcat(strArray, strInput2);
    
    printf("%s", strArray);
    
    
    
    
    
    
}
