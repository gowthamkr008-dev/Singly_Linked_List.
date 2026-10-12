#include "header.h"

status insert_last(slist **head,int data){
  slist *new = malloc(sizeof(slist));
  if(new == NULL){
    return failure;
  }
  new->data = data;
  new->link = NULL;
  slist *temp = *head;
  while(temp->link != NULL){
    temp = temp->link;
  }
  temp->link = new;

  return success;
}