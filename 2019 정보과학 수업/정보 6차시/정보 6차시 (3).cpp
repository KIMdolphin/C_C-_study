#include <stdio.h>

int main() {
	unsigned char num1 = 162; //162: 1010 0010
	unsigned char num2;
	num2 = ~num1; //~ : 반전 0101 1101 (1의 보수) 
	printf("%u\n", num2);
	return 0;
} 

//부호 있는 자료형 1000 0011 => 1111 1100 비트 반전 시 1의 보수 (맨 앞 수는 부호를 나타냄)
//2의 보수 => 1의 보수 + 1
