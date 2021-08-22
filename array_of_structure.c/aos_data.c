#include<stdio.h>
struct details
{
    int name;
    int address;
    float date_of_birth;
    char blood_group;

};
int main()
{
    struct details d[2];
    int i;
    for (  i = 0; i < 2; i++)
    {
        printf("enter the details %d name ",i+1);
        scanf("%d",&d[i].name);
        printf("enter the details %d address\n",i+1);
        scanf("%d",&d[i].address);
        printf("enter the details %f date of birth \n",i+1);
        scanf("%f",&d[i].date_of_birth);
        printf("enter the details %c blood group\n",i+1);
        scanf("%c\n",&d[i].blood_group);

    }
    for (  i = 0; i < 2; i++)

    {
        printf("\n details %d name:\n",i+1);
        printf("\n name :%d\n ",&d[i].name);
        printf("\n address: %d\n",&d[i].address);
        printf("\n date of birth: %f\n",&d[i].date_of_birth);
        printf("\n blood group :%c\n",&d[i].blood_group);

    }
return 0;

    
}