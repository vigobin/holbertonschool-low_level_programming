#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *  to get from one number to another.
 * @n: first integer input.
 * @m: second number.
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nbits = 0, flip = n ^ m;

	while (flip > 0)
	{
		nbits += (flip & 1);
		flip >>= 1;
	}
	return (nbits);
}
