#include<iostream>
using namespace std;

int main(){
	
	int num;
	int sum=0;
	
	std::cout<<"num : ";
	std::cin>>num;
	
	for(int i=0;i<=num;i++)
		sum=sum+i;
		std::cout<<sum<<std::endl;
	
	
	return 0;
}