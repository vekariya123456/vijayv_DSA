#include<stdio.h>

int main()
{
    int a=4, b=2 , c=3, d;
    
    d = a && b && --c;
    printf("a:%d b:%d c:%d d:%d",a,b,c,d);
    
//    d= a && b || --c;
//    printf("a:%d b:%d c:%d d:%d",a,b,c,d);
    
//    d = a || b && --c;
//    printf("a:%d b:%d c:%d d:%d",a,b,c,d);
}
