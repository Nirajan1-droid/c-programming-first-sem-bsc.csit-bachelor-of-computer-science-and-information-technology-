#include<stdio.h>
int fun(int n)
{
    if (n==1)
        return 1;
    else 
     return 1+ fun(n-1);

}
int main()
{
    int n , ptr;
    printf("the value assigned to n is:");
    scanf("%d", &n);

    printf("%d", fun(n));
    return 0;

}