#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

int max(int a, int b){
    return (a > b) ? a : b;
}

struct Node* createNode(int x){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = x;
    node->left = node->right = NULL;
    return node;
}

int tree_ht(struct Node* root){
    if(root == NULL)
        return 0;
    int left_ht = tree_ht(root->left);
    int right_ht = tree_ht(root->right);

    return max(left_ht, right_ht)+ 1; 
}

void print_whole_level(struct Node* root, int i){
    if(root == NULL)
        return;
    if(i == 1)
        printf("%d ",root->data);
    else if(i > 1){
        print_whole_level(root->left, i-1);
        print_whole_level(root->right, i-1);
    }
}

void printLevelOrder(struct Node* root){
    int h = tree_ht(root);
    for(int i=1; i<= h; i++){
        print_whole_level(root, i);
    }
}

int main(){
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->right = createNode(6);

    printLevelOrder(root);

    return 0;
}