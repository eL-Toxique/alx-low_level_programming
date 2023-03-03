#include "main.h"
/**
 * leet- encodes a string
 * @str:string to encode
 * Return:encoded string
 */
char *leet(char *str)
{
	char *result = str;
	char *c = "aAeEoOtTlL";
	char *r = "4433007711"

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = r[j];
				break;
			}
		}
	}
	return (result);
}
