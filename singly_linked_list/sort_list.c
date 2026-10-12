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

for(int j = 0;j < i;j++){
  temp = *head;
  while(temp->link->link != NULL){
    // if(temp!= NULL &&temp->link != NULL){
    // printf("before swap %d %d\n",temp->data,temp->link->data);
    // }
    if(temp->data > temp->link->data){
      // printf("swap\n");
      slist *s = temp->link;
      temp->link =temp->link->link;
      slist *st =temp->link->link;
      temp->link->link = s;
      s->link = st;

    
  //      slist *sc = temp;
  // temp = temp->link;
  // sc->link = temp->link;
  // temp->link = sc;
    
    }
    // if(temp!= NULL &&temp->link != NULL){
    //   printf("After swap %d %d\n",temp->data,temp->link->data);
    // } 
    temp = temp->link;
}
print_list(*head);
printf("\n");
}
/*

printf("temp->data %d\n",temp->data);

printf("temp->link->data %d\n",temp->link->data);

printf("temp->link->link->data %d\n",temp->link->link->data);

*/
}


/*

 if(templink-->data > temp->link->data){
      // int te = temp->data;
      // temp->data = temp->link->data;
      // temp->link->data = te    
      slist *sc =temp->link;
      temp->link=temp->link->link;
      sc->link = temp->link->link;
      temp->link->link = sc;
     
      // continue;
      // swap_node(&temp);
      // slist *sc = temp;
        // temp = temp->link;
        // sc->link = temp->link;
        // temp->link = sc;
    }
*/