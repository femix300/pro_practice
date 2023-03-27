#include <stdio.h>

/**
 * main - entry point
 *
 * Description - program that asks for an input then adds the numbers given.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	printf("Enter 2 numbers.\n");
	scanf("%d %d", &x, &y);

	printf("%d + %d = %d \n", x, y, x + y);

	return (0);
}
