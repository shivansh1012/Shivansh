#include <stdio.h>
#include <math.h>

struct fraction {
    int num, den;
};
typedef struct fraction Fraction;

Fraction getFraction() {
    Fraction tempFract;
    printf("Enter the numerator ");
    scanf("%d", &tempFract.num);
    printf("Enter the denominator: ");
    scanf("%d", &tempFract.den);
    return tempFract;
}

int computeGCD(int num, int den) {
	int div;
	for (int i = 1; i <= num && i <= den; i++)
	{
		if (num % i == 0 && den % i == 0)
			div = i;
	}
	return div;
}

Fraction computeSum(Fraction frac1, Fraction frac2) {
    Fraction sum;
    sum.den = frac1.den * frac2.den;
    sum.num = frac1.num * frac2.den + frac1.den * frac2.num;
    int divisor=computeGCD(sum.num,sum.den);
    sum.num= sum.num/divisor;
	sum.den= sum.den/divisor;
    return sum;
}

void output(Fraction frac1, Fraction frac2, Fraction total) {
    printf("The sum of %d\\%d + %d\\%d is %d\\%d\n",frac1.num, frac1.den, frac2.num, frac2.den, total.num, total.den); 
}

int main() {
    Fraction frac1 = getFraction();
    Fraction frac2 = getFraction();
    Fraction total = computeSum(frac1, frac2);
    output(frac1, frac2, total);
    return 0;
}
