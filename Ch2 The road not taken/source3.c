#include<stdio.h>
#include<math.h>


int main()
{
	int a;

	printf("��ũ�� ������ Ȧ���� ���� ���� : ");
	scanf_s("%d",&a);

	if (a % 2 == 0)
	{
		printf("�Ѻױ׸����� �ذ� �����մϴ�.\n");
	}
	else
	{
		printf("�Ѻױ׸����� �ذ� �������� �ʽ��ϴ�.\n");
	}

	return 0;
}