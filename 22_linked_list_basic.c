// 22_linked_list_basic.c
// --------------------------------------------------
// Demonstrates a basic singly linked list in C.
// Includes creating nodes, inserting at the end, and displaying the list.
// Tweaking pointer handling incorrectly can cause memory leaks or crashes.
// --------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertEnd(struct Node **head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void displayList(struct Node *head) {
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    displayList(head);

    // Tweaking:
    // - You can add insertAtStart(), deleteNode(), etc.
    // - Always free memory for production code.
    return 0;
}
