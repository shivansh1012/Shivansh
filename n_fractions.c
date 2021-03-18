#include <stdio.h>

struct fraction {
    int num, den;
};
typedef struct fraction Fraction;

int getLength() {
	int len;
	printf("Enter Total numbers\n");
    scanf("%d", &len);
	return len;
}
Fraction getFraction() {
    Fraction newFraction;
    printf("Enter numerator: ");
    scanf("%d", &newFraction.num);
    printf("Enter denominator: ");
    scanf("%d", &newFraction.den);

    return newFraction;
}

void getArray(int len, Fraction arr[len]) {
	printf("Enter the array elements\n");
	for (int i=0;i<len;i++) {
		arr[i]=getFraction();
	}
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

Fraction computeAnswer(Fraction total, int divisor) {
	total.num= total.num/divisor;
	total.den= total.den/divisor;
	return total;
}

Fraction computeSum(Fraction a[], int size) {
    Fraction total;
	total.num = 0;
	total.den = 1;

	for (int i = 0; i < size; i++) {
		total.num = total.num * a[i].den + a[i].num * total.den;
		total.den = total.den * a[i].den;
	}

	int divisor = computeGCD(total.num, total.den);
	total=computeAnswer(total, divisor);

	return total;
}



void output(int len, Fraction allFractions[len], Fraction f) {
	int i;
	printf("The sum of ");
	for(i=0;i<len-1;i++)
		printf(" %d/%d +",allFractions[i].num, allFractions[i].den); 

	printf(" %d/%d is: %d/%d", allFractions[i].num, allFractions[i].den, f.num, f.den);
}


int main() {
    int len=getLength();
	
    Fraction allFractions[len];
	getArray(len, allFractions);

    Fraction result = computeSum(allFractions, len);
	output(len, allFractions, result);
	
    return 0;
}
