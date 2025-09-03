/*
title prompt
ask rooms
display fixed value, no. of rooms, total amount, tax
*/
#include<iostream>
using namespace std;

int main(){
	
	int rooms;
		
	cout<<"Welcome to Badesha's room cleaning service"<<endl;
	
	cout<<"\nNo. of room you wants to be cleaned : ";
	cin>>rooms;
	
	double room_cost = 1000*rooms;
	double tax = 0.05*room_cost;
	double total = room_cost + tax;
	
	cout<<"\nCost per room = $1000";
	cout<<"\nCost for "<<rooms<<" rooms = $"<<room_cost;
	cout<<"\nTax = 5% = "<<tax;
	cout<<"\n====================================";
	cout<<"\nTotal cost = $"<<total;
	
	return 0;
}