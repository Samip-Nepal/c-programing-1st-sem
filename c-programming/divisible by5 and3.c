//wafor the given numbe is divisible by 5&3 but not 10
#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	if(a%5==0&&a%3==0&&a%10!=0){
		printf("the number is diisible by 5 and 3 but not 10");
		
	}
	else("the number isnot diisible by 5 and 3 but not 10");
	return 0;
}

