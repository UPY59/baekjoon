#include <stdio.h>


int main()
{
	int A = 0, B = 0;
	int T = 0;
	int i = 0;

	scanf("%d", &T);

	int Ar[100] = { 0, };
	int Br[100] = { 0, };

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		Ar[i] = A;
		Br[i] = B;
	}

	for (i = 0; i < T; i++)
	{
		printf("%d\n", Ar[i] + Br[i]);
	}

	return 0;
}