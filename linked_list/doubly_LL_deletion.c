#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* create_dll_node(int data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

struct Node* arr_to_linked_list(int* arr, int n){
    struct Node* root = create_dll_node(arr[0]);
    struct Node* prv = root;
    for(int i=1; i < n; i++){
        struct Node* curr = create_dll_node(arr[i]);
        prv->next = curr;
        curr->prev = prv;
        prv = curr;
    }
    return root;
}

void print_linked_list(struct Node* root){
    struct Node* temp = root;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* delete_head(struct Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    struct Node* temp = head;
    
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    
    free(temp);
    return head;
}

struct Node* delete_tail(struct Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    struct Node* new_tail = temp->prev;
    new_tail->next = NULL;
    temp->prev= NULL;
    free(temp);
    return head;
}

struct Node* delete_by_pos(struct Node* head, int pos){
    if(head == NULL){
        return NULL;
    }
    struct Node* temp = head;
    int count=0;
    while(temp != NULL){
        count++;
        if(count == pos){
            break;
        }
        temp = temp->next;    
    }
    struct Node* prv = temp->prev;
    struct Node* front = temp->next;
    if(prv == NULL && front == NULL){
        return NULL;
    }
    else if(prv == NULL){
        return delete_head(head);
    }
    else if(front == NULL){
        return delete_tail(head);
    }
    prv->next = front;
    front->prev = prv;

    temp->prev = NULL;
    temp->next = NULL;
    free(temp);
    return head;
}

struct Node* delete_b4_val(struct Node* head, int val){
    if(head == NULL){
        return NULL;
    }
    struct Node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            break;
        }
        temp = temp->next;    
    }
    struct Node* prv = temp->prev;
    struct Node* front = temp->next;
    if(prv == NULL && front == NULL){
        return NULL;
    }
    else if(prv == NULL){
        return delete_head(head);
    }
    else if(front == NULL){
        return delete_tail(head);
    }
    prv->next = front;
    front->prev = prv;

    temp->prev = NULL;
    temp->next = NULL;
    free(temp);
    return head;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct Node* root = arr_to_linked_list(arr, n);
    print_linked_list(root);
    struct Node* new_head = delete_head(root);
    print_linked_list(new_head);
    new_head = delete_tail(new_head);
    print_linked_list(new_head);
    new_head = delete_by_pos(new_head,1);
    print_linked_list(new_head);
    new_head = delete_b4_val(new_head,5);
    print_linked_list(new_head);
    return 0;
}

/*
1 2 3 4 5 6 
2 3 4 5 6
2 3 4 5
3 4 5
3 4
*/