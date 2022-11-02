#include <stdio.h>
int n;
void h(int n, char A, char B, char C);
int main()
{
	
	printf("請輸入n:");
	scanf("%d", &n);
	h(n, 'A', 'B', 'C');
	return 0;
}
void h(int n, char A, char B, char C)
{
	if (n == 1)
		printf("將第%d個盤子從柱子%c移到柱子%c\n",n,A,C);
	else
	{
		h(n - 1, A, C, B);
		printf("將第%d個盤子從柱子%c移到柱子%c\n",n, A, C);
		h(n - 1, B, A, C);
	}
}