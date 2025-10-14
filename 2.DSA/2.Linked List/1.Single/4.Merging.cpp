#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void display(node* head){
    cout<<endl;
    node* curr = head;

    do{
        cout<<curr->data<<" —> ";
        curr = curr->next;
    }while(curr != NULL);
    cout<<"NULL";
}

int countA(node* headA){
    node* currA = headA;
    
    int A = 0;
    while(currA != NULL){
        currA = currA->next;
        A++;
    }
    return A;
}
int countB(node* headB){
    node* currB = headB;

    int B = 0;
    while(currB != NULL){
        currB = currB->next;
        B++;
    }
    return B;
}

node* createNode(int total){
    int i = 1;
    node* headn = new node();
    while(i+1 <= total){
        node* ni = new node();
        i++;
    }
}

node* initialize(node* headA, node* headB){

}

node* merge(node* headA, node* headB){
    if(headA == NULL){
        return headB;
    }
    if(headB == NULL){
        return headA;
    }

    node* mergedHead = NULL;

    if(headA->data <= headB->data){
        mergedHead = headA;
        headA = headA->next;
    }
    else{
        mergedHead = headB;
        headB = headB->next;
    }

    node* curr = mergedHead;
    while(headA != NULL && headB != NULL){
        if(headA->data <= headB->data){
            curr->next = headA;
            headA = headA->next;
        }
        else{
            curr->next = headB;
            headB = headB->next;    
        }
        curr = curr->next;
    }

    if(headA == NULL){
        curr->next = headB;
    }
    else{
        curr->next = headA;
    }

    return mergedHead;
}

int main(){
    node* headA = new node();    node* headB = new node();
    node* A2 = new node();          node* B2 = new node();
    node* A3 = new node();          node* B3 = new node();
    node* A4 = new node();          node* B4 = new node();
    node* A5 = new node();          node* B5 = new node();
    node* A6 = new node();    

    headA->data = 0;            headB->data = 1;
    headA->next = A2;          headB->next = B2;

    A2->data = 2;                   B2->data = 3;
    A2->next = A3;                 B2->next = B3;

    A3->data = 4;                   B3->data = 5;
    A3->next = A4;                 B3->next = B4;

    A4->data = 6;                    B4->data = 7;
    A4->next = A5;                  B4->next = B5;

    A5->data = 8;                   B5->data = 9;
    A5->next = A6;                 B5->next = NULL;

    A6->data = 10;
    A6->next = NULL;

    // display(headA);
    // display(headB);

    // cout<<"\nTotal Nodes in List 1 : "<<countA(headA);
    // cout<<"\nTotal Nodes in List 2 : "<<countB(headB);

    node* merged;
    merged = merge(headA, headB);
    display(merged);

    return 0;
}