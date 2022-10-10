#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int a, int b)
{
	int z = 0;
	z = a + b;
	return z;
}
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	int sum=Add(x, y);
	printf("%d",sum);
	

}