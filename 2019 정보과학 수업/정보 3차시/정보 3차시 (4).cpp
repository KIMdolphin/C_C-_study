#include <stdio.h>

/*증감연산자 ++ --
   - 전위연산자 ex) a++ a-- 
   - 후위연산자 ex) ++a --a 
복합대입연산자 += -= *= /=  */


int main() {
	int a;
	
	a=0;
	a++;
	a--;
	a+=10;
	a-=3;
	a*=5;
	a/=7;
	a%=4;
	
	printf("%d", a);	
}
