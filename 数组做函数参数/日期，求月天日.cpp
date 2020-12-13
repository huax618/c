#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int IsLeapYear(int year);
int MaxDayMonth(int year, int month);

int main()
{
	int y, m, n;
	scanf("%d%d", &y, &m);
	n = MaxDayMonth(y, m);
	printf("%d\n", n);
	return 0;
}

int MaxDayMonth(int year, int month)
{
	int a;
	int day;
	if (year <= 0 || month <= 0 || month > 12)
	{
		day = 0;
	}
	switch (month)
	{
	case 1: day = 31; break;
	case 2:
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			day = 29; break;
		}
		day = 28; break;
	case 3: day = 31; break;
	case 4: day = 30; break;
	case 5: day = 31; break;
	case 6: day = 30; break;
	case 7: day = 31; break;
	case 8: day = 31; break;
	case 9: day = 30; break;
	case 10: day = 31; break;
	case 11: day = 30; break;
	case 12:day = 31; break;
	}
	return day;
}