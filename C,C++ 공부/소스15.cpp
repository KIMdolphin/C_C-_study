//논리연산자 p and q(그리고, 또는, ...)
// && 그리고 || 또는 ! 거짓 -> 참, 참 -> 거짓 (~가 아니다)

#include <stdio.h>

int main() {
	int a;
	scanf_s("%d", &a);

	bool p = (a >= 1) && (a <= 10);
	bool q = a == 3 || a == 7;
	bool r = !q;

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);

}
