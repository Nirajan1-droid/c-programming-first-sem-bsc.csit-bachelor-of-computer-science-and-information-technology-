#include<stdio.h>
void main()
{
    struct book
    {
        char name;
        float price;
        int page_number;

    };
    struct book b1={'A',100.2, 300};
    printf("Address of name:%u\n",&b1.name);
    printf("address of price:%u\n",&b1.price);
    printf("address of page_number:%u\n",&b1.page_number);

}