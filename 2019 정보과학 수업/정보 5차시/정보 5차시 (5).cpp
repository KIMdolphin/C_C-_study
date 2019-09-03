#include <stdio.h>
#include <stdlib.h>
//문자열을 입력받아 출력하는 프로그램을 gets(), puts() 사용하여 작성하시오. 

main() {
	char* var = (char*)malloc(sizeof(char)); //동적 배열 할당
	//char var[10]; 
	gets(var);
	puts(var);
} 
