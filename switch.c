 #include <stdio.h>
int main()
{
  int n,result;
  printf("enter an no:\n");
  scanf("%d",&n);
  result=n%2;
  
  switch (result)
{ 
  case 0:
 
     printf("%d your no is even:");
      break;
  
 case 1:
 printf("%d Your no is odd:");
  break;
  }
 
    return 0;
}
