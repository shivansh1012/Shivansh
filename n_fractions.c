//WAP to find the sum of n fractions.
#include <stdio.h>
int len;
struct fraction
{
    float num,den;
};
typedef struct fraction Fraction;

Fraction input() {
    Fraction p;
    printf("Enter the numerator ");
    scanf("%f",&p.num);
    printf("Enter the denominator: ");
    scanf("%f",&p.den);
    return p;
}

void input_arr(Fraction a[len]) {
    for(int i=0;i<len;i++){
        a[i]=input();
    }
}

float sum(Fraction a) { 
    float d;
    d=a.num/a.den;
    return d;
}

void output(float d) { printf("The sum is %f\n",d); }

int main() {
    printf("Enter Total numbers\n");
    scanf("%d",&len);
    Fraction a[len];
    input_arr(a);
    float total=0;
    for (int i=0;i<len;i++) total+=  sum(a[i]);
    output(total);
    return 0;
}
