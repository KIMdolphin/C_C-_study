#include <stdio.h>

main() {
	char g[10], h[10]; // ���� char�ε� �迭 ������ ��� ����� �� ���� ��ŭ�� ���ڿ��� ����� �� �ִ�. 
	
	scanf("%s %s", g, h);
	
	printf("�̸�: %s, ����: %s", g, h);
	printf(" sizeof(g) = %d", sizeof(g));
} 
