#include <stdio.h>

//char : 1����Ʈ ������ (int : 4����Ʈ)
//character : ����(�ݰ����� ���ĺ�, ����, Ű����� �Է��� �� �ִ� ��ȣ��) �ش� x - ����, �Ϻ���, ���þƾ� ��... halfwidth(�ݰ�����) ������ : fullwidth

int main() {
	char a = 67;

	printf("%c\n", a);
	printf("%d\n", 'C'); 
	// 'C' == 67
	//printf("%c", 'F');

}

//ASCII : American Standard (���� - ����)