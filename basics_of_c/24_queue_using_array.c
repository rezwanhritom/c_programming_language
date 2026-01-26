// 24_queue_using_array.c
// --------------------------------------------------
// Demonstrates queue implementation using arrays.
// Operations: enqueue, dequeue, display.
// --------------------------------------------------

#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = value;
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        return -1;
    }
    return queue[front++];
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    printf("Dequeued: %d\n", dequeue());
    display();

    // Tweaking:
    // - Implement circular queue for better performance.
    return 0;
}
