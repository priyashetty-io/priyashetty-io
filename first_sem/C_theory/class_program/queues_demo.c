#include<stdio.h>
#define size 5

int queue[size];
int front=-1;
int rear=-1;


int isEmpty(void){
    return front==-1 || front >rear;
}


int isFull(void){
    return rear == size -1;
}

void enqueue(int value) {
    if (isFull()) {
        printf("queue Overflow\n");
        return;
    }
    if(front == -1) front =0;
    queue[++rear] = value;
    printf("Enqueued %d\n",value);

}
int dequeue(void){
    if(isEmpty()){
        printf("queue underflow\n");
        return -1;
    }
    printf("dequeued %d\n",queue[front]);
    front++;
    if(front > rear){
        front = -1;
        rear=-1;
    }
}

void display(){
    if (front == -1 || front > rear){
        printf("queue is empty\n");
        return;
    }
    printf("queue elements: ");
    for(int i = front; i <=rear; i++){
        printf("%d", queue[i]);
    }
    printf("\n");
    return;
}

int main(){
    int choice, z;
    while (1) {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            return 1;
        }
       switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                if (scanf("%d", &z) != 1) {
                    return 1;
                }
                enqueue(z);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("THANK YOU\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
