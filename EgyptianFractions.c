#include <stdio.h>

struct fraction {
    int num, den;
};
typedef struct fraction Fraction;

struct egyptianfraction{
    int TotalFractions;
    Fraction fraction[100];
    Fraction sum;
};
typedef struct egyptianfraction EgyptianFraction;

EgyptianFraction input_one_Fraction(){
    EgyptianFraction temp;
    scanf("%d",&temp.TotalFractions);
    for(int i=0;i<temp.TotalFractions;i++) {
        temp.fraction[i].num=1;
        scanf("%d",&temp.fraction[i].den);
    }
    return temp;
}

void input_n_Fractions(int TestCases, EgyptianFraction eFraction[TestCases]){
    for(int i=0;i<TestCases;i++) {
        eFraction[i]=input_one_Fraction();
    }
}

int computeGCD(int num, int den) {
	int div=1;
	for (int i = 2; i <= num && i <= den; i++)
	{
		if (num % i == 0 && den % i == 0)
			div = i;
	}
	return div;
}

Fraction computeAnswer(Fraction total, int divisor) {
	total.num= total.num/divisor;
	total.den= total.den/divisor;
	return total;
}

void compute_one_Fraction(EgyptianFraction *eFraction) {
    eFraction->sum.num=eFraction->fraction[0].num;
    eFraction->sum.den=eFraction->fraction[0].den;

    for (int i = 1; i < eFraction->TotalFractions; i++) {
		eFraction->sum.num = eFraction->sum.num * eFraction->fraction[i].den + eFraction->fraction[i].num * eFraction->sum.den;
		eFraction->sum.den = eFraction->sum.den * eFraction->fraction[i].den;
	}

    int divisor=computeGCD(eFraction->sum.num, eFraction->sum.den);

    eFraction->sum.num= eFraction->sum.num/divisor;
	eFraction->sum.den= eFraction->sum.den/divisor;

}

void compute_n_Fractions(int TestCases, EgyptianFraction eFraction[TestCases]){
    for(int i=0;i<TestCases;i++) {
        compute_one_Fraction(&eFraction[i]);
    }
}

void print_one_Fraction(EgyptianFraction eFraction) {
	int i;
	for(i=0;i<eFraction.TotalFractions-1;i++)
		printf(" %d/%d +",eFraction.fraction[i].num, eFraction.fraction[i].den); 

	printf(" %d/%d = %d/%d\n", eFraction.fraction[i].num, eFraction.fraction[i].den, eFraction.sum.num, eFraction.sum.den);
}

void print_n_Fractions(int TestCases, EgyptianFraction eFraction[TestCases]){
    for(int i=0;i<TestCases;i++) {
        print_one_Fraction(eFraction[i]);
    }
}

int main() {
    int TestCases;
    scanf("%d",&TestCases);
    EgyptianFraction eFraction[100];
    input_n_Fractions(TestCases, eFraction);
    compute_n_Fractions(TestCases, eFraction);
    print_n_Fractions(TestCases, eFraction);
    return 0;
}
