#include<stdio.h>
#include<math.h>

#define PATH(ph,dt,rem) ((ph+dt)*rem)

int main()
{
	float ph, dt, rem, A, B;

	printf("두 길의 페로몬 값을 입력하시오 : ");
	scanf_s("%f",&ph);
	printf("두 길의 Delta 값을 입력하시오 : ");
	scanf_s("%f", &dt);
	printf("두 길의 Rem 값을 입력하시오 : ");
	scanf_s("%f", &rem);

	A = PATH(ph, 0, rem);		//1T
	A = PATH(A, 2*dt, rem);		//2T에 두마리 개미 지나감
	A = PATH(A, 0, rem);		//3T

	B = PATH(ph, 0, rem);		//1T
	B = PATH(B, dt, rem);		//2T에 한마리 개미 지나감
	B = PATH(B, dt, rem);		//3T에 한마리 개미 지나감

	if (A >= B)
	{
		printf("개미가 가는 길: A\n");
	}
	else
	{
		printf("개미가 가는 길: B\n");
	}

	return 0;
}