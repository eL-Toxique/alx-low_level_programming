#include "main.h"
/**
 * _strpbrk- searches a string for any set of bytes
 * @s:occurence being searched
 * @accept:string being searched
 *
 * Return:string
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
