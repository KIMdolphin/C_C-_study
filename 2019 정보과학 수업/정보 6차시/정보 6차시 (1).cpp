#include <stdio.h> 
// return 0;�� �־��ִ� ������?
// sizeof() ��ȣ ���� �ڷ����� ũ�⸦ �˷��ִ� �Լ� 

//���⼭ int = � Ư�� ���� ��ȯ�� �Ǹ� int ���·� ���� ������ ����ϴ� ��  
int main(){
	printf("%d %d %d %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long));
	printf("%d %d", sizeof(float), sizeof(double));
	return 0;
} 
