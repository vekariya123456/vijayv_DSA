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
    temp->next = NULL;

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
    else if(head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
while (ptr->next != NULL)
  {
     prev = ptr;
     ptr =ptr->next;
  }
  prev->next = NULL;
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
        head = temp;
        return;
    }
    temp->next = ptr;
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
    insertfirst(50);
    insertfirst(60);
    Display();
    insert_mid(80,30);
    insert_mid(105,20);
    Display();
    deleteEnd();
    delete_mid(20);
    Display();
    insertfirst(45);
    Display();
    deletefirst();
    Display();
    deletefirst();
    Display();
}
