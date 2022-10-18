#include "main.h"
/**
 * print_alphabet - it prints the alphabets in small letters
 *
 * Description: it performs the task given
 * Return: 0
 */
void print_alphabet(void)
{
	int c;
	for (char c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
/**
 * main - entry point of the program
 *
 * Description: it performs the task given
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
