#include <stdio.h>

int main() {
	char a;

	printf(" 입력 :");
	scanf_s("%c", &a);
	printf("%c의 아스키값 : %d입니다. \n", a, a);

}