#include <stdio.h>

/*Print alphabet omitting e and q*/

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
