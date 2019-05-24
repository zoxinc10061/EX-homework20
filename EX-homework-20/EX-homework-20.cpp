#include<stdio.h>
#include<stdlib.h>
#define f(a,b,c)(a+b+c)*(a-b-c)

int main(void)
{
	float i,j,k;
	printf("請輸入三個數字:");
	scanf("%f%f%f",&i,&j,&k);
	printf("計算結果為%f\n",f(i,j,k));
	system("pause");
	return 0;
 } 
