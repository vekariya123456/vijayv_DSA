#include<stdio.h>
#define n 5

int a[n], f=-1, r=-1;

int insert_fierst(int data)
{
    if(r<0)
    {
        f = r = 0;
        a[r]=data;
    }
    else if ((r+1) % n==f)
    {
        printf("Queue is full..\n");
    }
    else
    {
        r=(r+1)%n;
        a[r]=data;
    }
    
}

int delete_first()
{
    if(f>0)
    {
        printf("Queue is Empty..\n");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        
      f=(f+1) % n;
    }
}    
    
int display()
{
        int i=f;
        if(f<0)
        {
            printf("Queue is Empty..\n");
        }
        else
        {
            do
            {
                printf("%d\t",a[i]);
                i=(i+1)%n;
            
            }while(i!=(r+1) % n);
            
        }
}

    int main()
    {
        insert_fierst(10);
        insert_fierst(20);
        insert_fierst(30);
        insert_fierst(40);
        delete_first();
        insert_fierst(50);
        insert_fierst(60);
        delete_first();
        insert_fierst(70);

        display();
        
    }
    
