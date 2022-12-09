#include <stdio.h>
/**
 * main - find size of variables
 * Return: Returns 0
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("size of int: %ld bytes\n", sizeof(intType));
	printf("size of float: %ld bytes\n", sizeof(floatType));
	printf("size of double: %ld bytes\n", sizeof(doubleType));
	printf("size of char: %ld bytes\n", sizeof(charType));
	return (0);
}
