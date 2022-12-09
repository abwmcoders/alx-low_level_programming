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

	printf("size of char: %ld byte(s)\n", sizeof(charType));
	printf("size of int: %ld byte(s)\n", sizeof(intType));
	printf("size of long int: %ld byte(s)\n", sizeof(long int));
	printf("size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
