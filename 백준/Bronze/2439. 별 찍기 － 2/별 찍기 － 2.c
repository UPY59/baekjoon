#include <stdio.h>


int main()
{
	int input = 0;
	int i = 0, j = 0, k = 0;

	scanf("%d", &input);

	for (i = 0; i < input; i++)
	{
		for (k = 0; k < input - i - 1; k++)
			printf(" ");

		for(j = 0; j <= i; j++)
			printf("*");

		printf("\n");
	}
	return 0;
}