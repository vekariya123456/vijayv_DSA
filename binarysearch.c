#include<stdio.h>

int binery_serch(int a[] ,int d , int n)
{
    int  l = 0 ,h = n - 1 , mid;
    while( l <= h)
    {
        mid = (l + h) / 2;
        
        if(a[mid] == d)
        {
            return mid + 1;
        }
        
        else if(a[mid] < d)
        {
            l = mid + 1;
        }
        
        else
        {
            h = mid - 1; 
        }
    }
    return - 1;
}

int main()
{
    int a[] = {10 , 20 ,30 , 40 ,50, 60, 70, 80, 90 , 100} , i , d , n;
    
    n = sizeof(a) / sizeof(a[0]);
    
    printf("Array size : %d\n",n);
    
    for(int i = 0 ; i < n; i++)
    {
        printf("%d ,",a[i]);
    }    
    printf("\nEnter Elemenat Number : ");
    scanf("%d",&d);
    
    int b = binery_serch(a , d ,n);
    
    if(b > 0)
    {
        printf("Elemenat is Found on %d Position \n " ,b);
        
    }
    else
    {
        printf("Elemenat is not Found .");
    }
    
}
