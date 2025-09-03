#include<iostream>
using namespace std;

void add(int &one){
	
	one=one+10;
	cout<<one<<endl;
}
int main(){
	
	int num=10;
	add(num);
	cout<<num;
	
	return 0;
}