#include <stdio.h>

double main() {

	//float : 32��Ʈ(4����Ʈ), ������ ��� �� ����
	//double : 64��Ʈ, �Ǽ��� ��� �� ����
	double a = 9.8;
	double b = 3.14;

	double hap = a + b;
	double cha = a - b;
	double gop = a * b;
	double mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%f / %f = %f\n", a, b, mok);
}