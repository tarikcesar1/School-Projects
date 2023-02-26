#include<stdio.h>
int main()
{
	int num1, num2;
	num1=10;
	num2=25;
	printf("\nBefore swap: num1=%d, num2=%d",num1,num2);
	swap(num1,num2);
	printf("\nAfter swap: num1=%d, num2=%d" ,num2,num1);
}
swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}

