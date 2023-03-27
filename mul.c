#include <stdio.h>

/**
 * main - entry point
 *
 * Description - program that multiplies given inputs
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	printf("Enter 2 digits. \n");
	scanf("%d %d", &x, &y);

	printf("%d multiplied by %d is equal to %d \n", x, y, x * y);

	return (0);
}
