#include "header.h"

status delete_list(slist **head){
  if(*head == NULL){
    return failure;
  }
  while(*head != NULL){
    slist *temp = *head;
    *head = (*head)->link;
    free(temp);
  }
  *head = NULL;
  return success;
}