#include "main.h"
#include <stdio.h>

/**
 * main- prints name of program
 * @argc:arguments number
 * @argv:argument array
 *
 * Return:0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
