#include<iostream>
#include<string>
using namespace std;

class node{
    public:
    string word;
    node* prev;
    node* next;
};

void display(node* head){
    node* curr = head;
    do{
        cout<<curr->word<<" —> ";
        curr = curr->next;
    }while(curr->next != nullptr);
    cout<<curr->word;
}

int count(node* head){
    int count = 0;
    node* curr = head;
    do{
        curr = curr->next;
        count++;
    }while(curr != nullptr);
    return count;
}

void palindrome(node* head){
    node* front = head;
    node* rear = head;
    int c = count(head);
    bool go = false;

    if(c%2 != 0){
        if(c == 1){
            cout<<"\nIs a Palindrome\n";
            return;
        }
        else{
            c--;
        }
    }

    while(rear->next != head){
        rear = rear->next;
    }

    for(int i = 0; i<(c/2); i++){
        if(front->word != rear->word){
            cout<<"\nNot Palindrome\n";
            go = false;
            break;
        }
        else{
            cout<<front->word<<" & "<<rear->word<<endl;
            front = front->next;
            rear = rear->prev;
            go = true;
        }
    }

    if(go){
        cout<<"\nIs a Palindrome\n";
    }
}

int main(){
    node* head = new node();        node* n2 = new node();
    node* n3 = new node();          node* n4 = new node();      
    node* n5 = new node();                  

    head->word = 'L';               n2->word = 'E';
    head->prev = nullptr;           n2->prev = head;
    head->next = n2;                n2->next = n3;

    n3->word = 'V';                 n4->word = 'E';
    n3->prev = n2;                  n4->prev = n3;
    n3->next = n4;                  n4->next = n5;

    n5->word = 'L';
    n5->prev = n4;
    n5->next = nullptr;

    display(head);

    // cout<<endl<<endl;
    // cout<<count(head);
    
    // cout<<endl<<endl;
    // palindrome(head);

    return 0;
}