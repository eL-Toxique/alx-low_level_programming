#include "main.h"
/**
 * cap_string-capitalize a string
 * @str:input
 * Return:capitalized string
 */
char *cap_string(char *str)
{
	char *result = str;
	int n = 1;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == ',' || *str == ';' || *str == '.' ||
			*str == '!' || *str == '?' || *str == '"' ||
			*str == '(' || *str == ')' || *str == '{' ||
			*str == '}')
		{
			n = 1;
		}
		else if (n)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str = *str - 'a' + 'A';
			}
			n = 0;
		}
		else
		{
			n = 0;
		}
		str++;
	}
	return (result);
}
