#include "main.h"
/**
 * string_toupper-change lowercase to uppercase
 * @str: characters
 * Return:characters
 */
char *string_toupper(char *str)
{
	char *result = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (result);
}
