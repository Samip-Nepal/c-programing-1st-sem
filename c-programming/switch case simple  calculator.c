//switch case for simple calculator 
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {

char option;
float  a,b,sum,subtract,divide,multiply;
printf("enter an operator('+','-','/','*')");
	scanf("%c",&option);
printf("enter the value of a and b");
	scanf("%f%f",&a,&b);
	

	switch(option){
		sum=a+b;
		printf("sum is %f",sum);
		break;
		case'-':
		subtract=a-b;
		printf("subtract is %f",subtract);
		break;
		case'/':
			divide=a/b;
			printf("divide is %.2f",divide);
			break;
			case'+':
			case'*':
				multiply=a*b;
				printf("multiply is %f",multiply);
				break;
				default:
					printf("error!");

	}
getch();		
}
