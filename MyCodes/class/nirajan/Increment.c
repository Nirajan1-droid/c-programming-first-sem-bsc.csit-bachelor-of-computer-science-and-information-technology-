#include<stdio.h>
void increment();
void decrement();

void main()

{
    int i=10;
    
    printf("valuee of i%d",i);
    increment();
    increment();
    decrement();
    decrement();


}

void increment()
{
    int i=10 ;
    i++;
    printf("value of i=%d",i);

}
void decrement()
{
    int i=10;

    i--;
    printf("value of i=%d",i);

}