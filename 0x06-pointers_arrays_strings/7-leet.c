#include "main.h"
/**
 * leet- encodes a string
 * @s:string to encode
 * Return:encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char nums[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = nums[j];
			}
		}
		i++;
	}
	return (s);
}
