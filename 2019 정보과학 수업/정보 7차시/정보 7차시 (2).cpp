#include <stdio.h>
//DNA ���� ������ �Էµ� ��� � �������� �Է��غ���. 

main() {
	char w;
	scanf("%c", &w);
	
	if (w == 'A') printf("ADENINE");
	else if (w == 'C') printf("CYTOSINE");
	else if (w == 'G') printf("GUANINE");
	else if (w == 'T') printf("THYMINE");
	else printf("���⼭���� �ƴմϴ�.");
	
}
