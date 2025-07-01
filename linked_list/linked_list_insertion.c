#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* create_node(int data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct Node* arr_to_linked_list(int* arr, int n){
    struct Node* head = create_node(arr[0]);
    struct Node* prev = head;
    for(int i=1; i<n; i++){
        struct Node* curr = create_node(arr[i]);
        //updating the next of prev
        prev->next =  curr;
        prev = curr;
    }
    return head;
}

void print_ll(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp-> next;
    }
    printf("\n");
}

struct Node* insert_head(struct Node* head, int data){
    struct Node* new_head = create_node(data);
    new_head->next = head;
    return new_head;
}

struct Node* insert_tail(struct Node* head, int data){
    //edge case
    if(head == NULL)
        return create_node(data);
    
    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = create_node(data);
    return head;
}

struct Node* insert_by_pos(struct Node* head, int data, int pos){
    if(head == NULL){
        if(pos == 1){
            return create_node(data);
        }
        else{
            return NULL;
        }
    }
    if(pos == 1){
        struct Node* new_head = create_node(data);
        new_head->next = head;
        return new_head;
    }
    struct Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        if(count == pos-1){
            struct Node* new_node = create_node(data);
            new_node->next = temp->next;
            temp->next = new_node;
            break;
        }
        temp = temp-> next;
    }
    return head;
}

struct Node* insert_b4_val(struct Node* head, int data, int val){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        struct Node* temp =  create_node(data);
        head->next = temp;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == val){
            struct Node* new_node = create_node(data);
            new_node->next = temp->next;
            temp->next = new_node;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    struct Node* new_head;
    new_head = arr_to_linked_list(arr, n);
    print_ll(new_head);
    new_head = insert_head(new_head, 10);
    print_ll(new_head);
    new_head = insert_tail(new_head, 50);
    print_ll(new_head);
    new_head = insert_by_pos(new_head, 20, 3);
    print_ll(new_head);
    new_head = insert_b4_val(new_head, 40, 5);
    print_ll(new_head);

    return 0;
}