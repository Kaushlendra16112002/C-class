 #include <stdio.h>
int main()
{
  float maths,science,English,Total,Average,Per;
  printf("Enter your maths no:\n");
  scanf("%f",&maths);
  printf("Enter your science no:?n");
  scanf("%f",&science);
  printf("Enter your English no:\n");
  scanf("%f",&English);
Total=maths+science+English;
Average=Total/3;
Per=(Total*100)/300;

    if(Per>=75)
    {
    printf("you have more than 75 no");

}
else if(Per>=40)
{
printf("you are fail");
}
    return 0;
}
