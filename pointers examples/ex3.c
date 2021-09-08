#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char *ppp="programming language";
    char **p=&ppp;//pointer is pointing towards the address of ppp
    int pp;//next pp is defined
    printf("\n%s and %s",*p,ppp);//basically ordering to print the defined things on these pointer and ppp.
    pp=strlen(*p);//pp=number of character present in ppp
    printf("\n%8d\t%4d\t%4d\t%4d\t%4d\t",pp--,pp,++pp,pp++,--pp);// 4d represents the no of space/width with each \t.
    if (strcmp("abandon","abandonment")<=0)//strcmp=string comparison ..so this does comparision between the variables
        pp=10;                            //provided within the brackets abandon & abandonment
    printf("value of pp=%d",pp);            //here, abandon=7, abandonment=11, 7-11<0 or, -4<0,, condition true 
    getch();                                // so, pp becomes 10, irrespective of its past values. 
    return;


}