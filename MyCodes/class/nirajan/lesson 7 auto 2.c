#include<stdio.h>
void main()
{
    auto int a=2;
    {
        { 
            { 
             printf("%d\n",a);
            }
         printf("%d\n",a);
        }
        printf("%d\n",a);
    }
}