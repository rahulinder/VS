#include<iostream>
using namespace std;

class kainth{
	int chikki;
	int jashan;
	
	public:
	void set(){
		cin>>chikki>>jashan;
	}
	void get(){
		cout<<chikki<<"+i"<<jashan;
	}
	
	kainth sum(kainth o1, kainth o2);
};

kainth kainth::sum(kainth o1, kainth o2){
	
	kainth o3;
	o3.chikki=o1.chikki+o2.chikki;
	o3.jashan=o1.jashan+o2.jashan;
	return o3;
}

int main(){
	
	kainth ob1,ob2,ob3;
	ob1.set();
	ob2.set();
	ob3=ob3.sum(ob1,ob2);
	ob3.get();
}