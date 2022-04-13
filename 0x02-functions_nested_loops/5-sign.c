#include"main.h"
/**
 * print_sign - function to check for a sign of a number
 * @n: is the int that will be used for the argument of the function
 * Return: 0
 */
int print_sigh(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
