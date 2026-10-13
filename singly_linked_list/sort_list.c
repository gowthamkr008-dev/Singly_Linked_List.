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

for(int j = 1;j < i;j++){
  temp = *head;
  while(temp->link->link != NULL){
//    1 10 1 20 1 30 1 40 1 50 1 60

    if( (temp!= NULL && temp->link!= NULL)   &&(temp->data > temp->link->data) ){
      // printf("Compared data %d and %d\n",temp->data,temp->link->data);
      slist *s = temp->link;
      temp->link =temp->link->link;
      slist *st =temp->link->link;
      temp->link->link = s;
      s->link = st;
 
      // printf("swaped data %d and %d\n",temp->data,temp->link->data);
    
  //slist *sc = temp;
  // temp = temp->link;
  // sc->link = temp->link;
  // temp->link = sc;
    
    }
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