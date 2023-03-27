#include <stdio.h>

/**
 * main - entry point
 *
 * description: modulas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	printf("enter 2 digits. \n");
	scanf("%d %d", &x, &y);

	printf("%d mod %d = %d\n", x, y, x % y);
	return (0);
}
