#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets *10
 *
 * Description: performs the given task
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
int b = 0;
while (b < 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
b++;
}
}	
