#include<stdio.h>

struct stack {
  int data;
  struct stack * next;
}* top = NULL, * nw;

void push() {
  nw = (struct stack * ) malloc(sizeof(struct stack));
  if (nw == NULL) {
    printf("Stack is empty");
  } else {
    int x;
    printf("Enter a value");
    scanf("%d", & x);
    nw -> data = x;
    nw -> next = top;
    top = nw;
  }
}

void pop() {
  if (top == NULL) {
    printf("Stack is empty");
  } else {
    printf("%d is deleted", top -> data);
    struct stack * temp;
    temp = top;
    top = top -> next;
    free(temp);
  }
}

int main() {
  push();
  return 0;
}
