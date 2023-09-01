#include "main.h"
/**
* flip_bits - determination how many bits in the line
* @n:  binary visoin number
* @m: number of bits
* Return: caculate the num of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	/* Xor both nums to show bit 1 if different bits */
	difference = n ^ m;

	/* keep shifting difference to right and tallying the ones up */
	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (diff_bits);
}
