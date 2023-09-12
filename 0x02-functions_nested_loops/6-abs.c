#include "main.h"
/**
 * _abs - calculate the absolute value
 * of an integer.
 *
 * @i: input number as an int.
 *
 * Return: absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
