#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node*right;
    struct node* left;
    int data;
};

struct node* newNode(int data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

int size(struct node* root){
    if(root==NULL)
        return;
    else{
        return(size(root->left)+size(root->right)+1);
    }
}

int main(){
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    printf("size of tree is %d",size(root));
    return 0;
}
