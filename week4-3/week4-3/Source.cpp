#include<stdio.h>
int main()
{
	int n, i, j;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = n; j >= i; j--)
		{
			if (j == n or j == i or i == n or i == 1) {
				printf("* ");
			}
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}