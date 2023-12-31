//if elseif 
#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, sum,subtract,divide,multiply; 
char ope; 

printf("Enter two   integer number a and b");
scanf("%d%d", &a,&b); 

printf("Choose Any Operator:'-','+','/','*'\n");
scanf(" %c", &ope); 

 // Applying if-else condition to check conditions 
 if(ope == '+')
 {
  sum= a+b;
  printf("Addition of two numbers is: %d",sum);
 }

 else if(ope == '-')
 {
  subtract= a-b;
  printf("Subtraction of two numbers is: %d",subtract);
 }
  
 else if(ope == '/')
 {
divide=a/b;
  printf("Division of two numbers is: %d",divide);
 }
  
 else if(ope == '*' )
 {
  multiply= a*b;
  printf("Multiplication of two numbers is: %d",multiply);
 }
  
 else
 {
 printf("Invalid Input"); 
 }
 getch();

}

