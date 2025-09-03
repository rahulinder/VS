#include<iostream>
#include<string>
using namespace std;

//T(°C) = (T(°F) - 32) × 5/9

float f;
float c;
int option;

void f_to_c(){
	std::cout<<"Enter the temprature in F : ";
	std::cin>>f;
	
	std::cout<<f<<" Farenheit "<<" is "<<((f-32)*5/9)<<" Celsius ";
}

void c_to_f(){
	std::cout<<"Enter the temprature in C : ";
	std::cin>>c;
	
	std::cout<<c<<" Celsius "<<" is "<<(9/5*c)+32<<" Farenheit ";
}

void input(){
	std::cout<<"\nChoose the converting option:\n1.Farenheit to Celsius\n2.Celsius to Farenheit\n3.Exit\nEnter option (1,2,3) : ";
	std::cin>>option;
}

void options(){
	if(option==1)
		f_to_c();
	else if(option==2)
		c_to_f();
}

int main(){
	
	while(true){
		input();{
			if(option==3)
				break;
		}
		options(); 
	}
	return 0;
}