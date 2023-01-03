#include<iostream>
using namespace std;
void add(int number1,int number2);
void product(int number1,int number2);
void subtract(int number1,int number2);
void divide(int number1,int number2);
main()
{
 int number1;
 int number2; 
 char operation;
 cin>>number1;  
 cin>>number2;
 cout<<"enter operator(+,-,*,/):";
 cin>> operation;
 if(operation=='+')
{
 add(number1,number2);
}
 if(operation=='-')
{
 subtract(number1,number2);
}
if(operation=='*')
{
 product(number1,number2);
}
if(operation=='/')
{
 divide(number1,number2);
}}
 
void add(int number1,int number2)
{ 
 int sum;
 sum=number1+number2;
 cout<<"sum is"<<sum<<endl;
}
void product(int number1,int number2)
{
 int multiply;
 multiply=number1*number2;
 cout<<"product is"<<multiply;
}
void subtract(int number1,int number2)
{
 int sub;
 sub=number1-number2;
 cout<<"subtraction is"<<sub;
}
void divide(int number1,int number2)
{
int divide;
divide=number1/number2;
cout<<"division is"<<divide;
}






