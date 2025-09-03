#include<iostream>
#include<string>
using namespace std;

char alpha;
int value;

void input(){
	std::cout<<"\nEnter a character : ";
	std::cin>>alpha;
}

void core(){
	if (value==65 || value==69 || value==73 || value==79 || value==85 || value==97 || value==101 || value==105 || value==111 || value==117 )
		std::cout<<alpha<<" is a VOWEL";
	else
		std::cout<<alpha<<" is a CONSONANT";
}
int main(){
	while(true){
		input();
		value= alpha;{
			if((value>=65 && value<=90) || (value>=97 && value<=122))
				core();
			else
				std::cout<<"INVALID INPUT, TRY AGAIN";
		}
	}
	return 0;
	
}