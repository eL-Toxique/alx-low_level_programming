#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to integer
 * @s:string to convert
 *
 * Return:int converted
 */
int _atoi(char *s)
{
	int x, t, n, len, f, digit;

	x = 0;
	t = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++t;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (t % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;

			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main- multiplies two numbers
 * @argc:argument numbers
 * @argv:argument array
 *
 * Return:1 error and 0 success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
