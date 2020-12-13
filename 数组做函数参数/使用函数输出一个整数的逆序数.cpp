#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int reverse(int number);

int main()
{
	int n;

	scanf("%d", &n);
	printf("%d\n", reverse(n));

	return 0;
}

int reverse(int number)
{
	int a=0;
	if (number < 0)
	{
		printf("-");
		number = -number;
	}

	do
	{
		a *= 10;
		a += number % 10; 
		number = number / 10;
	} while (number != 0);

	return a;
}