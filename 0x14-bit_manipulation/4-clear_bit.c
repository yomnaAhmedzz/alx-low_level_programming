#include "main.h"
/**
* clear_bit - clear bit to 0 at int
* @n: number of codes
* @index: index binary number ints
* Return: Always (1)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int conc = 1;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create conc with 0 at index (...11011...) to work on that index */
	conc = ~(conc << index);
	*n = (*n & conc);

	return (1);
}
