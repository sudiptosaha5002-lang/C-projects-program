#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front, *rear;
};

void enqueue(struct Queue* q, int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = temp;
    } else {
        q->rear->next = temp;
        q->rear = temp;
    }
}

int dequeue(struct Queue* q) {
    if (q->front == NULL) {
        return -1; // Queue is empty
    }

    int data = q->front->data;
    struct Node* temp = q->front;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
    return data;
}

void printQueue(struct Queue* q) {
    struct Node* temp = q->front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() 
{
    struct Queue q;
    q.front = q.rear = NULL;

    int choice, data;

    while (1) 
	{
        printf("\n1. Enqueue\n2. Dequeue\n3. Print\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                enqueue(&q, data);
                break;
            case 2:
                data = dequeue(&q);
                if (data != -1) 
				{
                    printf("Dequeued: %d\n", data);
                } 
				else 
				{
                    printf("Queue is empty\n");
                }
                break;
            case 3:
                printQueue(&q);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
