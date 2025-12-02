#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void display(node* head){
    node* curr = head;
    while(curr != nullptr){
        cout<<curr->data<<" —> ";
        curr = curr->next;
    }
    cout<<"NULL";
}

node* merge(node* heada, node* headb){
    node* curra = heada;
    node* currb = headb;

    //If one or both of the lists are empty
    if(headb == nullptr){
        return heada;
    }
    if(heada == nullptr){
        return headb;
    }

    //Finding the new head of the merged list
    node* mergedHead = nullptr;

    if(heada->data <= headb->data){
        mergedHead = heada;
        curra = curra->next;
    }
    else{
        mergedHead = headb;
        currb = currb->next;
    }

    node* currMerged = mergedHead;
    while(curra != nullptr && currb != nullptr){
        if(curra->data <=currb->data){
            currMerged->next = curra;
            curra = curra->next;
        }
        else{
            currMerged->next = currb;
            currb = currb->next;

        }
        currMerged = currMerged->next;
    }

    if(curra == nullptr){
        currMerged->next = currb;
    }
    else{
        currMerged->next = curra;
    }
    return mergedHead;
}

int main(){
    node* heada = new node();    node* a2 = new node();
    node* a3 = new node();       node* a4 = new node();

    heada->data = 1;            a2->data = 3;
    heada->next = a2;           a2->next = a3;

    a3->data = 5;               a4->data = 7;
    a3->next = a4;              a4->next = nullptr;

    node* headb = new node();    node* b2 = new node();
    node* b3 = new node();       node* b4 = new node();

    headb->data = 2;            b2->data = 4;
    headb->next = b2;           b2->next = b3;

    b3->data = 6;               b4->data = 8;
    b3->next = b4;              b4->next = nullptr;

    cout<<"List A :\n";
    display(heada);

    cout<<"\n\nList B :\n";
    display(headb);
    
    node* merged;// = new node();
    
    merged = merge(heada, headb);
    
    cout<<"\n\nLists A & B Merged :\n";
    display(merged);

    return 0;
}