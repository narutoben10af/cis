//
//  main.c
//  Stucture
//
//  Created by Lim Si Eian on 03/04/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


struct employee
{
    char firstName[20];
    char lastName[20];
    unsigned int age;
    char gender;
    double hourlySalary;
    //struct employee person; //error
    struct employee2 *eptr; //pointer



};


struct card
{
    char *face;
    char *suit;
};

struct card aCard, deck[52], *cardPtr;

struct card aCard = {"Three", "Hearts"};

typedef struct card Card; //alias or synonyms






struct point
{
    int x;
    int y;
    
};

typedef struct point Point;

void setPoint(Point * point, int x, int y);
void printPoint(Point * point);
double distance(Point * p1, Point *p2);
bool pointsEqual(Point * p1, Point *p2);

void setPoint(Point * point, int x, int y)
{
//    point = (Point *)malloc(sizeof(Point));
    point -> x = x;
    point -> y = y;
    
};

void printPoint(Point * point)
{
    printf("X = %d \t Y = %d\n", point -> x, point -> y);
}

double distance(Point * p1, Point *p2)
{
    double fDistance = 0;
    double fX = pow((double)(p2 -> x - p1 -> x), 2);
    double fY = pow((double)(p2 -> y - p1 -> y), 2);
    double fSum = fX + fY;
    fDistance = sqrt(fSum);
    return fDistance;
}

bool pointsEqual(Point * p1, Point *p2)
{
    bool result = (p1 -> x == p2 -> x) && (p1 -> y == p2 -> y);
    
    return result;
}




struct rectangle
{
    int height;
    int width;
};

typedef struct rectangle Rectangle;



void setRectangle(Rectangle * rect, int height, int width);
void printRectangle(Rectangle * rect);
int computeArea(Rectangle * rect);
bool rectsEqual(Rectangle * r1, Rectangle * r2);

void setRectangle(Rectangle * rect, int height, int width)
{
    rect -> height = height;
    rect -> width = width;
};

void printRectangle(Rectangle * rect)
{
    printf("Height = %d, Width = %d\n", rect -> height, rect -> width);
};

int computeArea(Rectangle * rect)
{
    int nArea = rect->height * rect -> width;
    return nArea;
}

bool rectsEqual(Rectangle * r1, Rectangle * r2)
{
    bool result = (((r1 -> height == r2 -> height) && (r1 -> width == r2 -> width)) || ((r1 -> width == r2 -> height) && (r1 -> height == r2 -> width)));
    
    return result;
};


int main(void)
{
    Point p1;
    p1.x = 10;
    p1.y = 12;
    
    printf("X = %d, Y = %d\n", p1.x, p1.y);
    
    Point * ptr;
    
    ptr = (Point *)malloc(sizeof(Point));
    ptr -> x = 5;
    ptr -> y = 2;
    
    printf("X = %d, Y = %d\n", ptr->x, ptr->y);

    Point p2;
    
    
    free(ptr);
    
    
    
    Point p3, p4, p5;
    setPoint(&p3, 3, 5);
    setPoint(&p4, 7, 5);
    setPoint(&p5, 3, 5);
    
    printPoint(&p3);
    printPoint(&p4);
    printPoint(&p5);
    
    double dist = distance(&p3, &p4);
    printf("The distance between p1 and p2 is %.2lf\n", dist);
    
    if(pointsEqual(&p5, &p3))
    {
        printf("The points are equal\n");
    }

    
    Rectangle r1, r2;
    
    setRectangle(&r1, 3, 5);
    setRectangle(&r2, 5, 5);
    printRectangle(&r1);
    printRectangle(&r2);
    
    int nArea = computeArea(&r1);
    
    if(rectsEqual(&r1, &r2))
    {
        printf("The rectangles are equal\n");
    }

    
    
    struct card aCard; // define one struct card variable
    
    //place strings into aCard
    
    aCard.face = "Ace";
    aCard.suit = "Spades";
    
    struct card *cardPtr = &aCard; //assign address of aCard to cardPtr
    printf("%s", aCard.suit);
    
    printf("%s", cardPtr -> suit);
    
    printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, "of", aCard.suit, cardPtr ->face, "of", cardPtr ->suit, (*cardPtr).face, "of", (*cardPtr).suit);
    
    
    
    
}
