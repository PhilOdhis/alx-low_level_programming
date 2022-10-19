#include <stdio.h>

/**
 * main - print numbers
 * Description: print base 10 numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	{
		putchar('\n');
	}
	return (0);
}
