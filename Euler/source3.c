#include<stdio.h>

int main()
{
	int s = 0, p = 0, e = 0;

	printf("���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &s, sizeof(s));

	printf("�𼭸��� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &e, sizeof(e));

	p = e + 2 - s;

	printf("\n���� ��: %d �𼭸��� ��: %d\n�������� ��: %d\n",s,e,p);

	return 0;
}