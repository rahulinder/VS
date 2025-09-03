#include<iostream>
#include<string>
using namespace std;

int no_items;//value assigned after input

class shop{
    int id[50]={0};
    int price[50]={0};
    
    public:
    void id_price();
    void display();
};

void shop::id_price(){

    for(int i=0;i<=(no_items-1);i++){
        cout<<"\nEnter the item id : ";
        cin>>id[i];
        cout<<"Enter the price of item with ID="<<id[i]<<" :";
        cin>>price[i];
    }
}

void shop::display(){
    cout<<endl<<endl;
    for(int i=0;i<=(no_items-1);i++){
        cout<<"Item with ID:"<<id[i]<<" has price $"<<price[i]<<endl;
    }
}

int main(){
    string s;
    cout<<"Enter the number of items: ";
    cin>>no_items; // user inputs no. of items 

    shop inputs;
    inputs.id_price(); //calls id_price for id and price input
    inputs.display();

return 0;
}
