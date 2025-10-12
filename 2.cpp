node* reverseList(node* head){
    node* prev = NULL;
    node* curr = head;
    node* next = NULL;

    while(curr != NULL){
        // Store the next node
        next = curr->next;
        
        // Reverse the current node's pointer
        curr->next = prev;

        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }
    // prev is the new head of the reversed list
    head = prev;
    return head;
}