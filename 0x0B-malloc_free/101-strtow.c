#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * **strtow - splits sring
 * @*str: string
 * Return: return 0
 */
char **strtow(char *str)
{
	char *splitedtoken = strtok(str, " ");
	printf( " %s\n", splitedtoken );
	return 0;
}
