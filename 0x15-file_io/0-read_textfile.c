#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - reads text file and prints it to the POSIX stdoutput
 * @filename: pointer to the name of the file
 * @letters: number of letter it should read and print
 * Return: the actual number of letters it could read and print
 */
