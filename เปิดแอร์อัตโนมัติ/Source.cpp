#include <stdio.h>
struct temper
{
	int t, i;
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
}tem;
void temperature(temper);
int main()
{
	printf("Enter temperature :");
	scanf_s("%d", &tem.t);
	temperature(tem);
	return 0;
}
void temperature(temper tem)
{
	if (tem.t >= 34)
	{
		for (tem.i = 0; tem.i < 10; tem.i++)
		{
			printf("Air conditioner %d turn on with a temperature of 22 degrees Celsius.\n",tem.a[tem.i]);
		}
	}
	if (tem.t < 34 && tem.t >= 32)
	{
		for (tem.i = 0; tem.i < 10; tem.i++)
		{
			printf("Air conditioner %d turn on with a temperature of 23 degrees Celsius.\n", tem.a[tem.i]);
		}
	}
	if (tem.t < 32 && tem.t >= 30)
	{
		for (tem.i = 0; tem.i < 10; tem.i++)
		{
			printf("Air conditioner %d turn on with a temperature of 24 degrees Celsius.\n", tem.a[tem.i]);
		}
	}
	if (tem.t < 30 && tem.t >= 27)
	{
		for (tem.i = 0; tem.i < 10; tem.i++)
		{
			printf("Air conditioner %d turn on with a temperature of 25 degrees Celsius.\n", tem.a[tem.i]);
		}
	}
	if (tem.t < 27 && tem.t >= 25)
	{
		for (tem.i = 0; tem.i < 10; tem.i++)
		{
			printf("Air conditioner %d turn on with a temperature of 26 degrees Celsius.\n", tem.a[tem.i]);
		}
	}
	if (tem.t < 25)
	{
		for (tem.i = 0; tem.i < 10; tem.i++)
		{
			printf("Air conditioner %d turn on with a temperature of 27 degrees Celsius.\n", tem.a[tem.i]);
		}
	}
}