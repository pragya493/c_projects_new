#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int x){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = x;
    node->left = node->right = NULL;
    return node;
}

void printInorder(struct Node* node){
    if(node == NULL){
        return;
    }
    printInorder(node->left);
    printf("%d ",node->data);
    printInorder(node->right);
}

void printPreorder(struct Node* node){
    if(node == NULL){
        return;
    }
    printf("%d ",node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}

void printPostorder(struct Node* node){
    if(node == NULL){
        return;
    }
    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d ",node->data);
}

int main(){
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);

    printInorder(root);
    printf("\n");
    printPreorder(root);
    printf("\n");
    printPostorder(root);

    return 0;
}

/*
4 2 5 1 3 6 
*/