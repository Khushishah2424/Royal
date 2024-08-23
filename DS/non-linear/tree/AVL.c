// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//    int data;
//    struct node *left;
//    struct node *right;
//    struct node *height;
    
// };

// int calculateHeight(struct node *root){
//     int lh = 0;
//     int  rh = 0;

//     if(root->left != NULL){
//         lh = root->left->height;
//     }
//     if(root->right != NULL){
//         lh = root->right->height;
//     }
//     if(lh > rh){
//         return lh + 1;
//     }
//     else{
//         return rh + 1;
//     }

// }


// void inOrder(){
    
// }

// struct node* addnote(struct node *root,int data){
//     if(root == NULL){
//         root = malloc(sizeof(struct node));
//         root->data = data;
//         root->left = NULL;
//         root->right = NULL;
//         return root;
//     }
//     else if(data > root->data){
//         struct node *tmp =  malloc(sizeof(struct node));
//         tmp->data = data;
//         tmp->left = NULL;
//         tmp->right = NULL;
//         root->right = tmp;
//     }
//     else{
//         struct node *tmp =  malloc(sizeof(struct node));
//         tmp->data = data;
//         tmp->left = NULL;
//         tmp->right = NULL;
//         root->left = tmp;
//     }
//     return root;
// }
// int main(){
//     struct node *root = NULL;
//     root = addnote(root,10);
//     addnote(root,23);
//     addnote(root,1);
// }
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
    int height;
};


int CalculateHeight(struct node *root){
    int rh = 0;
    int lh = 0;
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

int BalanceFactor(struct node *root){
    int lh =0;
    int rh = 0;
    if(root->left != NULL){
        
    }
} 


struct node* Addnote(struct node* root,int num){
    if(root ==  NULL){
        root = malloc(sizeof(struct node));
        root->data = num;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else{
        if(num > root->data){
            root->right = Addnote(root->right,num);
        }
        else{
            root->left = Addnote(root->left,num);
        }
        return root;

        root->height = 1+ CalculateHeight(root);
    }
}

void Inorder(struct node *root){
    if(root != NULL){
        Inorder(root->left);
        printf(" %d",root->data);
        Inorder(root->right);
    }
}

int main(){
    struct node *root = NULL;
    root = Addnote(root,20);
    Addnote(root,30);
    Addnote(root,10);
    Inorder(root);
    return 0;
}