#include <stdio.h> 
//gets() : ���ڿ�(char) �Է¹޴� �Լ�

main() {
	char s[50]; //���ڿ��� �����ϱ� ���� �迭���� s�� �迭 ���� 
	printf("���ڿ� �Է�?");
	gets(s); //gets()�� �̿��Ͽ� ���ڿ��� �޾Ƶ��� 
	printf("gets()�� ���ڿ� �Է�=%s\n", s);
	printf("\n���ڿ� �Է�?");
	scanf("%s",s); //scanf()�� �̿��Ͽ� ���ڿ��� �޾Ƶ��� 
	printf("scanf()�� ���ڿ� �Է�=%s\n,s") ;
} 
