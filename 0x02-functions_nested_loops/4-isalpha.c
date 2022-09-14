#include "main.h"
/**
 * _isalpha - checks for alphabets, lowercase and uppercase
 * Return: return 1 if its true
 * @c: is an ASCII character
 */
 int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
