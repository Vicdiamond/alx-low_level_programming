#include "main.h"
/**
 * main - The entry point of the program
 *
 * Description: It runs the given task
 * Return: It returns 0
 */
int main(void)
{
	char fun[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(fun[c]);
	}
	_putchar('\n');
	return (0);
}
