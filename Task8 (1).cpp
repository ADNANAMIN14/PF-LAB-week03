#include<iostream>
using namespace std;
main ()
{
int num1,num2,num3,num4,num5,sum;
int m1,m2,m3,m4;
cout<<"Enter four digit Number"<<endl;
cin>>num1;
num2 = num1 % 10;
m1 = num2;
num3 = num2 % 10;
m2 = num3;
num4 = num3 % 10;
m3 = num4;
num5 = num4 % 10;
m4 = num5;
sum = m1 + m2 +m3 + m4 ;
cout<<"Result: "<<sum;
}

