#include<stdio.h>

int main()
{
	int s = 0, p = 0, e = 0;

	printf("면의 수를 입력하시오: ");
	scanf_s("%d", &s, sizeof(s));

	printf("모서리의 수를 입력하시오: ");
	scanf_s("%d", &e, sizeof(e));

	p = e + 2 - s;

	printf("\n면의 수: %d 모서리의 수: %d\n꼭짓점의 수: %d\n",s,e,p);

	return 0;
}