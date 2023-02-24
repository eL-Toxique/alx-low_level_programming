#include <stdio.h>
#include "main.h"
/**
 * main - prints 1-100
 * print Fizz for multiples of 3
 * print Buzz for multiples of 5
 * Return: 0
 */
int main(void)
{
	int i = 2, j = 1;

	printf("%d", j);

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
