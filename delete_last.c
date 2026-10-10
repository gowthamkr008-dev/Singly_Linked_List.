#include "header.h"

status delete_last(slist **head){
  if(*head == NULL){
    return failure;
  }
  if( (*head)->link == NULL){
    free(*head);
    *head = NULL;
    return success;
  }
  slist *temp =*head;
  while(temp->link->link != NULL){
    temp = temp->link;
  }
 free(temp->link);
 temp->link = NULL;

  return success;
}