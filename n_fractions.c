#include <stdio.h>
struct fraction
{
    int num, den;
};
typedef struct fraction Fraction;

Fraction addition(Fraction f1, Fraction f2)
{
	Fraction res;
	res.den = f1.den * f2.den;
	res.num = (f1.num * f2.den) + (f2.num * f1.den);

	return res;
}

Fraction sum(Fraction a[], int size)
{
    Fraction total;
	total.num = 0;
	total.den = 1;

	for (int i = 0; i < size; i++)
		total = addition(total, a[i]);

	return total;
}

int gcd(int num, int den)
{
	int div;
	for (int i = 1; i <= num && i <= den; i++)
	{
		if (num % i == 0 && den % i == 0)
			div = i;
	}
	return div;
}

Fraction reduce_lowest(Fraction f, int divisor)
{
    f.num /= divisor;
	f.den /= divisor;

    return f;
}

void output(Fraction f, int divisor)
{
	printf("The answer is: %d/%d", f.num, f.den);
}


int main()
{
    int len, divisor;
	Fraction result;

    printf("Enter Total numbers\n");
    scanf("%d", &len);
    Fraction a[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter the numerator ");
        scanf("%d", &a[i].num);
        printf("Enter the denominator: ");
        scanf("%d", &a[i].den);
    }
    result = sum(a, len);
    divisor = gcd(result.num, result.den);
	result = reduce_lowest(result, divisor);
	output(result, divisor);
    return 0;

}
