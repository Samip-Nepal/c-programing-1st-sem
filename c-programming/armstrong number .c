//waptochek the armstrog number 
#include<stdio.h>
#include<math.h>
int main(){
	int n,r,sum=0,temp;
	printf("enter the 3 digit number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
		
	}
	if(temp==sum)
	printf("armstrong number");
	else
	printf("not the armstrong number");
	return 0;
	
	
}
