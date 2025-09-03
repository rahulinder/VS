#include <iostream>


using namespace std;

int main()
{
    int x=6 , y=4;

    std::cout<<"Value of x and y are "<< x<<" and "<<y<<" respectively.";
	
	swap(x,y);	
	
	std::cout<<"\nSwapped value of x and y are "<< x<<" and "<<y<<" respectively.";

    return 0;
}