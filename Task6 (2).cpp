#include<iostream>
using namespace std;
main ()
{
float bagSize,bagPrice,squareFeetArea,costPerPounds,costPerSquareFeet;
cout<<"Enter Bag size in Pounds: ";
cin>>bagSize;
cout<<"Enter the cost of bag: ";
cin>>bagPrice;
cout<<"Enter area covered by each bag in square feet: ";
cin>>squareFeetArea;
costPerPounds = bagPrice / bagSize;
costPerSquareFeet = bagSize * squareFeetArea;
cout<<"Cost of the fertilizer per pounds: " <<costPerPounds;
cout<<endl;
cout<<"Cost of fertilizing the area per square feet: "<<costPerSquareFeet;

}