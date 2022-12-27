#include<iostream>
using namespace std;
main ()
{
string name;
float matric,intermediate,ecat,matricPercentage,intermediatePercentage,ecatPercentage,aggregate;
cout<<"Enter Your Name: ";
cin>>name;
cout<<"Give Your Matric Marks: ";
cin>>matric;
cout<<"Give Your Intermediate Marks: ";
cin>>intermediate;
cout<<"Give Your Ecat Marks: ";
cin>>ecat;
matricPercentage = (matric / 1100) * 10;
intermediatePercentage = (intermediate / 1100) * 40;
ecatPercentage = (ecat / 400) * 50;
aggregate = matricPercentage + intermediatePercentage + ecatPercentage;
cout<<"Name: "<<name <<endl;
cout<<"Aggregate: "<<aggregate <<endl;

}