#include"header.h"

status delete_elemet(slist **head,int data){
  if(*head == NULL){
    return failure;
  }
  if( (*head)->data== data){
    slist *del = *head;
    *head = (*head)->link;
    free(del);
    return success;
  }
  slist *temp = *head;
  while(temp->link != NULL){
    if(temp->link->data == data){
      slist *del =temp->link;
      temp->link = temp->link->link;
      free(del);
      return success;
    }
    temp = temp->link;
  }
  return failure;
}