
#include <stdio.h>
#include "password.c"
#include "main.h"
/**
 * main - call generate password function
 * Return: Return 0
 */

int main()
{
    int N = 10;
  
    randomPasswordGeneration(N);
  
    return (0);
}
