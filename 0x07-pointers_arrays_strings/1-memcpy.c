#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where it is being  stored
 *@src: memory that is being copied
 *@n: number of bytes
 *
 *Return: copied memory with changed n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
