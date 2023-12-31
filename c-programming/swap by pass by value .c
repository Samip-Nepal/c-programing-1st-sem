//wap to swap the two number by using concept of  pass by value 
#include<stdio.h>
void swap(int a,int b);//declaration
int main(){//function call
int a,b;
printf("enter the two number:\n");
scanf("%d%d",&a,&b);
printf("before swap:\n");
printf("%d%d\n",a,b);
swap(a,b);
printf("after a=%d,b=%d\n",a,b);
return 0;
}
void swap (int a ,int b ){
	int c;
   c =a;
	a=b;
	b=c;
	printf("afterswap:\n");
	printf("%d%d\n",a,b);
	getch();
}
