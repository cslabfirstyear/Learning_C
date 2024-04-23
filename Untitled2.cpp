#include<stdio.h>
void factorial(int n)
{
	int fact;
	factorial(n)=factorial(n-1)+factorial(n-2);
	return factorial(n);
}
int main()
{
	printf("The factorial of 5 is %d",factorial(5));
	return 0;
}
