#include <stdio.h>

int main() {
	char a = 4;
	char b = 8;
	char c = ~a;
	char d = ~b;
	printf("4�� 8�� NOT ���� ��: %d, %d\n", c, d);
	
	a = 6;
	b = 13;
	c = ~a;
	d = ~b;
	printf("6�� 13�� NOT ���� ��: %d, %d\n", c, d);
	
}
