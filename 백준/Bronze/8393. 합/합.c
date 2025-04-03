#include <stdio.h>


int main()
{
	int input = 0, i = 0;
	int sum = 0;

	scanf("%d", &input);

	for (i = 1; i < input + 1; i++)
	{
		sum += i ;
	}

	printf("%d", sum);

	return 0;
}