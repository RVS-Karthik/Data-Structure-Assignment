#include <stdio.h>

int q[5], front=-1, rear=-1;

void enqueue(int x) {
    if(rear == 4)
        printf("Queue Full\n");
    else {
        if(front == -1) front = 0;
        q[++rear] = x;
    }
}

void dequeue() {
    if(front == -1)
        printf("Queue Empty\n");
    else {
        printf("Printed %d\n", q[front]);
        front++;
    }
}

void display() {
    int i;
    if(front == -1)
        printf("Empty\n");
    else {
        for(i=front; i<=rear; i++)
            printf("%d ", q[i]);
        printf("\n");
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    display();
    dequeue();
    display();

    return 0;
}