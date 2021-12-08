#include <stdio.h>
int main()
{
    int Year;
    printf("Enter your year:\n");
    scanf("%d",&year);
if(365%52==1)
   { 
       printf(" This year  is leap year:");
   }
else(365%52==0)
   { 
       printf("This year is not leap year:");
   }
   return 0;
}
