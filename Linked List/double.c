#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    struct Node *prev,*next;
    int data;
}node;

node *head = NULL;

void insert_at_beg(){
    node* p;
    p = (node*)malloc(sizeof(node));
    if(p == NULL){
        printf("No Space");
        return;
    }
    printf("Enter the info: ");
    scanf("%d",&p->data);
    if(head == NULL){
        head = p;
        p->next = NULL;
        p->prev = NULL;
        printf("\nInserted Successfully!!\n");
        return;
    }
    p->next = head;
    p->prev = NULL;
    head->prev = p;
    head = p;
    printf("\nInserted Successfully!!\n");
}

void insert_at_end(){
    node* p, *q = head;
    p = (node*)malloc(sizeof(node));
    if(p == NULL){
        printf("No Space");
        return;
    }
    printf("Enter the info: ");
    scanf("%d",&p->data);
    if(head == NULL){
        head = p;
        p->next = NULL;
        p->prev = NULL;
        printf("\nInserted Successfully!!\n");
        return;
    }
    while(q->next != NULL){
        q = q->next;
    }
    q->next = p;
    p->prev = q;
    p->next = NULL;
    printf("\nInserted Successfully!!\n");
}

void insert_after(int target){
    node *p,*q = head;
    p = (node*)malloc(sizeof(node));
    if(p == NULL){
        printf("No Space");
        return;
    }
    printf("Enter the info: ");
    scanf("%d",&p->data);
    if(head == NULL){
        head = p;
        p->next = NULL;
        p->prev = NULL;
        printf("\nInserted Successfully!!\n");
        return;
    }
    while( q->next != NULL){
        if(q->data == target){
            p->next = q->next;
            p->prev = q;
            q->next = p;
            printf("\nInserted Successfully!!\n");
            return;
        }
        q = q->next;
    }
    printf("\nElement not found\n");
}

void dlt_at_beg(){
    if(head == NULL){
        printf("\nEmpty List\n");
        return;
    }
    node *p = head;
    if(p->next == NULL){
        head = NULL;
        free(p);
        printf("\nElement Deleted\n");
        return;
    }
    head = p->next;
    p->next = NULL;
    free(p);
    printf("\nElement Deleted\n");
}

void dlt_after(int target){
    if(head == NULL){
        printf("\nEmpty List\n");
        return;
    }
    node *p,*q = head;
    while(q != NULL){
        if(q->data == target){
            if(q->next == NULL) {
                printf("\nNo Element to delete after\n");
                return;
            }
            p = q->next;
            q->next = p->next;
            if(p->next !=NULL)  p->next->prev = q;
            p->prev = NULL;
            p->next = NULL;
            free(p);
            printf("\nElement Deleted\n");
            return;
        }
        q = q->next;
    }
    printf("\nElement not found\n");
}

void display(){                     //  display the linked list
    printf("\n");
    node *p = head;
    if(head == NULL){
        printf("\nEmpty List\n");
        return;
    }
    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

void search(int target){                // Searches for the target value
    node* p = head;
    if(head == NULL){
        printf("\nEmpty List");
        return;
    }
    while(p->next != NULL){
        if (p->data == target){
            printf("\nTarget found!\n");
            return;
        }
        p = p->next;
    }
    printf("\nTarget not in list\n");
}

void main(){
    int choice;
    while(1){
        int target;
        printf("\n1.Insert at Beg\n2.Display\n3.End\n4.Insert at End\n5.Search\n6.Delete at Begining\n7.Insert After\n8.Delete After\nEnter you choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                insert_at_beg();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
                break;
            case 4:
                insert_at_end();
                break;
            case 5:
                printf("Enter the element to search: ");
                scanf("%d",&target);
                search(target);
                break;
            case 6:
                dlt_at_beg();
                break;
            case 7:
                printf("\nEnter the element to insert after: ");
                scanf("%d",&target);
                insert_after(target);
                break;
            case 8:
                printf("\nEnter the element to delete after: ");
                scanf("%d",&target);
                dlt_after(target);
                break;
            default:
                printf("Wrong Input!!");
        }
    }    
   
}