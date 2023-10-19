#include<stdio.h>
#define n 5
int a[n] , f = -1 , r = -1;

int insert_Last(int data)
{
    if (r < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else if ((r + 1)% n == f)
    {
        printf("Queue Is Full...\n");
    }
    else
    {
        r = (r + 1)% n;
        a[r] = data;
    }
}

int delete_First()
{
    if (f < 0)
    {
        printf("Queue Is Empty...\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f = (f + 1 ) % n;
    }
}

int insert_first(int data)
{
    if (f < 0)
    {
        f = r = 0;
        a[f] = data;        
    }
    else if (f == 0)
    {
        printf("\nNot Added To This Position\n");
    }
    else
    {
        f--;
        a[f] = data;
    }
}

int delete_Last()
{
    if (r < 0)
    {
        printf("Queue Is Empty.\n");
    }
    else if (r == f)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
}

int display()
{
   for (int i = f; i <= r; i++)
   {
        printf("%d\t",a[i]);    
   }
}

int main()
{

    int choice;
    int data;

 do
   {  
        printf("\n\ndequeue Operation\n");
        printf("Press 1. For First Insert data\n");
        printf("Press 2. For First Delete data\n");
        printf("Press 3. For Last Insert data\n");
        printf("Press 4. For last Delete data\n");
       
        printf("Press 5. For Dislpay data\n");
        printf("Press 6. For Exit Program\n");
     
        printf("Enter Your Choise:");
        scanf("%d",&choice);

    switch(choice)
    {
      case 1:
      printf("Enter the Element to insert First Location: ");
      scanf("%d", &data);
      insert_first(data);
      break;
      
      case 2:
      delete_First();
      break;
      
      case 3:
      printf("Enter the Element to insert Last Location : ");
      scanf("%d", &data);
      insert_Last(data);
     break;

      case 4:
      delete_Last();
      break;
      
      case 5:
      display();
      break;
      
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
    
    




