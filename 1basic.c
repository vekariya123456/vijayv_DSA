/*
     operator=> arithmatic => +, -, *, /, %
               ralational  =>  <, >, <=, >=, ==, !=
               logical     => &&, ||(pipe), ! 
               assignment  =>  +=,-=,*=,/=,%=
               unary       =>  ++,--
               ternary     => ?, :
*/

#include<stdio.h>

int main()
{
    int a=2, b=3, c;
    
    // AND(&&)--> first digit 0 than no check condition
    // OR(||) --> first digit 1 than no check condition
    
    
//   c = a && b;
//   printf("a:%d, b:%d,c:%d", a,b,c);
    
//    c = a || b;
//    printf("a:%d, b:%d,c:%d", a,b,c);
    
//    c = --a && b;
//    printf("a:%d, b:%d,c:%d", a,b,c);
    
//    c = a && --b;
//    printf("a:%d, b:%d,c:%d", a,b,c);

//    c = --a && --b;
//    printf("a:%d, b:%d,c:%d", a,b,c);

    c = a || --b;
    printf("a:%d, b:%d,c:%d", a,b,c);


}



