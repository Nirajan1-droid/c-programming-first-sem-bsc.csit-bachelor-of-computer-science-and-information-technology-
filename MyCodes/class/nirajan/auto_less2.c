#include<stdio.h>
void fun();
void main()
{
     int a=5;
    printf("the value of a=%d",a);
    fun();
}
void fun()
{
    int a =10;
    printf("value of a within fun is fx:%d",a);

}