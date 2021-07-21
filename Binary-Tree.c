#include<stdio.h>

struct node {
  int info;
  struct node * left;
  struct node * right;
}* temp, * nw;

struct node * makeNode(int x) {
  temp = (struct node * ) malloc(sizeof(struct node));
  temp -> info = x;
  temp -> left = NULL;
  temp -> right = NULL;
  return temp;
}

struct node * leftChild(struct node * p, int x) {
  if (p -> left == NULL) {
    p -> left = makeNode(x);
  } else {
    printf("Left-child already exists\n");
  }
  return (p -> left);
}

struct node * rightChild(struct node * p, int x) {
  if (p -> right == NULL) {
    p -> right = makeNode(x);
  } else {
    printf("Right-child already exists\n");
  }
  return (p -> right);
}

void main() {
  struct node * root, * A, * B, * C;
  root = makeNode(1);
  leftChild(root, 2);
  rightChild(root, 3);
  leftChild(root -> right, 4);
  rightChild(root -> right, 5);
  printf("Binary-Tree created");
}
