#include<stdio.h>
#include<math.h>

int main()
{
	int a,n,aphin,ans;

	printf("서로소 a값을 입력하시오: ");
	scanf_s("%d",&a);

	printf("서로소 n값을 입력하시오: ");
	scanf_s("%d", &n);

	printf("%d의 φ(%d)제곱값을 입력하시오: ",a,n);
	scanf_s("%d", &aphin);

	ans = aphin % n;
	printf("오일러 공식의 답은 %d\n",ans);

	return 0;
}