#include<stdio.h>
#include<math.h>

#define PHEROMONE(ph,dt,rem) ((ph+dt)*rem)

int main()
{
	float aph = 10, adt = 6.2, arem = 0.4;
	float bph = 12, bdt = 5.9, brem = 0.3;

	printf("�� A�� ����\n");
	printf("\t��θ��� : %2.1f\n",aph);
	printf("\tdelta�� : %2.1f\n", adt);
	printf("\trem�� : %2.1f\n\n", arem);

	printf("�� B�� ����\n");
	printf("\t��θ��� : %2.1f\n", bph);
	printf("\tdelta�� : %2.1f\n", bdt);
	printf("\trem�� : %2.1f\n\n", brem);

	if (PHEROMONE(aph,adt,arem) >= PHEROMONE(bph,bdt,brem))
	{
		printf("������ ����: A\n");
	}
	else
	{
		printf("������ ����: B\n");
	}

	return 0;
}