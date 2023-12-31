//wap to swap the two number using the concept of  the pass by referance
#include<iostream>
using namespace std;
void swap(int * num1, int * num2);///function declaration

int main()//function call
{
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
 cout<<" swapping number:\n";
    cout<<"Value of num1:"<<num1;
    cout<<"Value of num2 =  \n"<< num2;
    swap(&num1, &num2);
    return 0;
}

void swap(int * num1, int * num2)//function define
{
    int temp;

    temp = *num1;
    *num1= *num2;
    *num2= temp;

cout<<" swapped number:\n";
  cout<<"Value of num1 = %d \n"<<*num1;
    cout<<"Value of num2 = %d \n"<<*num2;
}
