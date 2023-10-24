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
        printf("LIst is Allready Empty")
    }
    else if(head->next = NULL)
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

void delete_mid()
{
    
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
    insertfirst(10);
    insertfirst(20);
    Display();
}
