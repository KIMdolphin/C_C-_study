#include <stdio.h> 
// return 0;을 넣어주는 이유는?
// sizeof() 괄호 안의 자료형의 크기를 알려주는 함수 

//여기서 int = 어떤 특정 값이 반환이 되면 int 형태로 나올 것임을 명시하는 것  
int main(){
	printf("%d %d %d %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long));
	printf("%d %d", sizeof(float), sizeof(double));
	return 0;
} 
