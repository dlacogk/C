#include<stdio.h>

int main()
{
	int s1 = 4, s2 = 6, s3 = 8, s4 = 12, s5 = 20;
	int p1 = 4, p2 = 8, p3 = 6, p4 = 20, p5 = 12;
	int e1, e2, e3, e4, e5;

	e1 = s1 + p1 - 2;
	e2 = s2 + p2 - 2;
	e3 = s3 + p3 - 2;
	e4 = s4 + p4 - 2;
	e5 = s5 + p5 - 2;

	printf("            면의 수  꼭짓점의 수  모서리의 수\n");
	printf("정사면체          4            4           %d\n",e1);
	printf("정육면체          6            8           %d\n",e2);
	printf("정팔면체          8            6           %d\n",e3);
	printf("정십이면체       12           20           %d\n",e4);
	printf("정이십면체       20           12           %d\n",e5);

	return 0;
}