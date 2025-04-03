#include <stdio.h>

int main()
{
	int h = 0, m = 0;
	int t = 0;

	scanf("%d %d", &h, &m);
	scanf("%d", &t);

	m = m + t;
	
	if (m >= 60)
	{
		while (m >= 60) 
		{
			m = m - 60;
			h = h + 1;

		}

		if (h >= 24)
		{
			h = h - 24;
			printf("%d %d", h, m);
		}
		else
			printf("%d %d", h, m);

	}
	else
		printf("%d %d", h, m);

    return 0;
}