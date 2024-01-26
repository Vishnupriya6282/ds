#include <stdio.h>
int queue[100],front = -1, rear = -1, choice, item, size;

int full() {
    if (rear == size - 1)
        return 1;
    else
        return 0;
}

int empty() {
    if (front == -1)
        return 1;
    else
        return 0;
}

void enqueue() {
    if (full())
        printf("Queue is full.\n");
    else {
        printf("enter item: ");
        scanf("%d", &item);
        if (front == -1)
            front = 0;
        rear = rear + 1;
        queue[rear] = item;
        printf("Enqueued %d\n", item);
    }
}

void dequeue() {
    if (empty())
        printf("Queue is empty.\n");
    else {
        printf("Dequeued %d\n", queue[front]);
        if (front == rear)
            front = rear = -1;
        else
            front = front + 1;
    }
}

void display() {
    if (empty())
        printf("Queue is empty.\n");
    else {
        printf("Queue elements are: \n");
        for (int i = front; i <= rear; i++)
            printf("%d\n", queue[i]);
    }
}

int main() {
    printf("\nenter the size of the array (max: 100): ");
    scanf("%d", &size);
    do {
        printf("\n\nEnter the operation to perform:\n1.enqueue\n2.dequeue\n3.display\n0.exit\nyour choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 0:
                printf("exiting\n");
                break;
            default:
                printf("\ninvalid input");
        }
    } while (choice != 0);
    return 0;
}
