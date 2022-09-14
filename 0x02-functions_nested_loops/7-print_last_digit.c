#include "main.h"
/**
 * print_last_digit - prints last digits of a number
 * @n: n is an integer
 * Return: return l if its true
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
