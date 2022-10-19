#include "main.h"

/**
  * _abs - compute absolute value
  *
  * @v: the number to compute
  *
  * Return: the absolute value
  */

int _abs(int v)
{
	if (v > 0)
	{
		return (v);
	}
	else if (v < 0)
	{
		return (v * -1);
	}
}
