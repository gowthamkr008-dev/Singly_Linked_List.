#include"header.h"

status find_middle(slist *head,int *mid){
  if(head == NULL){
    return failure;
  }
  int pos=1;
  slist *temp = head;
  while(temp != NULL){
    temp = temp->link;
    pos++;
  }
  pos = pos/2;
  int count =1;
  while(head != NULL){
    if(pos == count){
      *mid = head->data;
      return success;
    }
    head = head->link;
    count++;
  }
  return failure;

}