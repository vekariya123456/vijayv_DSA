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
    
   int choice, value, position;
   
   while(1)
   {
       printf("***************************************************\n");
       printf("||=================|| MENU ||======================\n");
       printf("***************************************************\n");
       
       printf("1. insert End\n");
       printf("2. Delete End\n");
       printf("3. insert First\n");
       printf("4. delete First\n");
       printf("5. insert Mid\n");
       printf("6. delete Mid\n");
       printf("7. Display \n");
       printf("8. Exit \n");
       
       printf("***************************************************\n");
       
       printf("Enter Your Choice:");
       scanf("%d",&choice);
       
       switch(choice)
       {
           case 1:
           printf("Enter the Value to Insert:");
           scanf("%d",&value);
           insertEnd(value);
           break;
           
           case 2:
           deleteEnd();
           break;
           
           case 3:
           printf("Enter the Value to Insert:");
           scanf("%d",&value);
           insertfirst(value);
           break;
           
           case 4:
           deletefirst();
           break;
           
           case 5:
           printf("Enter the position to Insert:");
           scanf("%d",&position);
           printf("Enter the Value to Insert:");
           scanf("%d",&value);
           insert_mid(value, position);
           break;
           
           case 6:
           printf("Enter the position to delete:");
           scanf("%d",&position);
           delete_mid(position);
           break;
           
           case 7:
           Display();
           break;
           
           case 8:
           exit(0);
           
           default:
           printf("invalid Choice\n");
           
        }
       
    }
    return 0;
}



























