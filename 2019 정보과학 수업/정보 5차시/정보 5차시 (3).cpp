#include <stdio.h> 
//gets() : 문자열(char) 입력받는 함수

main() {
	char s[50]; //문자열을 저장하기 위해 배열명이 s인 배열 선언 
	printf("문자열 입력?");
	gets(s); //gets()를 이용하여 문자열을 받아들임 
	printf("gets()로 문자열 입력=%s\n", s);
	printf("\n문자열 입력?");
	scanf("%s",s); //scanf()를 이용하여 문자열을 받아들임 
	printf("scanf()로 문자열 입력=%s\n,s") ;
} 
