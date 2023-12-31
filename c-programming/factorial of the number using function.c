//wap to find the factorial of number using the recursive function
#include<iostream>
using namespace std;
int fact(int);//function declaration
int main(){//function call
	int a,b;
cout<<"Enter the number:"<<b;
cin>>b;
	a=fact(b);
	cout<<"factorial of"<<b <<"is"<<a<<endl;
	return 0;	
}
int fact (x){//function define
if(x==0){

return 1;}
else{
	return(x*fact(x-1));
}	
}
