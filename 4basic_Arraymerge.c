#include<stdio.h>

int main()
{
    int arr1[50], arr2[50],mergearr[100];
    int i,n,m,j=0;
    
    
    //ARR 1
    printf("Enter Array 1 limit: ");
    scanf("%d",&n);
    
    printf("Enter Array 1 Element: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    printf("Array 1 Element value is: ");
    for(i=0; i<n; i++)
    {
        printf("%d, ",arr1[i]);
    }
   
   
   //ARR 2
    printf("\n\nEnter Array 2 limit: ");
    scanf("%d",&m);
    
    printf("Enter Array 2 Element: ");
    for(i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    printf("Array 2 Element value is: ");
    for(i=0; i<m; i++)
    {
        printf("%d, ",arr2[i]);
    }
    
    
   //MERGE ARRAY
    printf("\n\nMerge Array1 + Array2 :");
    for(i=0; i<n; i++)
    {
        mergearr[j]= arr1[i];
        j++;
    }
    
    for(i=0; i<m; i++)
    {
        mergearr[j]= arr2[i];
        j++;
    }
    
    printf("\nMerge Array value is: ");
    for(i=0; i<(n+m); i++)
    {
        printf("%d, ",mergearr[i]);
    }   
}   
