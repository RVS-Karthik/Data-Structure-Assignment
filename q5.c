#include <stdio.h>

#define MAX 5
int q[MAX], front=-1, rear=-1;

void enqueue(int x) {
    if((rear+1)%MAX == front)
        printf("Full\n");
    else {
        if(front==-1) front=0;
        rear=(rear+1)%MAX;
        q[rear]=x;
    }
}

void dequeue() {
    if(front==-1)
        printf("Empty\n");
    else {
        printf("Deleted %d\n", q[front]);
        if(front==rear)
            front=rear=-1;
        else
            front=(front+1)%MAX;
    }
}

void display() {
    int i=front;
    if(front==-1) {
        printf("Empty\n");
        return;
    }
    while(1) {
        printf("%d ", q[i]);
        if(i==rear) break;
        i=(i+1)%MAX;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    dequeue();
    display();

    return 0;
}