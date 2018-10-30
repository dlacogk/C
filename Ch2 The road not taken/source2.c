#include<stdio.h>
#include<math.h>


int main()
{
	int a, b;

	printf("자연수 A 값을 입력하시오: ");
	scanf_s("%d",&a);

	if ((a%2) == 0)
	{
		printf("%d는 짝수\n",a);
	}
	else
	{
		printf("%d는 홀수\n", a);
	}

	printf("자연수 B 값을 입력하시오: ");
	scanf_s("%d", &b);

	if ((a%b) == 0)
	{
		printf("%d는 %d의 약수임\n",b,a);
	}
	else
	{
		printf("%d는 %d의 약수가 아님\n",b,a);
	}

	return 0;
}