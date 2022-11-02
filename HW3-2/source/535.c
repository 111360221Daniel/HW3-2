#include <stdio.h>

int main()
{
	unsigned long  a[1000] = { 0 };
	int i, n;
	a[1] = 0;
	a[2] = 1;
	a[3] = 1;
	printf("請輸入一個數(n<48):");
	scanf("%d", &n);
	for (i = 3; i < 48; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	printf("%u ", a[n]);
	system("pause");
	return 0;
}