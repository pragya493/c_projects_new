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

struct Node* delete_head(struct Node* head){
    //LL is empty
    if(head == NULL)
        return head;
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

struct Node* delete_tail(struct Node* head){
    //LL is empty or LL has single element
    if(head == NULL || head->next == NULL)
        return head;
    struct Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

struct Node* delete_by_pos(struct Node* head, int pos){
    //LL is empty
    if(head == NULL)
        return head;
    if(pos == 1){
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count =0;
    struct Node* temp = head;
    struct Node* prev = NULL; //prev of first node is NULL
    while(temp != NULL){
        count++;
        if(count == pos){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

struct Node* delete_by_val(struct Node* head, int val){
    //LL is empty
    if(head == NULL)
        return head;
    if(head->data == val){
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Node* temp = head;
    struct Node* prev = NULL; //prev of first node is NULL
    while(temp != NULL){
        if(temp->data == val){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
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
    new_head = delete_head(new_head);
    print_ll(new_head);
    new_head = delete_tail(new_head);
    print_ll(new_head);
    // delete_by_pos(head, 2);
    // print_ll(head);
    // delete_by_val(head, 1);
    // print_ll(head);

    return 0;
}

