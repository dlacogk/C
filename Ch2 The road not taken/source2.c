#include<stdio.h>
#include<math.h>


int main()
{
	int a, b;

	printf("�ڿ��� A ���� �Է��Ͻÿ�: ");
	scanf_s("%d",&a);

	if ((a%2) == 0)
	{
		printf("%d�� ¦��\n",a);
	}
	else
	{
		printf("%d�� Ȧ��\n", a);
	}

	printf("�ڿ��� B ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &b);

	if ((a%b) == 0)
	{
		printf("%d�� %d�� �����\n",b,a);
	}
	else
	{
		printf("%d�� %d�� ����� �ƴ�\n",b,a);
	}

	return 0;
}