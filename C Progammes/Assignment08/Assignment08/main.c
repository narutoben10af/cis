//
//  main.c
//  Assignment08
//
//  Created by Lim Si Eian on 05/04/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

//Exercise 01

struct course
{
    char strDepartment[16];
    int nCourseNumber;
    char strCourseTitle[31];
    char cCredits;
};

typedef struct course Course;


//Exercise 02

void inputCourse(Course * c1);

void inputCourse(Course * c1)
{
    puts("Input Credits");
    scanf("%c", &c1 -> cCredits);
    
    puts("Input Department");
    scanf("%15s", c1 -> strDepartment);
    
    puts("Input Course Number");
    scanf("%04d", &c1 -> nCourseNumber);
    
    getchar();
    
    puts("Input Course Title");
//    scanf("%30s", c1 -> strCourseTitle);
    fgets(c1 -> strCourseTitle, 30, stdin);

};


//Exercise 03

void printCourse(Course * c1)
{
    printf("%-15s%43s\n", "Department:", c1 -> strDepartment);
    printf("%-15s%43d\n", "Course Number:", c1 ->  nCourseNumber);
    printf("%-15s%44s", "Course Title:", c1 -> strCourseTitle);
    printf("%-15s%43c\n", "Credits:", c1 -> cCredits);

}


//Exercise 04

void printCourseRow(Course * c1);

void printCourseRow(Course * c1)
{
    printf("%15s\t", c1 -> strDepartment);
    printf("%d\t", c1 ->  nCourseNumber);
    printf("%c\t",  c1 -> cCredits);
    printf("%s",  c1 -> strCourseTitle);
    
}


//Exercise 05

void inputAllCourses(Course * c1[], int a_nSize);

void inputAllCourses(Course * c1[], int a_nSize)
{
    for (int i = 0; i < a_nSize; i++)
    {
        inputCourse(c1[i]);
    }
};

//Exercise 06

void printAllCourses(Course * c1[], int a_nSize);

void printAllCourses(Course * c1[], int a_nSize)
{
    for (int i = 0; i < a_nSize; i++)
    {
        printCourseRow(c1[i]);
    }
};

//Exercise 07
int main(void)
{
//    Course c1;
//    inputCourse(&c1);
//    printCourse(&c1);
//    Course c2;
//    inputCourse(&c2);
//    printCourseRow(&c1);
//    printCourseRow(&c2);
    
    Course * arrCourse[SIZE];
    
    for(int i = 0; i < SIZE; i++)
    {
        arrCourse[i] = (Course *)malloc(sizeof(Course));
    }

    inputAllCourses(arrCourse, SIZE);
    printAllCourses(arrCourse, SIZE);
    

//    arrCourse[SIZE] = (Course **)malloc(sizeof(Course * SIZE));
    
}
