#include<iostream>
using namespace std;
main ()
{
int n,mod1,mod2,mod3,mod4,sum,div1,div2,div3;
cout<<"Enter 4 digits No: ";
cin>>n;
mod1=n%10;
div1=n / 10;
mod2=div1%10;
div2=div1/10;
mod3= div2%10;
div3=div2/10;
mod4=div3%10;
sum = mod1 + mod2 + mod3 + mod4;
cout<<"Sum = "<<sum;
}
