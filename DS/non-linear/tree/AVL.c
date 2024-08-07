#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *left;
   struct node *right;
   struct node *height;
    
};

int calculateHeight(struct node *root){
    int lh = 0;
    int  rh = 0;

    if(root->left != NULL){
        lh = root->left->height;
    }
    if(root->right != NULL){
        lh = root->right->height;
    }
    if(lh > rh){
        return lh + 1;
    }
    else{
        return rh + 1;
    }

}

void inOrder(){
    
}

struct node* addnote(struct node *root,int data){
    if(root == NULL){
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else if(data > root->data){
        struct node *tmp =  malloc(sizeof(struct node));
        tmp->data = data;
        tmp->left = NULL;
        tmp->right = NULL;
        root->right = tmp;
    }
    else{
        struct node *tmp =  malloc(sizeof(struct node));
        tmp->data = data;
        tmp->left = NULL;
        tmp->right = NULL;
        root->left = tmp;
    }
    return root;
}
int main(){
    struct node *root = NULL;
    root = addnote(root,10);
    addnote(root,23);
    addnote(root,1);
}