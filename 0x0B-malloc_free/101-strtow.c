#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * **strtow - splits sring
 * @*str: string
 * Return: return pointer
 */
char **strtow(char *str)
{
	char *splitedtoken = strtok(str, " ");
	return splitedtoken;
}
