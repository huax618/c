#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
void fun(int a[], int n);
int main()
{
	int i, a[10] = { 3, 7, 5, 1, 2, 8, 6, 4, 10, 9 };
	fun(a, 10);
	for (i = 0; i<10; i++)
		printf("%3d", a[i]);
	return 0;
}
void fun(int a[], int n)
{
	int i, j;
	int b;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (a[j]>a[j + 1])
			{
				b = a[j + 1];
				a[j + 1] = a[j];
				a[j] = b;
			}
		}
	}
}
