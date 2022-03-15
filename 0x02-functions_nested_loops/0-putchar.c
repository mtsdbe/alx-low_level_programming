#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char t[8] = "_putchar";
	int h;

	for (h = 0; h < 8; ++h)
		putchar(t[h]);
	putchar('\n');

	return (0);
}
