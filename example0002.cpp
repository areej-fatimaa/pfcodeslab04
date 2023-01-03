#include<iostream>
using namespace std;
void add(int number1,int number2);
void product(int number1,int number2);
void subtract(int number1,int number2);
main()
{
 int number1;
 int number2; 
 cout<< "enter no one";
 cin>>number1;  
 cout<<"enter no two";
 cin>>number2;
 add(number1,number2);
 product(number1,number2);
 subtract(number1,number2);
}
void add(int number1,int number2)
{ 
 int sum;
 sum=number1+number2;
 cout<<"sum is"<<sum<<endl;
}
void product(int number1,int number2);
{
 int multiply;
 multiply=number1*number2;
 cout<<"product is"<<multiply;
}
void subtract(int number1,int number2);
{
 int sub;
 sub=number1-number2;
 cout<<"subtraction is"<<sub;
}







