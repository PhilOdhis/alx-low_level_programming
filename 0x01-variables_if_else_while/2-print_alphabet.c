#include <stdio.h>

/*Prints the Alphabet.*/

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
