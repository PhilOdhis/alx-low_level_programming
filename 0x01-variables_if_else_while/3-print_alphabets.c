#include <stdio.h>

/*Prints the Alphabet.*/

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
