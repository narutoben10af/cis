//
//  main.c
//  Assignment09
//
//  Created by Lim Si Eian on 12/04/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.


#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
struct course
{
    char strDepartment[16];
    int nCourseNumber;
    char strCourseTitle[31];
    char cCredits;
};

typedef struct course Course;

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
    int i = 0;
    int c;
    while((i < 31 - 1) && (c = getchar()) != '\n' )
    {
        c1 -> strCourseTitle[i++] = c;
    }
    
};

void printCourse(Course * c1)
{
    printf("%-15s%43s\n", "Department:", c1 -> strDepartment);
    printf("%-15s%43d\n", "Course Number:", c1 ->  nCourseNumber);
    printf("%-15s%44s\n", "Course Title:", c1 -> strCourseTitle);
    printf("%-15s%43c\n", "Credits:", c1 -> cCredits);
    
}

void printCourseRow(Course * c1);

void printCourseRow(Course * c1)
{
    printf("%15s\t", c1 -> strDepartment);
    printf("%d\t", c1 ->  nCourseNumber);
    printf("%s\t",  c1 -> strCourseTitle);
    printf("%c\t",  c1 -> cCredits);

    
}

void inputAllCourses(Course * c1[], int a_nSize);

void inputAllCourses(Course * c1[], int a_nSize)
{
    for (int i = 0; i < a_nSize; i++)
    {
        inputCourse(c1[i]);
    }
};

void printAllCourses(Course * c1[], int a_nSize);

void printAllCourses(Course * c1[], int a_nSize)
{
    for (int i = 0; i < a_nSize; i++)
    {
        printCourseRow(c1[i]);
    }
};


//Exercise01
void saveAllCoursesText(Course * c1[], int a_nSize);

void saveAllCoursesText(Course * c1[], int a_nSize)
{
        FILE * cfPtr;
    
        if((cfPtr = fopen("courses.txt", "w")) == NULL)
        {
            puts("File could not be opened");
        }
        else
        {
            for(int i = 0; i < a_nSize; i++)
            {
                fprintf(cfPtr, "%d %s %c %s\n", c1[i] ->  nCourseNumber, c1[i] -> strCourseTitle, c1[i] -> cCredits, c1[i] -> strDepartment);


            }
    
            fclose(cfPtr);
        }
}


//Exercise02

void loadAllCoursesText(Course * c2[5], int a_nSize);

void loadAllCoursesText(Course * c2[5], int a_nSize)
{
    FILE * cfPtr;
    
    if((cfPtr = fopen("courses.txt", "r+")) == NULL)
    {
        puts("File could not be opened");
    }
    else
    {

        for(int i = 0; i < a_nSize; i++)
        {
//            printf("%d%s%c%s", c2[i] -> nCourseNumber, c2[i] -> strCourseTitle, c2[i] -> cCredits, c2[i] -> strDepartment);
            fscanf(cfPtr, "%d%s%c%s", &c2[i] -> nCourseNumber, c2[i] -> strCourseTitle, &c2[i] -> cCredits, c2[i] -> strDepartment);
            
        }

//        for(int i = 0; i < a_nSize; i++)
//        {
//            fscanf(cfPtr, "%%43s\n", c2[i] -> strDepartment);
//            fscanf(cfPtr, "%%43d\n", c2[i] ->  nCourseNumber);
//            fscanf(cfPtr, "%%44s", c2[i] -> strCourseTitle);
//            fscanf(cfPtr, "%43c\n", c2[i] -> cCredits);
//
//        }
        
        fclose(cfPtr);
    }
}


//Exercise 03
void saveAllCoursesData(Course * c1[], int a_nSize);

void saveAllCoursesData(Course * c1[], int a_nSize)
{
        FILE * cfPtr;
        
        // Open the file
        if((cfPtr = fopen("courses.dat", "wb")) == NULL)
        {
            puts("File could not be opened");
        }
        else
        {
            for(int i = 0; i < a_nSize; i++)
            {
                fwrite(c1[i], sizeof(struct course), 1, cfPtr);
            }
            
            fclose(cfPtr);
        }
    

}

//Exercise 04
void loadAllCoursesData(Course * c1[], int a_nSize);

void loadAllCoursesData(Course * c1[], int a_nSize)
{
    FILE * cfPtr;

    if((cfPtr = fopen("courses.dat", "rb+")) == NULL)
    {
        puts("File could not be opened");
    }
    else
    {
        
        for(int i = 0; i < a_nSize; i++)
        {
            fscanf(cfPtr, "%d%s%c%s", &c1[i] -> nCourseNumber, c1[i] -> strCourseTitle, &c1[i] -> cCredits, c1[i] -> strDepartment);
        }
        
        fclose(cfPtr); //fclose closes the file

}
}



//Exercise05
int main(void)
{
    
    int a = 0;
    a = a++ + a++ - a++ + ++a;
    printf("%d", a);
    
    
    Course * arrCourse[SIZE];
    
    for(int i = 0; i < SIZE; i++)
    {
        arrCourse[i] = (Course *)malloc(sizeof(Course));
    }
    
    inputAllCourses(arrCourse, SIZE);
    printAllCourses(arrCourse, SIZE);
    
    Course * arrText[5];
    saveAllCoursesText(arrCourse, SIZE);
    loadAllCoursesText(arrText, SIZE);
    
    Course * arrData[5];
    saveAllCoursesData(arrCourse, SIZE);
    loadAllCoursesData(arrData, SIZE);

}
