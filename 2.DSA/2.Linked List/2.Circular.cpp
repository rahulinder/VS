#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
void traverse(node* head){
    int i = 1;
    node* ptr = new node();
    ptr = head;
    cout<<"\t Element of node "<<i<<" : "<<ptr->data<<endl; i++;
    ptr = ptr->next;

    while(ptr != head){
        cout<<"\t Element of node "<<i<<" : "<<ptr->data<<endl; i++;
        ptr = ptr->next;
    }
}

/*node* atfirst(node* head, int data){// code with harry (not efficient due to while loop)
    node* ptr = new node(); // new node created
    ptr->data = data; //new data inserted to ptr's data

    node* p = head;
    while(p->next != head){
        p = p->next;
    }
    
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
*/

node* atfirst(node* end, int data){// O(1)
    node* ptr = new node();
    ptr->data = data;// data of new node will be stored in ptr's data 

    ptr->next = end->next;// ptr's next will store address of head node
    end->next = ptr;// end will point to new head node ptr
    
    return end;
}

node* atend(node* end, int data){//same as at first 
    node* ptr = new node();
    ptr->data =  data;
    ptr->next = end->next;
    end->next = ptr;

    return end;
}

void inbwt(node* n1, int data){    //inserting between node 3 and 4
    node* ptr = new node();
    ptr->data = data;
    ptr->next = n1->next;

    n1->next = ptr;
}

int main(){
    node* head = new node();     node* second = new node();
    node* third = new node();     node* fourth = new node();
    node* fifth = new node();      node* end = new node();

    head->data = 10;                    second->data = 20;
    head->next = second;         second->next = third;

    third->data = 30;                   fourth->data = 50;
    third->next = fourth;           fourth->next = fifth;

    fifth->data = 60;                    end->data = 101;
    fifth->next = end;                 end->next = head;

    cout<<"\t--------Original--------"<<endl;
    traverse(head);

    end = atfirst(end, 5); // atfirst returns end here
    head =/*(ptr)*/ end->next; // 'end->next is ptr' points to new head nod ptre
    cout<<endl<<"\t---------At First--------"<<endl;
    traverse(head);
    
    end = atend(end, 102);
    cout<<endl<<"\t---------At End---------"<<endl;
    traverse(head);
    
    inbwt(third,40);
    cout<<endl<<"\t-------In Between------"<<endl;
    traverse(head);
    
    return 0;
}