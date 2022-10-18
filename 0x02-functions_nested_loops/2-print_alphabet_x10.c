#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets *10
 *
 * Description: performs the given task
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
	int c = 0;
	int d = 'a';

	while(c <= 10)
	{
		while(d <= 'z');
		{
			_putchar(d);
			d++;
		}
		
		_putchar("\n");
		c++;
	}	
