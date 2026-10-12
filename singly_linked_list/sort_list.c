#include"header.h"

void sort_list(slist **head){
  if(*head == NULL || (*head)->link == NULL){
    return;
  }
  slist *temp = *head;
  int i=0;

  while(temp != NULL){
    temp = temp->link;
    i++;
  }
int k=0;
  for(int j =0;j < i;j++){
      temp = *head;
  while(temp->link->link != NULL){
    printf("%d  %d\n",temp->data,temp->link->data);
    if(temp->data < temp->link->data){
      // int te = temp->data;
      // temp->data = temp->link->data;
      // temp->link->data = te;

      printf("%d",k++);
      slist *te = temp;
      temp->link = temp->link->link;
      temp->link->link =te;  
      continue;

      // swap_node(&temp);
      
      // slist *sc = temp;
        // temp = temp->link;
        // sc->link = temp->link;
        // temp->link = sc;
    }
   temp = temp->link;
  }
}

}