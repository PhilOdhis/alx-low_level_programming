#include <stdio.h>

/**
  * main - Prints base 16 numbers'
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int b = '0', h = 'a';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	while (h <= 'f')
	{
		putchar(h);
		h++;
	}
	{
		putchar('\n');
	}
	return (0);
}
