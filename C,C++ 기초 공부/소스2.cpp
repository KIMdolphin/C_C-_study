#include <stdio.h>

double main() {

	//float : 32비트(4바이트), 정수를 담는 데 쓰임
	//double : 64비트, 실수를 담는 데 쓰임
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