#include<iostream>
using namespace std;
void isEligible(int age);
main()
{
 int age;
 cout<<"enter your age";
 cin>>age;
 isEligible(age);
}
 void isEligible(int age)
{
 if(age>=18)
 cout<<"is eligible to vote";
}
