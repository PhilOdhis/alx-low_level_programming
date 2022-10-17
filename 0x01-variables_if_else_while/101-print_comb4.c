#include <stdio.h>

/**
 * main - Prints all possible combinations of three Numbers..
 *
 * Return: Always 0.
 */

int main(void)
{
	int ab, cd, ef;

	for (ab = 0; ab <= 9; ab++)
	{
		for (cd = ab + 1; cd < 10; cd++)
		{
			for (ef = cd + 1; ef < 11; cd++)
				putchar((ab % 10) + '0');
				putchar((cd % 10) + '0');
				putchar((ef % 10) + '0');

			if (ab == 7 && cd == 8 && ef == 9)
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
