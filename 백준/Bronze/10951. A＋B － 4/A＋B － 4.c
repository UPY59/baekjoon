#include <stdio.h>


int main()
{
	int a = 0, b = 0;
	int c = 0;
	int i = 0;

	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}

	return 0;
}