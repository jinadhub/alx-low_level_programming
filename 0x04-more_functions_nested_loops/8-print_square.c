#include "main.h"
/**
 *print_square - Prints square using #
 *@size: size of the square
 *Return: nothing
 */

void print_square(int size)
{
	int i = 0;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
