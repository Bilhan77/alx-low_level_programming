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
	int I;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* YOUR CODE GOES THERE */
	I = n % 10;
	if (I > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, I);
	}
	else if (I == 0)
	{
		printf("Last digit of %d and is 0\n", n, I);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, I);
	}
	return (0);
}