#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL , *last = NULL;

void addnote(int n){
    struct node *tmp;
    if(head == NULL){
        head = malloc(sizeof(struct node));
        head->data = n;
        head->next = NULL;
        last = head;
    }
    else{
        tmp = malloc(sizeof(struct node));
        tmp->data = n;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

int main(){
    addnote(100);
    addnote(200);
    printf("\n");
    return 0;
}