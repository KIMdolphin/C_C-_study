#include <stdio.h>
//DNA 염기 서열이 입력될 경우 어떤 염기일지 입력해보자. 

main() {
	char w;
	scanf("%c", &w);
	
	if (w == 'A') printf("ADENINE");
	else if (w == 'C') printf("CYTOSINE");
	else if (w == 'G') printf("GUANINE");
	else if (w == 'T') printf("THYMINE");
	else printf("염기서열이 아닙니다.");
	
}
