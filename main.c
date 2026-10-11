#include"header.h"

int main(){
  slist *head = NULL;
  
  int choice;
  int data;
  int g_data;
    int n;
  printf("1.Insert first\n2.Insert last\n3.Insert after\n4.Insert before\n5.Delete list\n6.Delete first\n7.Delete last\n8.Delete element\n9.Insert nth node\n10.Find node\n11.Print list\n12.Find middle\n13.get nth node\n0.Exit\nEnter choice: ");
  while(1){
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: //insert first
      printf("Enter data to insert first: ");
      scanf("%d",&data);
      if(insert_first(&head,data) ==failure){
        puts("Allocation failed");
        return -1;
      }
      break;


      case 2: //insert last
      printf("Enter data to insert last: ");
      scanf("%d",&data);
      if(insert_last(&head,data) == failure){
        puts("Allocation failed");
        return -1;
      }
      break;


      case 3: //insert after
      printf("enter a data after you insert: ");
      scanf("%d",&g_data);
      printf("Enter a data need to insert: ");
      scanf("%d",&data);
      if(insert_after(&head,g_data,data) == failure){
        puts("Data not found or allocation failed");
      }
      break;


      case 4://insert before
      printf("Enter a data before you insert: ");
      scanf("%d",&g_data);
      printf("Enter a data you need to insert: ");
      scanf("%d",&data);
      if(insert_before(&head,g_data,data)==failure){
       puts("Allocation failed or data not found");
      }
      break;


      case 5://delete list
      if(delete_list(&head)==failure){
        puts("List empty");
      }
      break;


      case 6://delete first
      if(delete_first(&head)==failure){
        puts("List empty");
      }
      break;


      case 7://delete last
      if(delete_last(&head)==failure){
       puts("List empty");
      }
      break;

      case 8:
      printf("Enter a data you need to delete: ");
      scanf("%d",&data);
      if(delete_elemet(&head,data)== failure){
        printf("List is empty data not found\n");
      }


      break;

      case 9://insert nth node
      printf("Enter the position you need to insert : ");
      scanf("%d",&n);
      printf("Enter the data you need to insert: ");
      scanf("%d",&data);
      if(insert_nth(&head,data,n)){
        printf("list not found or fail to allocate memory\n");
      }
      break;


      case 10://find node
      printf("Enter a data you need to find: ");
      scanf("%d",&n);
      printf("\n");
      printf("%d in the number in that %d position\n",n,find_node(head,n));
      break;

      
      case 11:
      print_list(head);
      break;

      case 12:
      int res;
       if(find_middle(head,&res) == failure){
       printf("list is empty\n");
       }else{
        printf("Middle node is  %d\n",res);
       }
       break;

       case 13:
       printf("Enter the nth node :");
       scanf("%d",&n);
       data =0;
       if(get_nth_node(head,n,&data)==1){
        printf("last %d node is data is %d",n,data);
       }else{
        printf("Position not found\n");
       }

       break;

       case 14:
       swap_node(&head);
       break;

       case 15:
       sort_list(&head);
       break;

       case 16:
       remove_duplicate(&head);
       break;



      default://exit the loop
      printf("Exiting..\n");
      return 0;
    }
   printf("Enter choice: ");
  }




  return 0;
}