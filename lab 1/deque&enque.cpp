#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Maximum size of the queue

// Global variables for the queue
int queue[MAX];
int front = -1;
int rear = -1;

// Function to check if the queue is full
int isFull() {
    if (rear == MAX - 1)
        return 1;
    return 0;
}

// Function to check if the queue is empty
int isEmpty() {
    if (front == -1 || front > rear)
        return 1;
    return 0;
}

// Enqueue operation (insert)
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d\n", value);
        return;
    }
    if (front == -1)  // First element to enqueue
        front = 0;
    rear++;
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
}

// Dequeue operation (remove)
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue\n");
        return -1;
    }
    int item = queue[front];
    front++;
    if (front > rear) {  // Reset queue after last item is dequeued
        front = rear = -1;
    }
    printf("Dequeued: %d\n", item);
    return item;
}

// Display the current elements in the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    
    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}

