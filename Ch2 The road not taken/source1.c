#include<stdio.h>
#include<math.h>

#define PHEROMONE(ph,dt,rem) ((ph+dt)*rem)

int main()
{
	float aph = 10, adt = 6.2, arem = 0.4;
	float bph = 12, bdt = 5.9, brem = 0.3;

	printf("길 A의 상태\n");
	printf("\t페로몬향 : %2.1f\n",aph);
	printf("\tdelta값 : %2.1f\n", adt);
	printf("\trem값 : %2.1f\n\n", arem);

	printf("길 B의 상태\n");
	printf("\t페로몬향 : %2.1f\n", bph);
	printf("\tdelta값 : %2.1f\n", bdt);
	printf("\trem값 : %2.1f\n\n", brem);

	if (PHEROMONE(aph,adt,arem) >= PHEROMONE(bph,bdt,brem))
	{
		printf("개미의 선택: A\n");
	}
	else
	{
		printf("개미의 선택: B\n");
	}

	return 0;
}