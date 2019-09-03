#include <stdio.h>

//변수 : 입력 받은 값 기억하거나 어떤 값을 처리하여 기억하기 위한 장소 -> 한글/숫자로 시작하면 변수 사용이 불가능하다. 
// 변수의 종류 : 정수형 integer(%d-digit) , 실수형 float(%f) , 문자형 char(%c)
//printf('형식지정문자', 전달할 값); 


main() {
	int a = 10;
	float b = 3.14;
	printf("%d\n",a);
    printf("%f\n",b);
	printf("%d %f",a,b);
} 
