#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
struct node {
    int val;
    struct node *nxt;
};
struct node *head = NULL;
struct node* getnode() {
    struct node* p = (struct node*)malloc(sizeof(struct node));
    if (p == NULL) {
        printf("No Space\n");
        exit(1); // Exit if memory allocation fails
    }
    p->nxt = NULL; // Initialize next pointer to NULL
    return p;
}
void insertBeg() {
    struct node *p = getnode();
    printf("\nEnter the data: ");
    scanf("%d", &p->val);
    p->nxt = head;
    head = p;
}
void insertAfter() {
    struct node *p = getnode();
    int target;
    printf("Enter the element to insert after: ");
    scanf("%d", &target);
    struct node *q = head;
    while (q != NULL && q->val != target) {
        q = q->nxt;
    }
    if (q == NULL) {
        printf("Target not found.\n");
        free(p);
        return;
    }
    printf("\nEnter the data: ");
    scanf("%d", &p->val);
    p->nxt = q->nxt;
    q->nxt = p;
    printf("\nInserted Successfully!\n");
}
void insertBefore() {
    struct node *p = getnode();
    struct node *q = head, *r = NULL;
    int target;
    printf("Enter the element to insert before: ");
    scanf("%d", &target);
    while (q != NULL && q->val != target) {
        r = q;
        q = q->nxt;
    }
    if (q == NULL) {
        printf("Target not found.\n");
        free(p);
        return;
    }
    printf("\nEnter the data: ");
    scanf("%d", &p->val);
    p->nxt = q;
    if (r == NULL) {
        head = p; // Inserting before the head
    } else {
        r->nxt = p;
    }
    printf("\nInserted Successfully!\n");
}
void insertEnd() {
    struct node *p = getnode();
    struct node *q = head;
    printf("\nEnter the data: ");
    scanf("%d", &p->val);
    p->nxt = NULL;
    if (head == NULL) {
        head = p;
        return;
    }
    while (q->nxt != NULL) {
        q = q->nxt;
    }
    q->nxt = p;
}
void deleteAfter() {
    int target;
    printf("Enter the element to delete after: ");
    scanf("%d", &target);
    struct node *p = head;
    while (p != NULL && p->nxt != NULL && p->val != target) {
        p = p->nxt;
    }
    if (p == NULL || p->nxt == NULL) {
        printf("Target not found or no node to delete after target.\n");
        return;
    }
    struct node *temp = p->nxt;
    p->nxt = temp->nxt;
    free(temp);
    printf("Deleted Successfully!\n");
}
void deleteBefore() {
    int target;
    printf("Enter the element to delete before: ");
    scanf("%d", &target);
    struct node *p = head, *q = NULL, *r = NULL;
    if (p == NULL || p->nxt == NULL) {
        printf("List is too short to delete before any node.\n");
        return;
    }
    if (p->val == target) {
        printf("There is no node before the target element.\n");
        return;
    }
    while (p->nxt != NULL && p->nxt->val != target) {
        r = q;
        q = p;
        p = p->nxt;
    }
    if (p->nxt == NULL) {
        printf("Target not found.\n");
        return;
    }
    if (r == NULL) {
        head = p->nxt;
    } else {
        r->nxt = p;
    }

    free(q);
    printf("Deleted the node before %d successfully!\n", target);
}
void searchDisplay() {
    int value;
    printf("\nEnter the element to search: ");
    scanf("%d", &value);
    struct node *q = head;
    while (q != NULL) {
        if (q->val == value) {
            printf("\nThe element exists.\n");
            return;
        }
        q = q->nxt;
    }
    printf("\nElement not found.\n");
}
void display() {
    if (head == NULL) {
        printf("List Empty\n");
        return;
    }
    struct node *p = head;
    while (p != NULL) {
        printf("%d ", p->val);
        p = p->nxt;
    }
    printf("\n");
}

void sort(){
    if(head == NULL){
        printf("List Empty\n");
        return;
    }
    struct node *p = head, *q = getnode();
    if(p->nxt == NULL){
        printf("Only One element present.");
        return;
    }
    while(p->nxt != NULL){
        q = p->nxt;
        while(q != NULL){
            if(p->val > q->val)
                swap(&p->val, &q->val);
            q = q->nxt;
        }
        p = p->nxt;
    }
    printf("\nSuccessfully Sorted !");
}

void reverse(){
    if(head == NULL){
        printf("List Empty\n");
        return;
    }
    struct node *p = head,*q = NULL,*r = NULL;
    while(p != NULL){
        r = q;
        q = p;
        p = p->nxt;
        q->nxt = r;
    }
    head = q;
    printf("\nReversed!");
}

void main() {
    int choice;
    char ans = 'y';

    while (ans == 'y') {
        printf("1. Insert at Beginning\n2. Insert at End\n3. Insert After\n4. Insert Before\n5. Delete After\n6. Delete Before\n7. Display\n8. Sort\n9. Reverse\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insertBeg();
                break;
            case 2:
                insertEnd();
                break;
            case 3:
                insertAfter();
                break;
            case 4:
                insertBefore();
                break;
            case 5:
                deleteAfter();
                break;
            case 6:
                deleteBefore();
                break;
            case 7:
                display();
                break;
            case 8:
                sort();
                break;
            case 9:
                reverse();
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
        printf("\nWant to continue (y/n): ");
        scanf(" %c", &ans);
    }
    printf("\nThank you!\n");
}
