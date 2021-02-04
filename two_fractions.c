//WAP to find the sum of two fractions.
#include <stdio.h>
#include <math.h>

struct fraction
{
    int num,den;
};
typedef struct fraction Fraction;



Fraction input() {
    Fraction p;
    printf("Enter the numerator ");
    scanf("%d",&p.num);
    printf("Enter the denominator: ");
    scanf("%d",&p.den);
    return p;
}

Fraction distance(Fraction A, Fraction B) { 
    Fraction d;
    d.den=A.den*B.den;
    d.num=A.num*B.den+A.den*B.num;
    return d;
}

void output(Fraction A, Fraction B, Fraction d) { printf("The sum is %d\\%d\n",d.num,d.den); }

int main() {
    Fraction A=input();
    Fraction B=input();
    Fraction d=distance(A,B);
    output(A,B,d);
    return 0;
}
