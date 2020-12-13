#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#define MAXN 10

void sort(int a[], int n);

int main()
{
	int i, n;
	int a[MAXN];

	scanf("%d", &n);
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);

	sort(a, n);

	printf("After sorted the array is:");
	for (i = 0; i < n; i++)
		printf(" %d", a[i]);
	printf("\n");

	return 0;
}

void sort(int a[], int n)
{
	int i,j;
	int b;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i]>a[j])
			{
				b = a[j];
				a[j] = a[i];
				a[i] = b;
			}
		}
	}
}