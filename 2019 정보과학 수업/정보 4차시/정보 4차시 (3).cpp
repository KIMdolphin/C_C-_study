#include <stdio.h>
// dev c++ 에서는 scanf_s를 사용하지 말 것
 
int main() {
	int a;
	
	printf("당신의 나이는?"); 
	scanf("%d", &a);
	
	printf("%d", a);
} 
/*
int main() {
	int a;
	
	scanf("당신의 나이는? %d", &a);
	
	printf("%d", a);
}  이렇게 하는 건 불가능  
*/ 
