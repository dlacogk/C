#include<stdio.h>
#include<math.h>

#define PATH(ph,dt,rem) ((ph+dt)*rem)

int main()
{
	float ph, dt, rem, A, B;

	printf("�� ���� ��θ� ���� �Է��Ͻÿ� : ");
	scanf_s("%f",&ph);
	printf("�� ���� Delta ���� �Է��Ͻÿ� : ");
	scanf_s("%f", &dt);
	printf("�� ���� Rem ���� �Է��Ͻÿ� : ");
	scanf_s("%f", &rem);

	A = PATH(ph, 0, rem);		//1T
	A = PATH(A, 2*dt, rem);		//2T�� �θ��� ���� ������
	A = PATH(A, 0, rem);		//3T

	B = PATH(ph, 0, rem);		//1T
	B = PATH(B, dt, rem);		//2T�� �Ѹ��� ���� ������
	B = PATH(B, dt, rem);		//3T�� �Ѹ��� ���� ������

	if (A >= B)
	{
		printf("���̰� ���� ��: A\n");
	}
	else
	{
		printf("���̰� ���� ��: B\n");
	}

	return 0;
}