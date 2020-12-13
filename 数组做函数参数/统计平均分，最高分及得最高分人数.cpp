#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
float Max = 0;
int J = 0;
float fun(float array[], int n);
int main()
{
	float  a[10], ave;
	int i = 0;
	for (i = 0; i<10; i++)
		scanf("%f", &a[i]);
	ave = fun(a, 10);
	printf("ave=%.2f\n", ave);
	printf("max=%.02f\n", Max);
	printf("Total:%d\n", J);
	return 0;
}

float fun(float array[], int n)
{
	int i,j;
	float a=0,avg;
	int b,max;
	int count=0;
	for (i = 0; i < 10; i++)
	{
		a =a + array[i];
	}
	avg = 1.0* a / 10;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{ 
			if (array[j]>array[j + 1])
			{
				b = array[j + 1];
				array[j + 1] = array[j];
				array[j] = b;
			}
		}
	}
	max = array[9];
	Max = max;
	for (i = 0; i < 10; i++)
	{
		if (array[i] == max)
		{
			count++;
		}
	}
	J = count;
	return avg;
}