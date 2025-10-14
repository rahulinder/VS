#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
};

void display(ListNode* head){
    cout<<endl;
    ListNode* curr = head;

    while(curr != nullptr){
        cout<<curr->val<<" —> ";
        curr = curr->next;
    }
    cout<<"NULL";
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){

    ListNode* dummyHead = new ListNode();
    ListNode* current = dummyHead;
    int carry = 0;

    while(l1 != nullptr || l2 != nullptr || carry != 0){
        int val1 = (l1 != nullptr) ? l1->val : 0;
        int val2 = (l2 != nullptr) ? l2->val : 0;
        
        // This is the key arithmetic step
        int sum = val1 + val2 + carry;
        carry = sum / 10; 
        int digit = sum % 10; 

        ListNode* newNode = new ListNode();
        newNode->val = digit;
        current->next = newNode;
        current = current->next;

        if(l1 != nullptr) l1 = l1->next;
        if(l2 != nullptr) l2 = l2->next;
    }

    ListNode* resultHead = dummyHead->next;
    delete dummyHead; 
    return resultHead;
}

int main(){
    ListNode* headA = new ListNode();     ListNode* headB = new ListNode();
    ListNode* A2 = new ListNode();        ListNode* B2 = new ListNode();
    ListNode* A3 = new ListNode();        ListNode* B3 = new ListNode();

    // List A: 2 -> 4 -> 3 (Represents number 342)
    headA->val = 2;
    headA->next = A2;
    A2->val = 4;
    A2->next = A3;
    A3->val = 3;
    A3->next = nullptr;

    // List B: 5 -> 0 -> 8 (Represents number 805)
    headB->val = 5;
    headB->next = B2;
    B2->val = 0;
    B2->next = B3;
    B3->val = 8;
    B3->next = nullptr;

    // 342 + 805 = 1147
    // Expected Result List: 7 -> 4 -> 1 -> 1 -> NULL

    cout<<"List 1:";
    display(headA);
    cout<<"\nList 2:";
    display(headB);

    ListNode* results;
    results = addTwoNumbers(headA, headB);

    cout<<"\n\nResult of Addition:";
    display(results);

    return 0;
}