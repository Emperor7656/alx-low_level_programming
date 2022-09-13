#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - this is the function to print alphabets
 * Return: 0
 */
void print_alphabet(void)
{

	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_purchar('\n');
}
