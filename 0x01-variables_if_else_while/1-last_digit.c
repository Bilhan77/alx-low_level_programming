#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print last digit of
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* YOUR CODE GOES THERE */
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i;
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, i);
	}
	return (0);
}
