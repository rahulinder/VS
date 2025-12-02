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

// void keyCount(node** head){
//     node* curr = *head;
//     node* prev = nullptr;
//     node* temp = nullptr;

//     int key = (*head)->data;
//     cout<<"\n\nEnter Reoccuring Data to be deleted : ";cin>>key;

//     int count = 0;

//     while(curr != nullptr){
//         if(curr->data == key){
//             count++;

//             if(prev == nullptr){
//                 *head = curr->next;// Deleting head node
//             }
//             else{
//                 prev->next = curr->next;//Deleting the node from the middle or end
//             }
//             temp = curr;
//             curr = curr->next;
            
//             delete(temp);
//         }
//         else{
//             prev = curr;
//             curr = curr->next;
//         }

//         if(count == 1){
//             cout<<"\nTotal "<<count<<" occurences of "<<key
//             <<"\nDeleting all the instances..."; 
//         }
//         else if(count == 0){
//             cout<<"\n!No instance found...";
//         }
//     }
// }

void keyCount(node** head){
    node* curr = *head;
    node* prev = nullptr;
    node* temp = nullptr;

    bool go = false;

    int key = 0;
    cout<<"\n\nEnter Data to be deleted : ";cin>>key;

    int count = 0;

    while(curr != nullptr){
        if(curr->data == key){
            count++;
            
            if(count > 1){
                go = true;
            }

            if(go){

                if(prev == nullptr){
                    *head = curr->next; // Deleting the head node
                } 
                else{
                    prev->next = curr->next; // Deleting a middle or tail node
                }
                
                temp = curr; // Mark node for deletion
                curr = curr->next; // Advance curr
                delete temp;       // Delete the old node
            }
            else{
                prev->next = curr->next; // Deleting a middle or tail node
            }
        } 
        else{
            prev = curr;
            curr = curr->next;
        }
    }

    if(count == 0){
        cout<<"\n!Data not in the list...\n";
    } else {
        cout<<"\nDeleted " << --count << " instance(s) of " << key << ".\n";
    }
}

int main(){
    node* head = new node();    node* n2 = new node();
    node* n3 = new node();      node* n4 = new node();
    node* n5 = new node();      node* n6 = new node();
    node* n7 = new node();      node* n8 = new node();
    node* n9 = new node();      node* n10 = new node();

    head->data = 1;             n2->data = 5;
    head->next = n2;            n2->next = n3;

    n3->data = 8;               n4->data = 4;
    n3->next = n4;              n4->next = n5;

    n5->data = 5;               n6->data = 8;
    n5->next = n6;              n6->next = n7;

    n7->data = 7;               n8->data = 8;
    n7->next = n8;              n8->next = n9;

    n9->data = 9;               n10->data = 1;
    n9->next = n10;             n10->next = nullptr;

    cout<<"Original List\n";
    display(head);
    
    keyCount(&head);
    
    cout<<"\nUpdated List\n";
    display(head);

    return 0;
}