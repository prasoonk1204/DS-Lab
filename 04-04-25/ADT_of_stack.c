#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int stack[SIZE];
int top = -1;


void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed to stack.\n", value);
    }
}


void pop() {
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop.\n");
    } else {
        printf("Popped element: %d\n", stack[top--]);
    }
}


void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}


int main() {
    int ch, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Please enter a number between 1-4.\n");
        }
    }

    return 0;
}
