#include <stdio.h>
//if문 (else if도 사용해보자!) 

int main() {
	int n;
	printf("값을 입력하시오 : ");
	scanf("%d", &n);
	if(n<0) {
		printf("음수입니다.\n");
	}
	else if(n==0) {
		printf("0입니다.\n");
	}
	else {
		printf("음수가 아닙니다.\n");
	}
} 
