#include <stdio.h>
/**
*main - printing combination of numbers.
*
*
*Return: (0) success
*/

int main(void)

{
int i;
int j = 0;
while (j < 10)
{
i = 0;
while (i < 10)
{
if (j != i && j < i)
{
putchar('0' + j);
putchar('0' + i);

if (i + j != 17)
{
putchar(',');
putchar(' ');
}
} i++;
} j++;
}
putchar('\n');
return (0);

}
