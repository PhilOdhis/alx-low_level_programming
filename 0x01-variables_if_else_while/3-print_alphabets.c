#include <stdio.h>

/**
 * main - print alphabet
 * Description: print alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter = 'a', Letter = 'Z';


	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (Letter <= 'Z')
	{
		putchar(Letter);
		letter++;

	/*Add new line.*/
	{
		putchar('\n');
	}
	return (0);
}
