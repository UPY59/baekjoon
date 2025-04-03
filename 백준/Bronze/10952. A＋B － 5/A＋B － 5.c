#include <stdio.h>


int main()
{
	int a = 0, b = 0;
	int T = 0;
	int i = 0;

	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;

		printf("%d\n", a + b);
	}

	return 0;
}