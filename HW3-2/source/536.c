#include <stdio.h>
int n;
void h(int n, char A, char B, char C);
int main()
{
	
	printf("�п�Jn:");
	scanf("%d", &n);
	h(n, 'A', 'B', 'C');
	return 0;
}
void h(int n, char A, char B, char C)
{
	if (n == 1)
		printf("�N��%d�ӽL�l�q�W�l%c����W�l%c\n",n,A,C);
	else
	{
		h(n - 1, A, C, B);
		printf("�N��%d�ӽL�l�q�W�l%c����W�l%c\n",n, A, C);
		h(n - 1, B, A, C);
	}
}