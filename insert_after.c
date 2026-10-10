#include "header.h"

status insert_after(slist **head,int g_data,int data){
  if(*head == NULL){
    return failure;
  }
  slist *new = malloc(sizeof(slist));
  if(new == NULL){
    return failure;
  }
  new->data = data;
  int pos =1;
  slist *temp =*head;
  while (temp != NULL)
  {
    if(temp->data == g_data){
      new->link = temp->link;
      temp->link= new;
      return success;
    }
    pos++;

    temp = temp->link;
  }
  
  // if(temp->data){
  //   printf("%d \n",temp->data);
  // }


  return failure;
}