#include "header.h"

status insert_first(slist **head,int data){
  slist *new = malloc(sizeof(slist));
  if(new == NULL){
    return failure;
  }

  new->data = data;
  new->link = *head;
  *head = new;

  return success;
}