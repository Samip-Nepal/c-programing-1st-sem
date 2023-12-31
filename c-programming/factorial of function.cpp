//wap to find the factorial of number using the recursive function
#include<iostream>
using namespace std;
int fact(int);//function declaration
int main(){//function call
	int a,b;
cout<<"Enter the number:";
cin>>b;
	a=fact(b);
	cout<<"factorial of "<<b <<" is"<<  a<<endl;
	return 0;	
}
int fact ( int a){//function define
if(a==0){

return 1;
}
else{
	return(a*fact(a-1));
}	
}
