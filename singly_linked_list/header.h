#include<stdio.h>
#include<stdlib.h>
    #include <stdio_ext.h>
typedef struct node{
  int data;
  struct node *link;
}slist;

typedef enum{
  success,failure,failalloc
}status;

status  insert_first(slist ** head,int data);
status  insert_last(slist **head,int data);
status  insert_after(slist ** head , int g_data,int n_data);
status  insert_before(slist **head,int g_data,int n_data);
status  delete_list(slist **head);
status  delete_first(slist **head);
status  delete_last(slist ** head);
int insert_nth(slist **head,int data, int node);
int find_node(slist  *head,int n);
status delete_elemet(slist **head,int data);
int get_nth_node(slist*head,int n,int *data);
status find_middle(slist *head,int *mid);
void print_list(slist *head);
void swap_node(slist **head);
void sort_list(slist **head);
void remove_duplicate(slist **head);
void reverse_list(slist **head);

