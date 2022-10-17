#include <stdio.h>

/*Show base 10 numbers; No printf*/

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
