#include"header.h"

void remove_duplicate(slist **head){
  if(*head  == NULL){
    return ;
  }

  slist *temp = *head;
  slist *sctemp = *head;
  int i=0;
  while(sctemp->link != NULL){
    temp = *head;
    while(temp->link != NULL){
      printf("%d ",i++);
      if(sctemp->data == temp->data){
        delete_elemet(head,temp->data);
    }

    temp = temp->link;
  }
  sctemp = sctemp->link;

}
}