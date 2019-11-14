//
//  main.c
//  FileIO
//
//  Created by Lim Si Eian on 01/04/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    //streams - collection of bytes
    //h - short
    //l long
    //ll - long long

    printf("%e\n", 1234567.89);
    printf("%e\n", +1234567.89); //plus doesnt print
    printf("%e\n", -1234567.89); // minus prints
    printf("%E\n", 1234567.89);
    printf("%f\n", 1234567.89); //six digits to the right of the decimal point
    printf("%g\n", 1234567.89); //prints with lower case e
    printf("%G\n", 1234567.89); //prints with upper case E

    
    //Right justifying integers in a field
    printf("%4d\n", 1);
    printf("%4d\n", 12);
    printf("%4d\n", 123);
    printf("%4d\n", 1234);
    printf("%4d\n", 12345);
    
    printf("%4d\n", -1);
    printf("%4d\n", -12);
    printf("%4d\n", -123);
    printf("%4d\n", -1234);
    printf("%4d\n", -12345);


    
    printf("%5s\n", "*");
    printf("%5s\n", "**");
    printf("%5s\n", "***");
    printf("%5s\n", "****");
    printf("%5s\n", "*****");
    
    int i = 873;
    printf("\t%.4d\n\t%.9d\n\n", i, i);
    
    double f = 123.94536;
    printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);
    
    char s[] = "Happy Birthday";
    printf("\t%.11s\n", s);
    
    
    printf("%*.*f", 7, 2 , 98.736);

    
    puts("1234567890123456789012345678901234567890\n");
    printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
    printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23);
    
    printf("% d\n% d \n", 547, -547);
    
    printf("%+09d\n", 452);
    printf("%09d]n", 452); //space is replaced with zero
    
    
    double a;
    double b;
    double c;
//    scanf"%c%8s", &x, y);
    
    
    char z[9];
    
    printf("%s", "enter string");
    scanf("%8[aeiou]", z);
    
    printf("the input was \%s\"\n", z);
    

    printf("%s", "enter string");
    scanf("%8[^aeiou]", z);
    
    printf("the input was \%s\"\n", z);

    int x, y;
    printf("%s", "enter six digit integer:");
    scanf("%2d%d", &x, &y);
    printf("The integers input were %d and %d\n", x, y);
    
    int month = 0, year = 0, day = 0;
    scanf("%2d-%2d-%4d", &day, &month, &year);
    printf("%d%d%d", day, month, year);
    
    
     
    
}
