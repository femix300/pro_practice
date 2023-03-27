
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int x, y;

	if (argc != 3)
	{
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (y == 0)
		return (1);

	printf("%d\n", x / y);

	return (0);
}

