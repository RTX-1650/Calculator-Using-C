#include<stdio.h>
#include<stdlib.h>
int main()
{
	double n1, n2;
	char x;
	printf("Number1, Operator, Number2:    ");
	scanf("%lf %c %lf", &n1,&x,&n2);
	if(x=='+')
	{
		printf("Answer= %lf\n", n1 + n2);
	}
	else if(x=='-')
	{
		printf("Answer= %lf\n", n1 - n2);
	}
	else if(x=='*')
	{
		printf("Answer= %lf\n", n1 * n2);
	}
	else if(x=='/')
	{
		printf("Answer= %lf\n", n1 / n2);
	}
	else
	{
		printf("Cannot Proceed\n");
	}
}
