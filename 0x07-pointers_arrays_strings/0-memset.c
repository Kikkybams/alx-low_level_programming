#include "main.h"
/**
 *_memset - funtion that fills memory with a constant byte
 *@s: address of the memory
 *@b: the constant byte
 *@n: number of  byte to be filled
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)
	{
		s[i] = b;

	}
	return (s);
}
