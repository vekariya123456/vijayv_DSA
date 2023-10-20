#include<stdio.h>
#define n 5
         
int a[n],top=-1;


int insertEnd(int data)
{
    if(top >= n-1)
    {
        printf("Stack is Overflow\n");
    }
    else
    {
        top++;
        a[top]= data;
    }
}

int delete()
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

int display()
{
    for(int i=0; i<= top; i++)
    { 
        printf("%d ", a[i]);
    }
}

    
int main()
{
  int choice;
  int data;
  
do
 {
  printf("\n\nStack Operation\n");
  printf("Press 1. For Insert data\n");
  printf("Press 2. For Delete data\n");
  printf("Press 3. For Dislpay data\n");
  printf("Press 4. For Exit Program\n");
   
  printf("Enter Your Choise:");
  scanf("%d",&choice);
  
  switch(choice)
  {
      case 1:
      printf("Enter the Element to insert: ");
      scanf("%d", &data);
      insertEnd(data);
      break;
      
      case 2:
      delete();
      break;
      
      case 3:
      display();
      break;
      
      case 4:
      printf("\nExit From Program");
      break;
      
      default:
      printf("\nEnter Invalid Choice\n");
      break;
    }
 }
  while(choice !=4);    
    
}
