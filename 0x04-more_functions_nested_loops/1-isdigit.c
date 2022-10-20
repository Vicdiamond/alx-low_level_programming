#include "main.h"

/**
 * _isdigit - checks for digits
 *
 *@c: the digit being checked
 *Return: Always return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
