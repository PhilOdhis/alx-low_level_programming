#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 *
 * Prints the Alphabet in reverse
 */

int main(void)
{
	int letter = 'z';


	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	/*Add new line.*/
	{
		putchar('\n');
	}
	return (0);
}
