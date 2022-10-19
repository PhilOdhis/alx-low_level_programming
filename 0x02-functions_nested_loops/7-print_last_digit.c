#include "main.h"

/**
  * print_last_digit - Prints last digit
  *
  * @l: Number to take last digit from
  *
  * Return: last digit
  */

int print_last_digit(int l)
{
	int last_digit = l % 10;

	if (last_digit < 0)
		last_digit * = -1;


	-putchar(last_digit + '0');

	return (last_digit);
}
