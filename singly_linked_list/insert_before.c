#include "header.h"

status insert_before(slist **head ,int g_data,int ndata){
  if(*head == NULL){
    return failure;
  }
  slist *temp = *head;
  slist *new = malloc(sizeof(slist));
  if(new == NULL){
   return failure; 
  }
  new->data =ndata;
  int pos =0;
  if((*head)->data == g_data){
      new->link = *head;
     *head = new;
     return success;
  }
  while(temp->link != NULL){
    if(temp->link->data== g_data){
      printf("%d position %d\n",temp->data,pos);
     new->link = temp->link;
     temp->link = new;
      return success;

    }
    pos++;
     temp = temp->link;
  }
  return failure;
}