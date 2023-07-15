#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int b;
for (b = 0; b <= 15; b++)
{
if (b < 10)
{
putchar(b + '0');
}
else
{
putchar(b - 10 + 'a');
}
}
putchar('\n');
return (0);
}
