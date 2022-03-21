#include <stdio.h>

int suda(int x)
{
	int y = 0;
	for (int i = 0; i <= x; i += 2)
	{
		y += i;
	}
	return y;
}

int licha(int x)
{
	int y = 0;
	for (int i = 1; i <= x; i += 2)
	{
		y += i;
	}
	return y;
}

int main()
{
	printf("soucet sudych cisel: %d\n", suda(10));
	printf("soucet lichych cisel:%d\n", licha(10));
}
