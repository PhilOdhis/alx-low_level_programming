#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Shows a random number it's last digit and whether it meets some arguments
 *
 * Return: Always 0.
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5.\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is zero.\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0.\n",
		n, lastDigit);
	}

	return (0);
}
