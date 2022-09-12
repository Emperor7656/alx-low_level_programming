#include <stdio.h>
/**
 * main - main block
 * Description:prints all numbers of base 10 in lowercase
 * Use putchar only
 * Return: 0
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
