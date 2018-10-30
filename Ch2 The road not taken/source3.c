#include<stdio.h>
#include<math.h>


int main()
{
	int a;

	printf("링크의 개수가 홀수인 점의 개수 : ");
	scanf_s("%d",&a);

	if (a % 2 == 0)
	{
		printf("한붓그리기의 해가 존재합니다.\n");
	}
	else
	{
		printf("한붓그리기의 해가 존재하지 않습니다.\n");
	}

	return 0;
}