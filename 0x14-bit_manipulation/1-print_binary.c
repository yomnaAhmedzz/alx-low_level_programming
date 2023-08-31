#include "main.h"
#include <stdio.h>
/**
* print_binary - converting unsigned int
* @n: no signined in to the decimal list
* Return: binary numbers and codes
*/
void print_binary(unsigned long int n)
{

	unsigned long int n_copy = n, conc = 1;
	int ana = 0;

	while (n_copy > 0)
	{
		ana++;
		n_copy >>= 1;
	}
	ana -= 1;

	if (ana > 0) /* create conc based on length of num */
		conc = conc << ana;

	while (conc > 0) /* match each rightmost bit to see if 1 or 0 */
	{
		if (n & conc)
			_putchar('1');
		else
			_putchar('0');

		conc >>= 1;
	}
}
