#include<stdio.h>
#include<stdlib.h>
#define f(a,b,c)(a+b+c)*(a-b-c)

int main(void)
{
	float i,j,k;
	printf("�п�J�T�ӼƦr:");
	scanf("%f%f%f",&i,&j,&k);
	printf("�p�⵲�G��%f\n",f(i,j,k));
	system("pause");
	return 0;
 } 
