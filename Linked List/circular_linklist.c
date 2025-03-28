#include<stdio.h>
#include<stdlib.h>

typedef struct Node{                // Declaration of the Node
    int info;
    struct Node* nxt;
}node;

node * lp = NULL;

void insert_at_Beg(){               // Inserts a element at the start of the list
    node* p;
    p = (node*)malloc(sizeof(node));
    if(p == NULL){
        printf("No Space");
        return;
    }
    printf("Enter the info: ");
    scanf("%d",&p->info);
    if(lp == NULL){
        p->nxt = p;
        lp = p;
        printf("Inserted Successfully!!");
        return;
    }
    p->nxt = lp->nxt;
    lp->nxt = p;
    printf("Inserted Successfully!!");
}

void insert_at_End(){               // Inserts a element at the end of the list
    node* p;
    p = (node*)malloc(sizeof(node));
    if(p == NULL){
        printf("No Space");
        return;
    }
    printf("Enter the info: ");
    scanf("%d",&p->info);
    if(lp == NULL){
        p->nxt = p;
        lp = p;
        printf("Inserted Successfully!!");
        return;
    }
    p->nxt = lp->nxt;
    lp->nxt = p;
    lp = p;
    printf("Inserted Successfully!!");
}
    
void display(){                     //  display the linked list
    printf("\n");
    node* p;
    if(lp == NULL){
        printf("\nEmpty List");
        return;
    }
    p = lp->nxt;
    while(p != lp){
        printf("%d ",p->info);
        p = p->nxt;
    }
    printf("%d",p->info);
    printf("\n");
}

void search(int target){                // Searches for the target value
    node* p;
    if(lp == NULL){
        printf("\nEmpty List");
        return;
    }
    p = lp->nxt;
    while(p != lp){
        if (p->info == target){
            printf("\nTarget found!\n");
            return;
        }
        p = p->nxt;
    }
    if(p->info == target){
        printf("\nTarget Found");
        return;
    }else{
        printf("\nTarget not in list");
    }
}

void main(){
    int choice,target;
    while(1){
        printf("\n1.Insert at Beg\n2.Display\n3.End\n4.Insert at End\n5.Search\nEnter you choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                insert_at_Beg();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
                break;
            case 4:
                insert_at_End();
                break;
            case 5:
                printf("Enter the element to search: ");
                scanf("%d",&target);
                search(target);
                break;
            default:
                printf("Wrong Input!!");
        }
    }    
    
}
