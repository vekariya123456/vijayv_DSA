#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
    
};

struct  node *head =NULL;

void insertEnd(int val)
{
    struct  node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    
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
   Display();
   insertfirst(100);
   insertfirst(90);
   Display();
}