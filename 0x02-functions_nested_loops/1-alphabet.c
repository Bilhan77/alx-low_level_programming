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
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
