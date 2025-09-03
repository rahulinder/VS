#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int num;
	
	while(true){
		std::cout<<"\nEnter number : ";
	    std::cin>>num;
	    if (num%2==0)
		std::cout<<num<<" is an EVEN number";
	    else
		std::cout<<num<<" is a ODD number";
	    
	}
		
	return 0;

}