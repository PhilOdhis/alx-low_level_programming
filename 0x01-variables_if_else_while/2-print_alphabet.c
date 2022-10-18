#include <stdio.h>

/**
 * main - print alphabet
 * Description: print alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter = 'a';


	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	/*Add new line.*/
	{
		putchar('\n');
	}
	return (0);
}
