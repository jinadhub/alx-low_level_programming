#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints all natural numbers
 * from n till 98
 *
 *@n: input number
 *
 * Return: no return.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
			if (n == 98)
				printf("%d\n", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);

			if (n == 98)
				printf("%d\n", n);
		}
	}
}
