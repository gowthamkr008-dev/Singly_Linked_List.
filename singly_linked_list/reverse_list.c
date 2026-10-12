#include"header.h"

void reverse_list(slist **head){
  slist *curr = *head,*temp,*prev;
  prev = NULL;
  while(curr != NULL){
    temp = prev;
    prev = curr;
    curr = curr->link;
    prev->link = temp;
  }
  *head = prev;
}