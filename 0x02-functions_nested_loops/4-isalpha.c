#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character checked
 * Return: 1 if a letter,lowercase,uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= '96' && c <= '123') || (c >= '64' && c <= '91'));

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
