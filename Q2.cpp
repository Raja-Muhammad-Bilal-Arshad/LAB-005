// Write a program that takes a number as input and checks whether the number is a prime number or not.
// A prime number is a number greater than 1 that has no divisors other than 1 and itself.

#include <iostream>
using namespace std;
int main()
{
int a,b,count;
cout<<"Enter the number you want to check Wether it's a prime or not: ";
cin>>a;
if(a==0)
{
cout<<"Invalid Input";
return 1;
}
if(a<0)
{
a=-a;
}
count=1; b=0;
while(count<a)
{
if(a%count==0)
{
b++;
}
count+=2;
}
cout<<b<<endl;
if(b==1 && a%2!=0)
{
cout<<"It is a prime number...";
}
else
{
cout<<"it is not a prime number";
}
return 0;}