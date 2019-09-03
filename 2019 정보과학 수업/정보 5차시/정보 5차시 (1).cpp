#include <stdio.h> 
/* 표준 입출력 함수 
printf() : 화면에 여러 종류의 자료를 출력
getchar() : 변수명 = getchar()의 형태로 문자를 입력받을 수 있다. */

main() {
	char a;
	a = getchar();
	printf("\n%c\n", a);
}
