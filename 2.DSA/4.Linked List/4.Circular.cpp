#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
void traverse(node* head){
    int i = 1;
    node* ptr;
    ptr = new node();
    ptr = head;
    cout<<"\t Element of node "<<i<<" : "<<ptr->data<<endl; i++;
    ptr = ptr->next;

    while(ptr != head){
        cout<<"\t Element of node "<<i<<" : "<<ptr->data<<endl; i++;
        ptr = ptr->next;
    }
}

/*// code with harry (not efficient due to while loop)
node* atfirst(node* head, int data){
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
// gemini code O(1)
node* atfirst(node* end, int data){
    node* ptr = new node();
    ptr->data = data;

    ptr->next = end->next;
    end->next = ptr;
    
    return end;
}

int main(){
    node* head = new node();     node* second = new node();
    node* third = new node();     node* fourth = new node();
    node* fifth = new node();      node* end = new node();

    head->data = 10;                    second->data = 20;
    head->next = second;         second->next = third;

    third->data = 30;                   fourth->data = 40;
    third->next = fourth;           fourth->next = fifth;

    fifth->data = 50;                    end->data = 101;
    fifth->next = end;                 end->next = head;

    cout<<"\t--------Original--------"<<endl;
    traverse(head);

    end = atfirst(end, 5); //atfirst returns end
    head = end->next;
    cout<<"\t--------Original--------"<<endl;
    traverse(head);
    return 0;
}