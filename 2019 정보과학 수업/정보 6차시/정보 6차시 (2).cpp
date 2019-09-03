#include <stdio.h>

int main() {
	int i = 2147483647; //int의 최댓값 
	printf("%d", i+1); //overflow, underflow 개념 
	return 0;
} 
//값이 넘쳐났을 때 범위의 가장 처음 값으로 내려갔을 때 : overflow
//값이 너무 적을 때 범위의 가장 마지막 값으로 올라갔을 때 :underflow 
