#include <stdio.h>

int main() {
	int i = 2147483647; //int�� �ִ� 
	printf("%d", i+1); //overflow, underflow ���� 
	return 0;
} 
//���� ���ĳ��� �� ������ ���� ó�� ������ �������� �� : overflow
//���� �ʹ� ���� �� ������ ���� ������ ������ �ö��� �� :underflow 
