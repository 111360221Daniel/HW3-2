#include <stdio.h>
#include <math.h>
int z(int x, int y);
int a,b,c;
int main()
{
	printf("��J(����)�M(����)");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d �� %d����= %d\n",a,b,z(a,b));
	system("pause");
	return 0;
}
int z(int x, int y)
{
	c = pow(a, b);
}