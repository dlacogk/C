#include<stdio.h>
#include<math.h>

int main()
{
	int a,n,aphin,ans;

	printf("���μ� a���� �Է��Ͻÿ�: ");
	scanf_s("%d",&a);

	printf("���μ� n���� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("%d�� ��(%d)�������� �Է��Ͻÿ�: ",a,n);
	scanf_s("%d", &aphin);

	ans = aphin % n;
	printf("���Ϸ� ������ ���� %d\n",ans);

	return 0;
}