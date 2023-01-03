#include<iostream>
using namespace std;
void check_result(int marks);
main()
{
  int marks;
  while(true)
 {
  cout<<"enter your marks";
  cin>>marks;
 check_result(marks);
 }
}
  void check_result(int marks)
 {
 
  if(marks>50)
 {
   cout<<"passed";

 }
  if(marks<50)
 {
  cout<<"fail";
 }
 if(marks==50)
 {
  cout<<"work hard";
 }
 }