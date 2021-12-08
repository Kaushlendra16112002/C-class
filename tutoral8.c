#include <stdio.h>
int main()
{  

int age;
printf("Enter your age:\n");
scanf("%d",&age);

switch (age)
{
    case 1:
    printf("Your age is:1");
    break;

    case 23:
    printf("Your age is:23");
    break;
      default:
      printf("Your age is not presnt");

}
return 0;

}