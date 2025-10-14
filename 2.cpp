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
    ListNode* result = new ListNode();
    ListNode** curr = &result;    
    int carry = 0;
    int sum = 0;

    while(l1 == nullptr || l2 ==nullptr || carry != 0){
        sum = (l1->val + l2->val);
        if(sum%10 == 0 && sum < 10){
            (*curr)->val = sum;
            *curr = (*curr)->next;
        }
        else if(sum%10 == 0 && sum >= 10){
            (*curr)->val = sum / 10;
            *curr = (*curr)->next;

            int x = sum - 10;
            (*curr)->val = x;
            *curr = (*curr)->next;
        }
        else if(sum%10 != 0){

        }
        l1 = l1->next;
        l2 = l2->next;
    }
}

int main(){
    ListNode* headA = new ListNode();    ListNode* headB = new ListNode();
    ListNode* A2 = new ListNode();    ListNode* B2 = new ListNode();
    ListNode* A3 = new ListNode();    ListNode* B3 = new ListNode();

    headA->val = 2;     headB->val = 5;
    headA->next = A2;   headB->next = B2;

    A2->val = 4;    B2->val = 0;
    A2->next = A3;    B2->next = B3;

    A3->val = 3;    B3->val = 8;
    A3->next =nullptr;    B3->next =nullptr;

    // display(headA);
    // display(headB);

    ListNode* results;
    
    results = addTwoNumbers(headA, headB);
    display(results);

    return 0;
}