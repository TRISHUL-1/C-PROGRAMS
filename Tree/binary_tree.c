#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *left, *right;
}node;

void in_order(node *root){

    if(root == NULL) return;

    in_order(root->left);

    printf("%d ", root->data);
    
    in_order(root->right);

}

void pre_order(node *root){

    if(root == NULL) return;

    printf("%d ", root->data);

    pre_order(root->left);
    
    pre_order(root->right);

}

void post_order(node *root){

    if(root == NULL) return;

    post_order(root->left);

    post_order(root->right);
    
    printf("%d ", root->data);

}

node* create_node(int data){
    node *root = (node *)malloc(sizeof(node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;

    return root;
}

void main(){
    node *root = create_node(2);
    root->left = create_node(1);
    root->right = create_node(3);
    root->left->left = create_node(4);
    root->left->right = create_node(5);

    printf("In-order: ");   in_order(root);     printf("\n");
    printf("Pre-order: ");  pre_order(root);    printf("\n");
    printf("Post-order: "); post_order(root);   printf("\n");
}