#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point for the program
 *
 * Description: This program takes  the last digit of a number
 * Return: It does not return an integer
 */

int main(void)
{
        int n;
        int 1t;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        1t = n % 10;

        if (1t > 5)
        {
                printf("Last digit of %d is %d and is greater than 5", n, 1t);

