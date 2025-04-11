// wap in c to implement all the operations on queue using array

#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int val){
    if (rear == SIZE-1){
        printf("Queue is full\n");
    }
    else{
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = val;
        printf("Inserted : %d\n", val);
    }
}

void dequeue(){
    if (front == -1 || front > rear){
        printf("Queue is empty\n");
    }
    else {
        printf("Deleted : %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty");
    }
    else {
        printf("Queue elements : ");
        for (int i=front; i<=rear; i++){
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch, val;
    
    printf("--- Queue Operations ---\n");
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
    printf("-------------------------\n");
    
    while(1){
        printf("Enter your choice : ");
        scanf("%d", &ch);
        
        switch(ch) {
            case 1:
                printf("Enter value to enqueue : ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...");
                return 0;
            default:
                printf("Invalid choice! try again\n");
        }
    }
    return 0;
}
