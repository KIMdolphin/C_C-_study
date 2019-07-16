#include <stdio.h>

//char : 1바이트 정수형 (int : 4바이트)
//character : 문자(반각문자 알파벳, 숫자, 키보드로 입력할 수 있는 기호들) 해당 x - 한자, 일본어, 러시아어 등... halfwidth(반각문자) 나머지 : fullwidth

int main() {
	char a = 67;

	printf("%c\n", a);
	printf("%d\n", 'C'); 
	// 'C' == 67
	//printf("%c", 'F');

}

//ASCII : American Standard (문자 - 숫자)