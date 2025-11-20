// 23_stack_using_array.c
// --------------------------------------------------
// Demonstrates stack implementation using arrays.
// Operations: push, pop, peek.
// --------------------------------------------------

#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return -1;
    }
    return stack[top];
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Top element: %d\n", peek());
    printf("Popped: %d\n", pop());
    printf("Top after pop: %d\n", peek());

    // Tweaking:
    // - Increase MAX for bigger stack.
    // - Change int to float or char for other stack types.
    return 0;
}
