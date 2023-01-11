#include "main.h"
/*
 * _isupper - prints upper case string
 * @c: accept integer value
 * Return: if uppercase return 1 otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
