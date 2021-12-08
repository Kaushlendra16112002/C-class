#include <stdio.h>
int main()
{
    int year;
    printf("Enter your year:");
 scanf("%d",&year);
    if(365/52==1)
   { 
       printf("Your year  is leap year");
   }
else
   { 
       printf("Your not an leap year:");
   }
   

   return 0;
}