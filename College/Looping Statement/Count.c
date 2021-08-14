#include <stdio.h>  
int main()  
{  
   int n;  // variable declaration  
   int count=0;   // variable declaration  
   printf("Enter a number");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
if(count==6)
{
 int  rev = 0, remainder;
    
    scanf("%d", &n);
    while (n != 0) 
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n =n/10;
    }
   printf("Reversed number = %d", rev);
    return 0;
}
else
 {
printf("the given number is not of 6 digits");
 }
    
}  