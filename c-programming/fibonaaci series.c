//wap to find the fibonacci series
#include<stdio.h>
#include<conio.h>
int main(){
	int  i,f1=0,f2=1,f3;
	printf("enter the number f1 and f2");
	scanf("%d%d",&f1,&f2);
f3 = f1 + f2;

	for(i=0;i<=10;i++){
		f1=f2;
		f2=f3;
		f3=f1+f2;
		printf("%d",f3);
		
	}
	return 0;
}
