#include <stdio.h>
#include <stdlib.h>

// 1. Structure definition
struct Node {
    int data;
    struct Node *next;
};

// Global head pointer
struct Node *head = NULL; 

// --- 1. Function to create a list with 'n' nodes ---
void create(int n) {
    struct Node *newNode, *temp;
    int val;

    for(int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &val);
        
        // Allocate memory for the new node
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->next = NULL;
        
        // If list is empty, make newNode the head
        if (head == NULL) {
            head = newNode;
        } else {
            // Otherwise, traverse to the end and attach it
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    printf("\nSuccessfully created a linked list with %d nodes.\n", n);
}

// --- 2. Function to delete at the beginning ---
void delete_beg() {
    struct Node *temp;
    
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    
    temp = head;           
    head = head->next;     // Shift head to the next node
    
    printf("Deleted element from beginning: %d\n", temp->data);
    free(temp);            // Free the memory
}

// --- 3. Function to delete at the end ---
void delete_end() {
    struct Node *temp;
    
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    
    // If only one node exists
    if (head->next == NULL) {
        printf("Deleted element from end: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    
    temp = head;
    // Traverse to the second-to-last node
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    
    printf("Deleted element from end: %d\n", temp->next->data);
    free(temp->next);      
    temp->next = NULL;     // Set new end to NULL
}

// --- 4. Function to delete at a specific position ---
void delete_pos(int pos) {
    struct Node *temp, *nodeToDelete;
    
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    
    if (pos == 1) {
        delete_beg();
        return;
    }
    
    temp = head;
    // Traverse to the node JUST BEFORE the target position
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL || temp->next == NULL) {
        printf("Error: Position %d is out of bounds.\n", pos);
        return;
    }
    
    nodeToDelete = temp->next;              
    temp->next = temp->next->next;           // Bypass the node
    
    printf("Deleted element at position %d: %d\n", pos, nodeToDelete->data);
    free(nodeToDelete);                      
}

// --- Utility: Display the list ---
void display() {
    struct Node *temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Current Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// --- Main Menu ---
int main() {
    int ch, pos, n;

    while (1) {
        printf("\n--- Linked List Operations ---\n");
        printf("1. Create list with 'n' nodes\n");
        printf("2. Delete at Beginning\n");
        printf("3. Delete at End\n");
        printf("4. Delete at Position\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("How many nodes do you want to create? ");
                scanf("%d", &n);
                create(n);
                break;
            case 2:
                delete_beg();
                break;
            case 3:
                delete_end();
                break;
            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                delete_pos(pos);
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}