#include <stdio.h>
//입력된 정수의 절댓값을 출력하는 프로그램 작성 
 
int main() {
	int n;
	scanf("%d", &n);
	
	if(n<0) {
		printf("abs : %d \n", -n); 
	}
	else {
		printf("abs : %d \n", n);
	}
} 
