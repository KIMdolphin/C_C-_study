#include <stdio.h>

int main() {
	int choice;

	makeChoice;

	printf("�� ���� : 1\n");
	printf("�ҷ����� : 2\n");
	printf("���� : 3\n");
	printf("ũ���� : 4\n");

	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("�� ���� \n");
		break;
	case 2:
		printf("�ҷ�����\n");
		break;
	case 3:
		printf("����\n");
		break;
	case 4:
		printf("ũ����\n");
		break;
	default:
		printf("�߸��Է�")
			goto makeChoice;
	}

	/*if (choice == 1) printf("�� ����\n");
	else if (choice == 2) printf("�ҷ�����\n");
	else if (choice == 3) printf("����\n");
	else if (choice == 4) printf("ũ����\n");
	else printf("�߸��Է��ϼ̽��ϴ�.");*/
	
}