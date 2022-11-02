#include <stdio.h>
#include <math.h>
int z(int x, int y);
int a,b,c;
int main()
{
	printf("輸入(底數)和(指數)");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d 的 %d次方= %d\n",a,b,z(a,b));
	system("pause");
	return 0;
}
int z(int x, int y)
{
	c = pow(a, b);
}