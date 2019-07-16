//비교 연산자, 논리 연산자

#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);


	//bool : 진리값 저장용 변수
	bool p = a > b;
	bool q = a < b;
	bool r = a == b;
	//거짓 -> 0 참 -> 1

	// a>=b, a<=b a!=b
	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
	
}