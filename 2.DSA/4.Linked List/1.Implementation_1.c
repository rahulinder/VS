#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void traversal(struct node *ptr){
    while(ptr != NULL){
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    //Memory allocation
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    //link head node to second node
    head->data = 7;
    head->next = second;

    // 2nd to 3rd
    second->data = 11;
    second->next = third;

    // 3rd to 4th
    third->data = 41;
    third->next = fourth;

    // 4th to NULL
    fourth->data = 66;
    fourth->next = NULL;

    traversal(head);
}