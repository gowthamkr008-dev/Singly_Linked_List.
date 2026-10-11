#include"header.h"

void swap_node(slist **temp){
  if(*temp == NULL ){
    return ;
  }
//swap only two node  
  if(*temp != NULL &&  (*temp)->link != NULL){
  slist *sc = *temp;
  *temp = (*temp)->link;
  sc->link = (*temp)->link;
  (*temp)->link = sc;

  }
  //   *head = (*head)->link;
  // temp->link = (*head)->link;
  // (*head)->link = temp;


}