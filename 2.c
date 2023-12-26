/*Author:Gleta Kijogi
Date:11/26/2023
A program that adds and subtracts integers
This is the documentation section*/
#include <stdio.h>; //This is the linking section//
#include <math.h>;

int main() //This is the main function section//
{
    int integer1; //This is the declaration section//
    int integer2;
    int integer3;
    int answer;

    printf("Enter the value of integer1 \n"); //This is the execution section//
    scanf("%d", &integer1);

    printf("Enter the value of integer2 \n");
    scanf("%d", &integer2);

    printf("Enter the value of integer3 \n");
    scanf("%d", &integer3);

    answer= integer1 +integer2 - integer3;

    printf(answer);

return(0);
}