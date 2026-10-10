#include "header.h"

status delete_first(slist **head ){
  if(*head == NULL){
    return failure;
  }

  slist *temp =*head;
  *head = (*head)->link;
free(temp);
 
  return success;
}