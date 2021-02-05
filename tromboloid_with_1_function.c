#include <stdio.h>
int main()
{
    double h,b,d,VolumeOfTromboloid;
    printf("Enter value of h of tromboliod:");
    scanf("%lf",&h);
    printf("Enter value of d of tromboliod:");
    scanf("%lf",&d);
    printf("Enter value of b of tromboliod:");
    scanf("%lf",&b);
    if(b==0) printf("b cannot be 0\n");
    else
    {
        VolumeOfTromboloid=(1/(double)3)*((h*d*b)+(d/b));
        printf("Volume of tromboloid is:%lf\n",VolumeOfTromboloid);
    }
    return 0;
}
