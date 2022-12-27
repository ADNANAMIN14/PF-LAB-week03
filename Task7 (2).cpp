#include <iostream>
using namespace std;
main ()
{ 
float adultTicketsPrice,childTicketsPrice,adultTicketsSold,childTicketsSold,percentage,adultAmount,childAmount,totalAmount,donation,remainingAmount;
string movieName;
cout<<"Movie Name: ";
cin>>movieName;
cout<<"Enter the Adult Tickets Price: ";
cin>>adultTicketsPrice;
cout<<"Enter Child Ticket Price: ";
cin>>childTicketsPrice;
cout<<"Enter Adult Ticket Sold: ";
cin>>adultTicketsSold;
cout<<"Enter Child Tickets Sold: ";
cin>>childTicketsSold;
cout<<"Enter the Percentage to the charity: ";
cin>>percentage;
adultAmount = adultTicketsPrice * adultTicketsSold;
childAmount = childTicketsPrice * childTicketsSold;
totalAmount = adultAmount + childAmount;
donation = totalAmount * percentage / 100;
remainingAmount = totalAmount - donation;
cout<<"Total Amount:  "<<totalAmount;
cout<<endl;
cout<<"Amount After Donation: "<<remainingAmount;
}



