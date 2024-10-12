//3. Write a program to print Fibonacci Series up to user defined number.

#include<iostream>
using namespace std;
int main()
{
int n , x , y ,sum;
cout << "Enter your max number: ";
cin >> n;
x=0;
y=1;
sum=0;
while (sum<n)
{
cout << "\n"<<sum;
x = y;
y = sum;
sum = x + y;
}
return 0;
}