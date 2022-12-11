#include <stdio.h>
/**
 * main - Entry point
 * Return: Return 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		putchar('\n');
		alphabet++;
	}
	return (0);
}
