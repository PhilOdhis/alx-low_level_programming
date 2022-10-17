#include <stdio.h>

/**
 * main - Prints all possible combinations of numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int ab, cd;

	for (ab = 0; ab <= 98; ab++)
	{
		for (cd = ab + 1; cd < 99; cd++)
		{
			putchar((ab % 10) + '0');
			putchar((ab % 10) + '0');
			putchar(' ');
			putchar((cd % 10) + '0');
			putchar((cd % 10) + '0');

			if (ab == 98 && cd == 99)
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
