#include<iostream>
#include<string>
using namespace std;

string Char;
int ascii;

void implicit_()
{
	ascii = Char[0];
    std::cout << "Value of the entered character is : " << ascii;
}

void inputf()
{
	std::cout << "\nEnter the character : ";
	std::cin >> Char;
	
}

int main()
{
	while(true)
	{
		inputf();
		if(Char == "exit" || Char == "Exit")
		{
		    break;
	    }
		implicit_();
	}
	return 0;
}