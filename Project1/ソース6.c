#include<stdio.h>

void main(void) {
	//char c[100];
	//gets(c);
	//puts(c);

	int i, sum = 0, mul = 1;

	for (i = 1 ; i <= 5 ; i++) {
		sum += i;
		mul *= i;

	}
	printf("˜a = %d\n", sum);
	printf("Ï = %d\n", mul);
}
