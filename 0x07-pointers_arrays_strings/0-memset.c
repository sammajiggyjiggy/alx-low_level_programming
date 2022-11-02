#include "main.h"
/**
 *_memset: fills memory with constant byte
 *@s: memory area
 *@b: bytes
 *@n: number of bytes
 *
 *Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);

}
