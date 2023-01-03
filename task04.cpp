#include<iostream>
using namespace std;
void calculateBill();
main()
{
 while(true)
{
 calculateBill();
}
}
 void calculateBill()
{
 string day;
 int amount;
 cout<<"enter day";
 cin>>day;
 cout<<"enter amount";
 cin>>amount;
 int paybleamount;
 if(day=="sunday")
 {
  paybleamount= amount-(amount*10/100);
  cout<<"payble amount is"<<paybleamount<<endl;
 }
 if(day!="sunday")
 {
 paybleamount=amount;
 cout<<"payble amount is"<<paybleamount<<endl;
 }
}
  
