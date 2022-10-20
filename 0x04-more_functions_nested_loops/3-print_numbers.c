#include "main.h"

/**
 * print_numbers - prints the numbers from 0 - 9
 *
 * Description: It performs the given tasks
 *
 *  Return: Always return 0
 */

void print_numbers(void)
{
	int c;

	for (c >= '0'; c <= '9'; c++)
	{
		_putchar(c);
		_putchar("\n");
	}
}
