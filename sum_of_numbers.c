#include <stdio.h>

int getLength() {
	int len;
	printf("Enter Total numbers\n");
    scanf("%d", &len);
	return len;
}

void getInput(int len, int a[len]) {
    for (int i = 0; i < len; i++) {
        printf("Enter the element no %d of the array\n", i + 1);
        scanf("%d", &a[i]);
    }
}

int computeSum(int len, int a[len]) {
    int total = 0;
    for (int i = 0; i < len; i++) {
        total += a[i];
    }
    return total;
}

int output(int len, int a[len], int total) {
    int i;
    printf("The Sum of");
    for(i=0;i<len-1;i++) {
        printf(" %d +",a[i]);
    }
    printf("%d is %d\n", a[i], total);
}

int main() {
    int len=getLength(), total;
    int a[len];
    getInput(len, a);
    total=computeSum(len, a);
    output(len, a, total);
}
