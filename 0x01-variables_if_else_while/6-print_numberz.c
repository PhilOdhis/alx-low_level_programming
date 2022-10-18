#include <stdio.h>

/**
 * main - print base 10
 * Description: without printf
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b = '0';

	while (b <= '9')
	{
		putchar('b');
		b++;
	}
	/*New line*/
	{
		putchar('\n');
	}
	return (0);
}
