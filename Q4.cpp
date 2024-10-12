//4. Write a program that prompts user to enter the year, and then check whether it is leap year or not.
#include<iostream>
using namespace std;
int main()
{
int age;
cout << "Enter your year:";
cin >> age;
if (age % 400 == 0)
{
cout << "It is a leap year";
}
else if (age % 100==0)
{
cout << "It is not a leap year";
}
else if(age %4==0)
{
cout << "It is a leap year";
}
else
{
cout << "It is not a leap year ";
}
return 0;
}