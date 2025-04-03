#include <stdio.h>

int main()
{
	int N = 0;
	int i = 0;
	scanf("%d", &N);

	for (i = 0; i < 9; i++)
	{
		printf("%d * %d = %d\n", N, (i + 1), N * (i + 1));
	}

	return 0;
}