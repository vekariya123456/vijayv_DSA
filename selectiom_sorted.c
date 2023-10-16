#include<stdio.h>
#include<stdlib.h>
#define n 10
 
int selection_sort(int a[])
{
    int temp;

    for(int i=0; i<n; i++)
      {
        for(int j=i+1; j< n; j++)
        {
            if(a[i] > a[j])
            {
                temp= a[i];
                a[i]= a[j];
                a[j]=temp;
            }
        }
    }


}
int main()
{
    int a[n];

    for(int i=0; i<n; i++)
    {
        a[i]= rand() % 100;
    }

    printf("Random Array is :");
    for(int i=0; i<n; i++)
    { 
        printf("%d ",a[i]);
    }
    
    selection_sort(a);
    
    printf("\nShorted Array is:");
    
    for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
   
}