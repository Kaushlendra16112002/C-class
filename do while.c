#include <stdio.h>
int main()
{
    int n,i,t;
    printf("Enter your no:\n");
    scanf("%d",&n);
    i=0;
while (i<200)
     {
         t=n*i;
         printf("%d",&t);
         i++;
     }

    return 0;
}
