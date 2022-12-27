#include<iostream>
using namespace std;
main ()
{
float subject1,subject2,subject3,subject4,subject5,percentage;
string name;
cout<<"Your Name: ";
cin>>name;
cout<<"Enter subject 1 marks: ";
cin>>subject1;
cout<<"Enter subject 2 marks: ";
cin>>subject2;
cout<<"Enter subject 3 marks: ";
cin>>subject3;
cout<<"Enter subject 4 marks: ";
cin>>subject4;
cout<<"Enter subject 5 marks: ";
cin>>subject5;
cout<<"Name: "<<name;
percentage = (subject1 + subject2 + subject3 + subject4 + subject5 * 100 )  /  500;
cout<<endl; 
cout<<"Percentage = "<<percentage;

} 