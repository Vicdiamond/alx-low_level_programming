#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the function solve the task given
 *
 * Description: It renders a random number
 * Return: It does return any integer
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
