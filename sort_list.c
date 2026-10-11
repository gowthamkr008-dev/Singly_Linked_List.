#include"header.h"

void sort_list(slist **head){
  if(*head == NULL || (*head)->link == NULL){
    return;
  }
  slist *temp = *head;
  int i=0;

  while(temp->link->link != NULL){
    if(temp->link != NULL   && temp->link->link != NULL && (temp->link->data > temp->link->link->data) ){
      slist *sc = temp->link;
      temp->link = temp->link->link;
      temp->link->link = sc->link;
    }
    temp = temp->link;
  }

}