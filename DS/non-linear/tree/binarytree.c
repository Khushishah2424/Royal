#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
}*root = NULL;
int main(){
    root = malloc(sizeof(struct node));
    root->data = 500;
    root->left = NULL;
    root->right = NULL;


    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = 30;
    temp->left = NULL;
    temp->right = NULL;

    root->left = temp;


    temp = malloc(sizeof(struct node));
    temp->data = 40;
    temp->left = NULL;
    temp->right = NULL;

    root->right = temp;

    printf("%d %d %d",root->data,root->left->data,root->right->data);
    return 0;
    
}