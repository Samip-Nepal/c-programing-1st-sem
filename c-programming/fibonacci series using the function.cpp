//wap to find the fibonacci series using the recursive function
#include<iostream>
using namespace std;
void fibonacci  (int n);//function declaration
int main(){ //function call   
    int n;    
   cout<<"Enter the number of elements: ";    
cin>>n;   
   cout<<" fibonacci series: "<<0<<1;  
fibonacci(n-2);
  return 0;  
 }    
void fibonacci(int n){ //function define   
  static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
        cout<<n3;   
       fibonacci(n-1);    
    }    
}
 
