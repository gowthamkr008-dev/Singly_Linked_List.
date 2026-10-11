#include"header.h"

void remove_duplicate(slist **head){
  if(*head  == NULL){
    return ;
  }
  slist *temp = *head;
  slist *sctemp = *head;
  while(sctemp->link != NULL){
    while(temp != NULL){
      if(sctemp->data == temp->data){
        delete_elemet(head,temp->data);
    }

    temp = temp->link;
  }
  sctemp = sctemp->link;

}
}