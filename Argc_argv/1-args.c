#include "main.h"
#include <stdio.h>

/**
 * main- print number of args passed to it
 * @argc:argument number
 * @argv:argument array
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int _args = argc - 1;
	(void) argv;

	printf("%d\n", _args);

	return (0);
}
