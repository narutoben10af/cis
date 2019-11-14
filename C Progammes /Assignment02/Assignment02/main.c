//
//  main.c
//  Assignment02
//
//  Created by Lim Si Eian on 28/01/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    //Exercise 1 and 2
    //a)
    //Create 3 integer variables and a float variable for product
    //print on screen to tell user to input 3 numbers
    //input 3 numbers
    //mulitply the 3 numbers and get the result.
    //print the results
    int nNum1 = 0, nNum2 = 0, nNum3 = 0;
    float fProduct = 0;
    puts("Input 3 numbers");
    scanf("%d, %d, %d", &nNum1, &nNum2, &nNum3);
    fProduct = nNum1 * nNum2 * nNum3;
    printf("Product of %d, %d, %d is %f\n", nNum1, nNum2, nNum3, fProduct);
    
    //b)
    //Create 2 integer variables
    //tell user to input 2 numbers
    //input 2 numbers
    //compare which numbers is bigger
    //display result
    
    int nVal1 = 0, nVal2 = 0;
    puts("Input 2 numbers");
    scanf("%d, %d", &nVal1, &nVal2);
    if(nVal1 < nVal2)
    {
        printf("The smaller of the two numbers is %d\n", nVal1);
    }
    else if(nVal2 < nVal1)
    {
        printf("The smaller of the two numbers is %d\n", nVal2);
    }
    else
    {
        printf("Both %d and %d are equal\n", nVal1, nVal2);
    }
    
    //c) Create 5 integer variables
    // Input 5 numbers
    //make sure it is positive number
    //add the sum of it and divide it by 5 to get average
    //display average
    
    int nNumb1 = 0, nNumb2 = 0, nNumb3 = 0, nNumb4 = 0, nNumb5 = 0;
    puts("Input 5 positive numbers");
    scanf("%d, %d, %d, %d, %d", &nNumb1, &nNumb2, &nNumb3, &nNumb4, &nNumb5);
    if(nNumb1 < 0)
    {
        nNumb1 = -nNumb1;
    }
    if(nNumb2 < 0)
    {
        nNumb2 = -nNumb2;
    }
    if(nNumb3 < 0)
    {
        nNumb3 = -nNumb3;
    }
    if(nNumb4 < 0)
    {
        nNumb4 = -nNumb4;
    }
    if(nNumb5 < 0)
    {
        nNumb5 = -nNumb5;
    }
    float fAverage = 0;
    fAverage = (nNumb1 + nNumb2 + nNumb3 + nNumb4 + nNumb5)/5.0;
    printf("The average of %d, %d, %d, %d, %d is %f\n", nNumb1, nNumb2, nNumb3, nNumb4, nNumb5, fAverage);

    
    //Exercise 3
    int nHours = 0;
    float fWage = 0;
    float fSalary = 0;
    puts("Input number of hours worked:");
    scanf("%d", &nHours);
    printf("Number of hours worked: %d\n", nHours);
    puts("Input hourly wage of worker");
    scanf("%f", &fWage);
    printf("Hourly rate of the worker: %f\n", fWage);

    if(nHours <= 40)
    {
        fSalary = fWage * nHours;
    }
    
    else
    {
        fSalary = (fWage * 40) + ((nHours - 40) * fWage * 1.5);
    }
    
    printf("Salary is $%f\n", fSalary);
    
    //Exercise 04
    int nGrade = 0;
    char cGrade = 0;
    printf("Insert Grade");
    scanf("%d", &nGrade);
    if(nGrade >= 90)
    {
        cGrade = 'A';
    }
    else if(nGrade >= 80)
    {
        cGrade = 'B';
    }
    else if(nGrade >= 70)
    {
        cGrade = 'C';
    }
    else if(nGrade >= 60)
    {
        cGrade = 'D';
    }
    else
    {
        cGrade = 'F';
    }
    printf("Your grade letter is %c\n", cGrade);

    //Exercise 05
    int nNum = 0;
    printf("Insert a number");
    scanf("%d", &nNum);
    int nRemainder = nNum % 7;
    printf("%d", nRemainder);

    switch(nRemainder)
    {
        case 0:
            puts("Nice");
            break;
        case 1:
        case 3:
            puts("Good");
            break;
        case 2:
            puts("Cool");
            break;
        case 4:
        case 5:
        case 6:
            puts("Well");
            break;
    }
}
