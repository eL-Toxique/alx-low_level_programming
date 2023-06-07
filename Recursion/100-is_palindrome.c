#include "main.h"

int _pal(char *s, int x, int len);
int _len_recursion(char *s);

/**
 * is_palindrome- check if string is a palindrome
 * @s:string to reverse
 *
 * Return:1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal(s, 0, _len_recursion(s)));
}

/**
 * _len_recursion- return length of a string
 * @s:string to get length
 * Return:length of string
 */
int _len_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len_recursion(s + 1));
}

/**
 * _pal - check characters for palindrome
 * @s:string to check
 * @i:iterator
 * @len:length of a string
 *
 * Return:1 if a palindrome, 0 if not
 */
int _pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_pal(s, i + 1, len - 1));
}
