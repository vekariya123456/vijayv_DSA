#include<stdio.h>

struct node
{
    int data;
    char ch;
    struct  node *ptr;

};

int main()
{
    struct  node a,b,c;
    
    a.data = 65;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 97;
    b.ch = 'B';
    b.ptr = NULL;

    c.data = 50;
    c.ch = 'C';
    c.ptr = NULL;

   // printf("A Data: %d Char: %c",a.data,a.ch);
   // printf("\nB Data: %d Char: %c",b.data,b.ch);

    
    a.ptr = &b;
    b.ptr = &a;
    c.ptr = &b;   

    printf("\nA Data: %d,Char: %c",a.ptr->data,a.ptr->ch);
    printf("\nB Data: %d, Char: %c",b.ptr->data,b.ptr->ch);
    printf("\nC Data: %d, Char: %c",c.ptr->data,c.ptr->ch);


    
}