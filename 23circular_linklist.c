#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct  node *head =NULL;

void insertEnd(int val)
{
    struct  node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    
    if(head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    while(ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    return;
}

void insertfirst(int val)
{   
    struct  node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data =val;

    if(head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    
    ptr->next = temp;
    temp->next = head;
    head = temp;
}

void insert_mid(int val,int pos)
{ 
    struct  node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    while(ptr->data != pos)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
    return;
}

void deleteEnd()
{
    struct  node *ptr = head;
    struct node *prev;

    if(head == NULL)
    {
        printf("List is Allready Empty..");
        return;
    }
    
while (ptr->next != head)
  {
     prev = ptr;
     ptr =ptr->next;
  }
  prev->next = head;
  free(ptr);
  return;
}

void deletefirst()
{
    struct node *ptr = head;
    struct  node *temp;
        
    if(head == NULL)
    {
        printf("List is Allready Empty...");
        return;
    }
    while (ptr->next != head)
    {
        ptr = ptr->next; 
    }
    
    temp = head;
    head = head->next;
    ptr->next = head;
    free(temp);
}

void delete_mid(int pos)
{
    struct node *ptr =head;
    struct  node *prev;

    while(ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    free(ptr);
    return; 
} 
void Display()
{
    struct node *ptr = head;
    if(head == NULL)
     {
        printf("List is Empty..");
     }
   do
   {
     printf("%d ",ptr->data);
     ptr = ptr->next;
   } while (ptr != head);
   
    printf("\n");
}


int main()
{
   insertEnd(10);
   insertEnd(20);
   insertEnd(30);
   insertEnd(40);
   Display();
   deletefirst();
   Display();
   insert_mid(80,30);
   Display();
   delete_mid(80);
   Display();
   deleteEnd();
   Display();
}