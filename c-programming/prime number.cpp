//wap to  ind wheather the given number is prime number or not
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,i,m=0,flag=0;
	cout<<"Enter the number to check whether prime number or not:";
	cin>>n;
m=n/2;
 if (n == 0 || n == 1)
    flag = 1;
	for(i=2;i<=m;i++){
		if(n%i==0){
			flag =1;	
			break;
	}
	}
	

if (flag==0){
		cout<<n <<" is a prime number.";
	}
	else{
		cout<<n <<" is not a prime number.";
	}
	return 0;
}
