#include"header.h"

int  get_nth_node(slist*head,int n,int *data){
  if(head == NULL){
    return -1;
  }
  int i =1;
  slist *temp = head;
  while(head !=NULL){
    i++;
    head = head->link;
  }
  int j=1;
  while(temp != head){
    if(j == n){
      *data = temp->data;
      return 1;
    }
    j++;
    temp = temp->link;
  }




  return -1;
}