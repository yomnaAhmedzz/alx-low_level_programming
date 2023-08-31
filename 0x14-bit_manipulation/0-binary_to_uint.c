#include "main.h"
/**
* _stoi - converts putchar to ints and code it
* @c: putchar_c int
* Return: convert with int and coden
*/
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
* _strlen - calculates the length of the string
* @s: input
* Return: length of string
*/
unsigned int _strlen(const char *s)
{
	unsigned int q;

	for (q = 0; s[q]; q++)
		;
	return (q);
}
/**
* binary_to_uint - converting a string of 1 and binary number
* @b: string to identifying
* Return:  no signing to decimal numbers
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int rest, temp, expor;

	if (!b)
		return (0);
	rest = temp = 0;
	expor = 1;
	for (i = _strlen(b) - 1; b[i]; i--, expor *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		temp = _stoi(b[i]);
		rest += temp * expor;
	}
	return (rest);
}
