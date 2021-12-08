#include <stdio.h>
void average(int maths, int science, int english, int physics, int hindi)
{
    float avg;

    avg = (float)(maths + science + english + physics + hindi) / 5;
    printf("%.2f is avg of subject", avg);
}
void main()
{
    int maths, science, english, physics, hindi;
    printf("enter five subject marks");
    scanf("%d%d%d%d%d", &maths, &science, &english, &physics, &hindi);

    average(maths, science, english, physics, hindi);
}
