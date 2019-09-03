#include <stdio.h>
//c언어는 2중으로 범위가 형성될 수 없다.  

main() {
	int a;
	scanf("%d", &a);
	
	if (90<=a) printf("A");
	else if (80<=a) printf("B");
	else if (70<=a) printf("C");
	else printf("D"); 
} 
