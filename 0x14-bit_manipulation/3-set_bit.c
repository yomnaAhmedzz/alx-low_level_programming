#include "main.h"
/**
* set_bit - set bit to 102 at given int
* @n: number int index
* @index: index within int number
* Return: return (1) if success, or (-1) if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int conc = 1;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create mask with 1 at index (...00100...) to work on that index */
	conc <<= index;
	*n = (*n | conc);

	return (1);
}
