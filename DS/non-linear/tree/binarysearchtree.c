#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *left;
   struct node *right;
};

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
void Inorder(struct node *root){
    if(root != NULL){
    Inorder(root->left);
    printf(" %d",root->data);
    Inorder(root->right);
    // printf("%d",root->data);
    }
}
void Preorder(struct node *root){
    if(root != NULL){
        printf(" %d",root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Postorder(struct node *root){
    if(root != NULL){
       Postorder(root->left);
       Postorder(root->right);
       printf(" %d",root->data);
    }
}


// void Max(struct node *root){
//     if(root == NULL){
//         return;
//     }2
//     else if(root->right == NULL){
//         printf("%d = Max",root->data);
//     }
//     else{

//     }
// }

void search(struct node *root,int key){
    if(root == NULL){
        printf("\n%d Not Found",key);
    }
    else if(root->data == key){
        printf("\n%d Found",key);
    }
    else if(key > root->data){
        search(root->right,key);
    }
    else{
        search(root->left,key);
    }
}

int main(){
    struct node *root = NULL;
    root = addnote(root,10);
    addnote(root,23);
    addnote(root,1);
    // printf("%d %d %d",root->data,root->left->data,root->right->data);
    // Inorder(root);
    // Preorder(root);
    // Postorder(root);
    search(root,10);
    search(root,120);
    search(root,23);  
    // Max(root);
    return 0;
}
