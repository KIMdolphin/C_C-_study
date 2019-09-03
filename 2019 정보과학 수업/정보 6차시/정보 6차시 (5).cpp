#include <stdio.h>

int main() {
	char a = 4;
	char b = 8;
	char c = ~a;
	char d = ~b;
	printf("4와 8의 NOT 연산 값: %d, %d\n", c, d);
	
	a = 6;
	b = 13;
	c = ~a;
	d = ~b;
	printf("6와 13의 NOT 연산 값: %d, %d\n", c, d);
	
}
