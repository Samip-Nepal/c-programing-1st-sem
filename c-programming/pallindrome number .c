#include<stdio.h>
#include<math.h>
int main(){
	int  n ,num,rem,org;
	printf("enter the integer:");
	scanf("%d",&n);
	org=n;
	while(n!=0){
	
	rem=n%10;
	num=num*10+rem;
	n/=10;
}
if(org==num)
printf("%d is palindrome",org);
else
printf("%d is not a palindrome",org);
	return 0;
}

