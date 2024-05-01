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

void display(){
    struct node *p;
    if(p == NULL){
        printf("Empty");
    }
    else{
         p = head;
        while(p != NULL){
            printf("%d",p->data);
            p = p->next;
            printf(" ");
        }
    }

}

void sum(){
    struct node *p;
    int sum = 0;
    p = head;
    while(p != NULL){
            sum = sum + p->data;
            p = p->next;
    }
     printf("\nsum = %d",sum);   
    


}

int main(){
    addnote(100);
    addnote(200);
    addnote(300);
    // printf("%d %d %d",head->data,head->next->data,head->next->next->data);
    display();
    // sum();
    return 0;
}