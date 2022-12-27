#include<iostream>
using namespace std;
main()
{
float vegetableCoin,fruitCoin,totalKgVegetable,totalKgFruit,totalVegetablePrice,totalFruitPrice,total,totalInRupees;
cout<<"Enter vegetable coin per kilograms: " ;
cin>>vegetableCoin ;
cout<<"Enter fruit price per kilograms: ";
cin>>fruitCoin;
cout<<"Enter total kilograms of vegetable: ";
cin>>totalKgVegetable;
cout<<"Enter total kilograms of fruit: ";
cin>>totalKgFruit;
totalVegetablePrice = vegetableCoin * totalKgVegetable;
totalFruitPrice = fruitCoin * totalKgFruit;
total = totalVegetablePrice + totalFruitPrice ;
totalInRupees= total / 1.96;
cout<<"Total Earning: "<<totalInRupees;
}
