#include <stdio.h>
#include <stdlib.h>

struct node {
  struct node* nextNode;
  int cargo;
};

struct node* createNode(int cargo);
void print_list(struct node* head);
struct node* insert_front(struct node* head, int cargo);
struct node* free_list(struct node* head);
