#include <stdio.h>
int a, b,r,w;
//�̤p������=��Ƭۭ�/�̤j���]��
int z(int x, int y);
int main()
{

	printf("�п�J��Ӿ��:");
	scanf("%d", &a);
	scanf("%d", &b);
	w = a * b;
	printf("�̤p�����Ƭ�: %d",w/(z(a,b)));
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