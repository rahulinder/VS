#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;

    cout<<*(&a)<<endl; // dreference pointer - points to the value stored in the address (&a)
    cout<<&a<<endl<<endl; // address of variable 'a'

    cout<<ptr<<endl; // ptr stores the address of 'a'
    cout<<*ptr<<endl<<endl; // *ptr points to the value stored at address stored in ptr 
    
    cout<<ptr2<<endl;// ptr2 stores the address of ptr
    cout<<*ptr2<<endl;// *ptr2 points to the address stored in pointer ptr
    cout<<**ptr2<<endl<<endl;// **ptr points to the value store at the address stored in pointer ptr

    int* ptr3 = NULL;
    cout<<ptr3<<endl;
    
return 0;
}