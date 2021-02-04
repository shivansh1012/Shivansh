#include <stdio.h>
int main()
{
    double h,b,d,VolumeOfTromboloid;
    printf("Enter value of h:");
    scanf("%lf",&h);
    printf("Enter value of d:");
    scanf("%lf",&d);
    printf("Enter value of b:");
    scanf("%lf",&b);
    if(b==0) printf("b cannot be 0\n");
    else
    {
        VolumeOfTromboloid=(1/(double)3)*((h*d*b)+(d/b));
        printf("Volume of tromboloid is:%lf\n",VolumeOfTromboloid);
    }
    return 0;
}
