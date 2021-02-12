#include <stdio.h>
#include <math.h>

struct fraction {
    int num, den;
};
typedef struct fraction Fraction;

Fraction getFraction() {
    Fraction p;
    printf("Enter the numerator ");
    scanf("%d", &p.num);
    printf("Enter the denominator: ");
    scanf("%d", &p.den);
    return p;
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

Fraction computeSum(Fraction A, Fraction B) {
    Fraction d;
    d.den = A.den * B.den;
    d.num = A.num * B.den + A.den * B.num;
    int divisor=computeGCD(d.num,d.den);
    d.num= d.num/divisor;
	d.den= d.den/divisor;
    return d;
}

void output(Fraction A, Fraction B, Fraction d) {
    printf("The sum of %d\\%d + %d\\%d is %d\\%d\n",A.num, A.den, B.num, B.den, d.num, d.den); 
}

int main() {
    Fraction A = getFraction();
    Fraction B = getFraction();
    Fraction d = computeSum(A, B);
    output(A, B, d);
    return 0;
}
