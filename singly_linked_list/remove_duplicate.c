#include"header.h"

void remove_duplicate(slist **head){
  if(*head  == NULL){
    return ;
  }
  if( (*head)->link == NULL){
    return ;
  }
  slist *org = *head;
  while(org!= NULL){
    slist *dup = org->link;
    slist *prev = org;
    while(dup != NULL){
      if(org->data == dup->data){
        slist *temp = dup;
        prev ->link=dup->link;
        dup = dup->link;
        free(temp);
      }else{
        prev =dup;
        dup = dup->link;
      }
    }


    org = org->link;
  }
}