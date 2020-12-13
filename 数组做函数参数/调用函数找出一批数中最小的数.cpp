#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int fun(int x[], int n);
int main()
{
	int a[10], i, min, n;
	scanf("%d", &n);
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	min = fun(a, n);
	printf("%d\n", min);
	return 0;
}
int fun(int x[], int n)
{
	int i,j;
	int b;
	int min;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (x[j]>x[j + 1])
			{
				b = x[j + 1];
				x[j + 1] = x[j];
				x[j] = b;
			}
		}
	}
	min = x[0];
	return min;
}