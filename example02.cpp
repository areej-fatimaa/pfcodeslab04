#include<iostream>
using namespace std;
void add(int number1,int number2);
main()
{
 int number1;
 int number2; 
 cout<< "enter no one";
 cin>>number1;  
 cout<<"enter no two";
 cin>>number2;
 add(number1,number2);
}
void add(int number1,int number2)
{ 
 int sum;
 sum=number1+number2;
 cout<<"sum is"<<sum<<endl;
}








