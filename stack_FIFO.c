#include<stdio.h>
#define n 5

int a[n], top= -1;

int insertEnd(int data)
{
    if(top >= n-1)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        top++;
        a[top]= data;
    }
}



int Deletelast()
{
    if(top < 0)
    {
        printf("Stack is Empty\n");  
    }
    else
    {
        top--;
    }    
    
}

int firstinsert(int data)
{
    if(top >= n-1)
    {
       printf("Stack is overflow...\n");
    }

    else if(top < 0)
    {
        top++;
        a[top]=data;
    }

    else
    {
        top++;
        
        for(int i=top; i >=0; i--)
        {
            a[i]= a[i - 1];
        } 
        a[0]= data;
    }
}
int firstdelete()
{
    if(top < 0)
    {
        printf("Stack is Empty....\n");
    }
    else 
    {
         for(int i=0; i<top; i++)
         {
            a[i]= a[i + 1];
         }
         top--;
    }
}    



int display()
{
    for(int i=0;i<= top;i++)
    {
        printf("%d ",a[i]);
    }
}



int main()
{
    int choice;
    int data;

 do
   {  
        printf("\n\nStack Operation\n");
        printf("Press 1. For Last location Insert data\n");
        printf("Press 2. For Last location Delete data\n");
        printf("Press 3. For Firtst Location Insert data\n");
        printf("Press 4. For Firtst Location DElete data\n");
       
        printf("Press 5. For Dislpay data\n");
        printf("Press 6. For Exit Program\n");
     
        printf("Enter Your Choise:");
        scanf("%d",&choice);

    switch(choice)
    {
      case 1:
      printf("Enter the Element to insert last Location: ");
      scanf("%d", &data);
      insertEnd(data);
      break;
      
      case 2:
      Deletelast();
      break;
      
      case 3:
      printf("Enter the Element to insert First Location : ");
      scanf("%d", &data);
      firstinsert(data);
      break;

      case 4:
      firstdelete();
      
      case 5:
      display();
      
      case 6:
      printf("\nExit From Program");
      break;
      
      default:
      printf("\nEnter Invalid Choice\n");
      break;
    }
 }
  while(choice !=6);    
     
    
}
    
    
