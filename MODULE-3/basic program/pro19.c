#include<stdio.h>
int main()
{
	float principal,rate,time,compoundinterest;
	printf("enter value of principal");
	scanf("%f",&principal);
	printf("enter value of rate");
	scanf("%f",&rate);
	printf("enter value of time");
	scanf("%f",&time);
	
	compoundinterest=principal*pow(1+rate,time)-principal;
	printf("compound interest: %2f\n",compoundinterest);
	return 0;
	
}
