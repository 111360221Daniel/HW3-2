#include <stdio.h>
int a, b,r,w;
//程そ计=ㄢ计/程そ计
int z(int x, int y);
int main()
{

	printf("叫块ㄢ俱计:");
	scanf("%d", &a);
	scanf("%d", &b);
	w = a * b;
	printf("程そ计: %d",w/(z(a,b)));
	return 0;
}
int z(int x, int y) 
{
	r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
}