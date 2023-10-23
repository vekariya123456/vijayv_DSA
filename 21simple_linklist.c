#include<stdio.h>
#include<stdlib.h>

struct  node
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
    int choice;
    int data;

    printf("\nPress 1 For -->InserEnd");
    printf("\nPress 2 For -->DeleteEnd");
    printf("\nPress 3 For -->Display");
    printf("\nPress 0 For -->Exit Program");

    do
    {
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);

        switch (choice)
        {

            case 1:
            printf("Enter Your Data:");
            scanf("%d",&data);
            insertEnd(data);
            break;

            case 2:
            deleteEnd();
            break;

            case 3:
            Display();
            break;

            case 4:
            printf("Exitb From Program");
            break;

            default:
            printf("Enter Invalice Choice");
            break;
        }    
        
    } while (choice != 0);
    


}
