#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 && n == 133)
{
n++
continue;
}
putchar(n);
n++;
}
putchar ('\n');
return (0);
}
