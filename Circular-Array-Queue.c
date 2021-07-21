#include<stdio.h>

#include<conio.h>

#define MAX_SIZE 10

int cQueue[10], front = -1, rear = -1;

void enqueue() {
  if (front == 0 && rear == MAX_SIZE - 1) {
    printf("Queue is full\n");
  } else if (front == -1) {
    int x;
    printf("Enter the data: ");
    scanf("%d", & x);
    front = 0;
    rear++;
    cQueue[rear] = x;
  } else if (rear == MAX_SIZE - 1 && front != 0) {
    int x;
    printf("Enter the data: ");
    scanf("%d", & x);
    rear = 0;
    cQueue[rear] = x;
  } else {
    int x;
    printf("Enter the data: ");
    scanf("%d", & x);
    rear++;
    cQueue[rear] = x;
  }
}

int dequeue() {
  if (front == -1) {
    printf("Queue is empty\n");
  } else if (front == rear) {
    printf("Deleted element is %d\n", cQueue[front]);
    front = rear = -1;
  } else if (front == MAX_SIZE - 1) {
    printf("Deleted element is %d\n", cQueue[front]);
    front = 0;
  } else {
    printf("Deleted element is %d\n", cQueue[front]);
    front++;
  }
}

int main() {
  for (int i = 0; i < 5; i++)
    enqueue();
  for (int i = 0; i < 2; i++)
    dequeue();
  for (int i = 0; i < 3; i++)
    enqueue();
  for (int i = 0; i < 2; i++)
    dequeue();
  printf("QUEUE: FRONT >>>----->>> REAR\n");
  if (front > rear)
    for (int i = rear; i <= front; i++)
      printf("%d ", cQueue[i]);
  else
    for (int i = front; i <= rear; i++)
      printf("%d ", cQueue[i]);

  return 0;
}
