#include <iostream>
using namespace std;
main ()
{
int number1,number2,div1,div2,div3,position1,position2,position3,position4,sum,multiply,no2Position1,no2Position2,no2Position3,no2Position4,no2div1,no2div2,no2div3,no2Sum,no2Multiply;
cout<<"Enter first 4 digits No: ";
cin>>number1;
cout<<"Enter Second 4 digits No: ";
cin>>number2;
position4 = number1 % 10;
div1 = number1 / 10;
position3 = div1 % 10;
div2 = div1 / 10;
position2 = div2 % 10;
div3 = div2 / 10;
position1 = div3 % 10;
cout<<"First Number"<<endl;
sum = position1 + position3;
cout<<"Sum: "<<sum<<endl;
multiply = position2 * position4;
cout<<"Multiply: "<<multiply<<endl;
no2Position4 = number2 % 10;
no2div1 = number2 / 10;
no2Position3 = no2div1 % 10;
no2div2 = no2div1 / 10;
no2Position2 = no2div2 % 10;
no2div3 = no2div2 / 10;
no2Position1 = no2div3 % 10;
no2Sum = no2Position1 + no2Position3;
no2Multiply = no2Position2 * no2Position4;
cout<< "Second Number"<<endl;
cout<<"Sum: "<<no2Sum<<endl;
cout<<"Multiply: " <<no2Multiply;
}