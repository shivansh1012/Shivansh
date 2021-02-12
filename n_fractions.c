#include <stdio.h>

struct fraction {
    int num, den;
};
typedef struct fraction Fraction;

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

Fraction computeSum(Fraction a[], int size) {
    Fraction total;
	total.num = 0;
	total.den = 1;

	for (int i = 0; i < size; i++) {
		total.num = total.num * a[i].den + a[i].num * total.den;
		total.den = total.den * a[i].den;
	}
	
	return total;
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

void output(int len, Fraction a[len], Fraction f) {
	int i;
	printf("The sum of ");
	for(i=0;i<len-1;i++)
		printf(" %d\\%d +",a[i].num, a[i].den); 

	printf("%d\\%d is: %d/%d", a[i].num, a[i].den, f.num, f.den);
}


int main() {
    int len, divisor;
	Fraction result;

    printf("Enter Total numbers\n");
    scanf("%d", &len);
    Fraction a[len];

	getArray(len, a);

    result = computeSum(a, len);

    divisor = computeGCD(result.num, result.den);

	result = computeAnswer(result, divisor);

	output(len, a, result);
    return 0;

}
