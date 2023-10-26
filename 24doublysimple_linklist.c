#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct  node *prev;

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
        return;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    return;
}

void deleteEnd()
{
    struct  node *ptr = head;
    struct node *p;

    if(head == NULL)
    {
        printf("List is Allready Empty..");
        return;
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
while (ptr->next != NULL)
  {
     p = ptr;
     ptr =ptr->next;
  }
  p->next = NULL;
  free(ptr);
  return;
}

void insertfirst(int val)
{   
    struct  node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data =val;

    if(head == NULL)
    {
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
        return;
    }
    temp->next = ptr;
    temp->prev = NULL;
    ptr->prev = temp;
    head = temp;
    return;
}

void deletefirst()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("List is Allready Empty...");
        return;
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    head = ptr->next;
    head->prev = NULL;
    free(ptr);
    return;
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
    temp->prev = ptr;
    ptr->next->prev = temp;
    ptr->next = temp;
    return;
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
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
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
    else
    {
        while(ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    } 
    printf("\n");
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    Display();
    deleteEnd();
    Display();
    insertfirst(80);
    Display();
    deletefirst();
    Display();
    insert_mid(100,20);
    Display();
    delete_mid(20);
    Display();
}