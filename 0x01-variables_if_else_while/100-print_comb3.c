#include <stdio.h>

/**
 * main - Prints all possible combinations of numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int ab, cd;

	for (ab = 0; ab <= 9; ab++)
	{
		for (cd = ab + 1; cd < 10; cd++)
		{
			putchar((ab % 10) + '0');
			putchar((cd % 10) + '0');

			if (ab == 8 && cd == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	{
		putchar('\n');
	}
	return (0);
}
