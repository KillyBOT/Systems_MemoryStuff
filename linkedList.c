#include "linkedList.h"

struct node* createNode(int cargo){
  struct node* head = malloc(sizeof(struct node));
  head->cargo = cargo;
  head->nextNode = NULL;
  return head;
}

void print_list(struct node* head){
  printf("List: [");
  struct node* currentNode = head;
  while(currentNode != NULL){
    printf("%d ", currentNode->cargo);
    currentNode = currentNode->nextNode;
  }
  printf("]\n");
}

struct node* insert_front(struct node* head, int cargo){
  struct node* newHead = createNode(cargo);
  newHead->nextNode = head;
  return newHead;
}

struct node* free_list(struct node* head){
  struct node* currentNode = head;
  struct node* nextNode;
  while(currentNode != NULL){
    nextNode = currentNode->nextNode;
    free(currentNode);
    currentNode = nextNode;
  }

  return head;
}
