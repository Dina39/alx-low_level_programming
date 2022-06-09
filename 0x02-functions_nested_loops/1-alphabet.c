#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_alphabet - prints the alphabet lowercase
* Return: Always 0.
*/
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
}
