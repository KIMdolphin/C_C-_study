#include <stdio.h>


main(){
	int x = 2;
	int y = 3;
	
	printf("%d\n", (x++)*(y++)%10); //이 계산이 완전히 끝난 후 1씩 더해진다. 
	printf("%d\n", (x*y)%10);
	printf("%d\n", (++x)*(++y)%10); //이 계산이 진행되기 전 더해주고 그 후 계산이 진행된다 
} 
