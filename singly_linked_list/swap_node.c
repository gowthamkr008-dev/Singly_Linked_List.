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


  /*
    slist *s = temp->link;
      temp->link =temp->link->link;
      slist *st =temp->link->link;
      temp->link->link = s;
      s->link = st;
  
  
  */
  //   *head = (*head)->link;
  // temp->link = (*head)->link;
  // (*head)->link = temp;


}


/*

Subject: Instant not available on my primary account

Hello Team,
My secondary account @gow..tham32 has instant available,
 but my primary @silent..killer32 shows "Instant is not
  available at this time" and "Not eligible yet". 
  Both accounts are connected to same Page.
   I have switched to Creator account and connected Page,
    but still not showing. Please review and enable instant 
    for my primary account. Thank you

*/