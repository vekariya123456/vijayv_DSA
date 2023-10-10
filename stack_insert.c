#include<stdio.h>
#define n 5

int a[n], top=-1;
int insertEnd(int data)
  {
    if(top>= n-1)
     {
        printf("Stack is Overflow\n");
     }
     else
     {
        top++;
        a[top]= data;
     }
  }

  int display()
  {
      for(int i=0; i<=top;i++)
      {
        printf("%d ",a[i]);
      }
  }

  int main()
  {
    insertEnd(100);
    insertEnd(200);
    insertEnd(300);
    insertEnd(400);
    insertEnd(500);
   // insertEnd(600);
     
    display();
     
    
  }