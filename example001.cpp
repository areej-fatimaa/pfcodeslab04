#include<iostream>
using namespace std;
void product();
void add();
main()
{
 product();
 add();
}
 void product()
{
  int number2;
  int number1;
  int product;
  cout<<"enter 1st no";
  cin>>number1;
  cout<<"enter 2nd no ";
  cin>>number2;
  product=number1*number2;
  cout <<"product is"<<product;

}
 void add()
{
  int number1;
  int number2;
  int sum;
  cout<<"enter 1st no";
  cin>>number1;
  cout<<"enter 2nd no";
  cin>>number2;
  sum=number1+number2;
  cout <<"sum is"<<sum;
}