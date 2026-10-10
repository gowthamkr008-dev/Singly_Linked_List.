#include"header.h"

int find_node(slist *head,int n){
  int pos =1;
  while(head != NULL){
    if( head->data == n){
      return pos;
    }
    pos++;
    head = head->link;
  }
}