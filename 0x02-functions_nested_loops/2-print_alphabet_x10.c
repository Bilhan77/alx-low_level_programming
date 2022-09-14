#include "main"
/** 
 * main - print the alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int number = 1;

	while (number < 11)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
		number++;
	}
}
