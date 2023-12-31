//total marks and percentage in 5 subjects 
#include<stdio.h>
#include<conio.h>
int main(){
	printf("below is total marks and percentage obtained by Reeju\n");
	int Mathematics,Cprogramming,Digitallogics,Physics,IIT,totalmarks,percentage;
	printf("Enter the marks\n");
	scanf("%d%d%d%d%d",&Mathematics,&Cprogramming,&Digitallogics,&Physics,&IIT);
	
	totalmarks=Mathematics+Cprogramming+Digitallogics+Physics+IIT;
	
	printf("total marks otained is :%d\n",totalmarks);
	percentage=totalmarks/5;
	printf("percentage is:%d\n",percentage);
	return 0;

}
