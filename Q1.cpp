//1. Write a program that takes input from user. Then calculate and print the factorial of a that number.

#include<iostream>
using namespace std;
int main ()
{
int fact,a,i,count;
cout<<"Enter your number whose factorial is required: ";
cin>>a;
count=1; fact=1;
while(count<=a)
{
fact=fact*count;
count++;
}
cout<<"The factorial of the number "<<a<<" is "<<fact;
return 0;
}