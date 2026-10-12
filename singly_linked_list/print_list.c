#include "header.h"
#include<unistd.h>
void print_list(slist *head){
  if(head == NULL){
    printf("List is empty\n");
  }else{
    while(head != NULL){
      printf("%d->",head->data);
      head = head->link;
        // fflush(stdout);
      // for(int i =0;i<1000000000;i++);

    }
    printf("NULL\n");
  }
}