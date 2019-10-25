#include "linkedList.h"

int main(){
  struct node* head = NULL;
  print_list(head);
  int toAdd[10] = {0,1,2,3,4,5,6,7,8,9};
  for(int x = 0; x < 10; x++){
    printf("Adding %d\n", x);
    head = insert_front(head, x);
  }

  print_list(head);

  printf("Removing 4\n");
  head = remove_front(head, 4);
  print_list(head);

  printf("Emptying list...\n");
  head = free_list(head);
  print_list(head);
}
