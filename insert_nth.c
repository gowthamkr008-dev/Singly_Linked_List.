#include"header.h"

int insert_nth(slist **head,int data, int n){
  if(*head == NULL && n != 1){
    return -1;
  }
  slist *new =malloc(sizeof(slist));
  if(new == NULL){
    return -1;
  }
  new->data = data;
  if(n== 1){
    new->link = *head;
    *head = new;
    return 0;
  }
  slist *temp = *head;
  int pos =1;
  while(temp != NULL){
    if(pos == (n-1) ){
      new->link = temp->link;
      temp->link = new;
      return 0;
    }
    temp = temp->link;
    pos++;
  }

  return 1;
}