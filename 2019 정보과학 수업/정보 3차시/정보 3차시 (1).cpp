#include <stdio.h>
//자료의 대입 

int main(){ 
	int a, b, c;
	
	a=10, b=20;
	printf("a=%d, b=%d \n", a, b);
	
	c=a;
	a=b;
	b=c;
	printf("a=%d, b=%d", a, b);
} 
