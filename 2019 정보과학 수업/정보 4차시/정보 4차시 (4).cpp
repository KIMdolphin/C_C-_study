#include <stdio.h>

main() {
	char g[10], h[10]; // 같은 char인데 배열 형태일 경우 만들어 낸 길이 만큼의 문자열을 출력할 수 있다. 
	
	scanf("%s %s", g, h);
	
	printf("이름: %s, 별명: %s", g, h);
	printf(" sizeof(g) = %d", sizeof(g));
} 
