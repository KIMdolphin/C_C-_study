#include <stdio.h>

int main() {
	unsigned char num1 = 162; //162: 1010 0010
	unsigned char num2;
	num2 = ~num1; //~ : ���� 0101 1101 (1�� ����) 
	printf("%u\n", num2);
	return 0;
} 

//��ȣ �ִ� �ڷ��� 1000 0011 => 1111 1100 ��Ʈ ���� �� 1�� ���� (�� �� ���� ��ȣ�� ��Ÿ��)
//2�� ���� => 1�� ���� + 1
