#include<stdio.h>
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return temp;
}
int main()
{
	int a = 5;
	int b = 4;
	swap(&a,&b);
	printf("Value of a and b = %d & %d",a,b);
	return 0;
}
