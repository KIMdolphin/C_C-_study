#include <stdio.h>
//putchar() : putchar(������)���� ���� ����� �� ���� 

main() {
	char var = 'A';
	putchar(var); //�Լ��� ��ȣ �ȿ� ������ ������ ���� 
	putchar(var+1); //������ ���� 
	putchar('\n'); // escape ���ڰ� ���� 
	putchar('\n');
	putchar('K'); //������ ����� ���� 
	putchar('K'+2); //������ ���� 
	putchar('\007'); //escape ���ڰ� ����(\007�� \a�� ���� �ǹ�) 
} 
