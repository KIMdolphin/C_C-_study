#include <stdio.h>
//if�� (else if�� ����غ���!) 

int main() {
	int n;
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	if(n<0) {
		printf("�����Դϴ�.\n");
	}
	else if(n==0) {
		printf("0�Դϴ�.\n");
	}
	else {
		printf("������ �ƴմϴ�.\n");
	}
} 
