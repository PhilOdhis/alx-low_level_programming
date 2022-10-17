#include <stdio.h>

/**
 * main - print alphabet
 * Description: omit e and q
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letterA = 'a', letterF = 'f', letterR = 'r';

	while (letterA < 'e')
	{
		putchar(letterA);
		letterA++;
	}
	while (letterF < 'q')
	{
		putchar(letterF);
		letterF++;
	}
	while (letterR < 'R')
	{
		putchar(letterR);
		letterR++;
	}
	/*Put new line*/
	{
		putchar('\n');
	}
	return (0);
}
