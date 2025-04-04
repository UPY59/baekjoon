#include <stdio.h>


int main()
{
	int a = 0, b = 0;
	int input = 0;
	int c = 0;
	int i = 0;
	int max = 0, min = 0;

	scanf("%d", &input);
	scanf("%d", &a);
	max = a;
	min = a;
	for (i = 0; i < input - 1; i++)
	{
		scanf("%d", &a);

		if (max < a)
			max = a;

		if (min > a)
			min = a;
	}

	printf("%d %d", min, max);

	return 0;
}