#include <stdio.h>
//if�� (else if�� ����غ���!) 

int main() {
	int n;
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	if(n<0) {
		printf("�����Դϴ�.\n");
	}
	if(n==0) {
		printf("0�Դϴ�.\n");
	}
	if(n>0) {
		printf("������ �ƴմϴ�.\n");
	}
} 
