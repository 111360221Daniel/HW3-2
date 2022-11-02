#include <stdio.h>

char z(char y);
char a,b;
int main()
{
	
	printf("請輸入一個大寫字母: ");
	scanf("%c", &a);
	printf("%c\n",z(b));
	return 0;
}
char z(char y)
{
	b = a + 32;
}

