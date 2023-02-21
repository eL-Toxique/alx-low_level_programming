#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character checked
 * Return: 1 if a letter,lowercase,uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
