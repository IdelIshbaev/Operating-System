
#include <stdio.h>
#include <stdlib.h>

struct node{
    int val;
    struct node *prev;
    struct node *next;
};

void print_list(struct node *t){
    while(t != NULL){
        printf("%d ", t->val);
        t = t->next;
    }
}
void insert_node(int n, int a, struct node *head1){ //it will insert node with value a, after n
    struct node * t = NULL;
    t = malloc(sizeof(struct node));
    t->val = a;
    while(head1 != NULL){
        if(head1->val == n){
            if(head1->next != NULL)
                head1->next->prev = t;
            t->prev = head1;
            t->next = head1->next;
            head1->next = t;
        }
        head1 = head1->next;
    }
}
struct node * delete_node(int a, struct node *head1){ //will delete node with val 3
    struct node * t = NULL; //to store previous node
    t = malloc(sizeof(struct node));
    
    struct node * storeh = NULL; //store head pointer
    storeh = malloc(sizeof(struct node));
    storeh = head1;
    
    while(head1 != NULL){
        if(head1->val == a){
            t->next = head1->next;
            if(head1->next != NULL)
                head1->next->prev = t;
            if(storeh == head1){
                head1->next->prev = NULL;
                return head1->next;
            }else{
                return storeh;
            }
        }
        t = head1;
        head1 = head1->next;
        
    }
    return storeh;
}
void print_b(struct node *t){
    while(t != NULL){
        printf("%d ", t->val);
        t = t->prev;
    }
}
int main(){
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    if(head == NULL){
        return 1;
    }
    head->val = 0;
    head->next = NULL;
    struct node *temp = NULL;
    temp = head;
    
    struct node *tail = NULL;
    tail = malloc(sizeof(struct node));
    
    for(int i = 1; i < 5; i++){
        struct node * t = NULL;
        t = malloc(sizeof(struct node));
        if(t == NULL){
            return 1;
        }
        temp->next = t;
        temp->next->prev = temp;
        temp = t;
        temp->val = i;
        temp->next = NULL;
        tail = temp;
    }
    //print_list(head);
    insert_node(2, 10, head);
    insert_node(4, 11, head);
    insert_node(1, 12, head);
    print_list(head);
    printf("\n");

    
    head = delete_node(0, head);
    head = delete_node(3, head);
    head = delete_node(11, head);
    print_list(head);
    printf("\n");
    print_b(tail);
    return 0;
}
