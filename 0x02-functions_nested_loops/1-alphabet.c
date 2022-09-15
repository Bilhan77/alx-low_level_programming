#include "main.h"

/**
 * main - print alphabet of letters
 *
 * Description: The function prints out alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
