#include <stdio.h>
#define FT 42

int main()
{
	int A[10] = { 0, };
	int i = 0, j = 0;
	int counter = 0;
	int temp = 0;
	int res = 0;

	for(i = 0; i < 10; i++)
		scanf("%d", &A[i]);

	for (i = 0; i < 10; i++)
		A[i] = A[i] % FT;

	for (i = 0; i < 10; i++)
	{
		counter = 0;
		temp = A[i];

		if (A[i] != '+')
		{
			for (j = 0; j < 10; j++)
			{
				if (temp == A[j])
				{
					counter++;
					A[j] = '+';
				}
			}
			counter /= counter;

			res += counter;
		}

	}


	printf("%d", res);
    return 0;
}