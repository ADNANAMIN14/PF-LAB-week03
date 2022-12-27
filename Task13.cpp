#include <iostream>
using namespace std;
main ()
{
int average, marks1,marks2,marks3;
cout<<"Enter Marks of First Student: ";
cin>>marks1;
cout<<"Enter Marks of Second Student: ";
cin>>marks2;
cout<<"Enter Marks of Third Student: ";
cin>>marks3;
average = (marks1 + marks2 + marks3) / 3;
cout<<"Average: "<<average <<endl;
}