#include<stdio.h>
void main()
{
    auto int a=5;
    {auto int a=10;
        {
            auto int a=15;
            printf("\n%d",a);

        }
    printf("\n%d",a);
    }
    printf("%d",a);
}