#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    struct Node *next;
    int coef, expo;    
}node;

node* create_node(int c, int e){
    node *p = (node *)malloc(sizeof(node));
    if(p == NULL){
        printf("No Space");
        return NULL;
    }
    p->coef = c;
    p->expo = e;
    p->next = NULL;
    return p;
}

void insert(node **head, int c, int e){
    node *p = create_node(c,e);
    if(p == NULL) return;
    if(*head == NULL){
        *head = p;
        return;
    }
    p->next = *head;
    *head = p;
}

void display(node *head){
    printf("\n");
    node *p = head;
    if(head == NULL){
        printf("\nEmpty List\n");
        return;
    }
    while(p != NULL){
        printf("[%d %d] ",p->coef,p->expo);
        p = p->next;
    }
    printf("\n");
}

node* add_poly(node *head1, node *head2){
    node *h1 = head1, *h2 = head2;
    node *h3 = NULL;
    while(h1 != NULL){
        int coef = h1->coef;
        h2 = head2;
        while(h2 != NULL){
            if(h1->expo == h2->expo){
                coef += h2->coef;
                break;
            }
            h2 = h2->next;
        }
        insert(&h3, coef, h1->expo);
        h1 = h1->next;
    }

    h2 = head2;

    while(h2 != NULL){
        node *temp = head1;
        int f = 0;
        while(temp != NULL){
            if(temp->expo == h2->expo){
                f = 1;
                break;
            }
            temp = temp->next;
        }
        if(!f) insert(&h3, h2->coef, h2->expo);
        h2 = h2->next;
    }
    return h3;
}


void main(){
    node* head1 = NULL;
    node* head2 = NULL;

    head1 = create_node(5,2);

    head1->next = create_node(3,1);

    head1->next->next = create_node(2,0);

    display(head1);

    head2 = create_node(3,2);

    head2->next = create_node(3,0);
    
    display(head2);


    node *head3 = add_poly(head1, head2);
    display(head3);
}