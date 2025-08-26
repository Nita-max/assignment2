#include<stdio.h>
void main()
{
	int num1,num2;
	char operat;
	
	fflush(stdin);
	printf("enter first number?");
	scanf("%d",&num1);
	
	printf("enter operater (+,-,*,/,%)");
	scanf("%c",&operat);
	
	printf("enter second number?");
	scanf("%d",num2);
	
	if(operat=='+')
	{
		printf("result %d \n",num1+num2);
	}
	else if(operat=='-')
	{
		printf("result %d \n",num1-num2);
	}
	else if(operat=='*')
	{
		printf("result %d \n",num1*num2);
	}
	else if(operat=='/')
	{
	 if	(num2!=0)
	 {
	 	printf("result %d \n",num1/num2);
	 }
	 else if(operat='%')
	 {
	 	printf("result %d \n",num1%num2);
	 }
	 else
	 {
	 	printf("invalid operater");
	 }	
	}
}
