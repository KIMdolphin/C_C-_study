#include <stdio.h>
#include <stdlib.h>
//���ڿ��� �Է¹޾� ����ϴ� ���α׷��� gets(), puts() ����Ͽ� �ۼ��Ͻÿ�. 

main() {
	char* var = (char*)malloc(sizeof(char)); //���� �迭 �Ҵ�
	//char var[10]; 
	gets(var);
	puts(var);
} 
