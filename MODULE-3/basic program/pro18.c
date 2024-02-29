#include<stdio.h>
int main()
{
	float monthlysalary;
	printf("enter the monthlysalary");
	scanf("%f",&monthlysalary);
	
	float annualsalary=monthlysalary*12;
	printf("the annual salary is:%.2f\n",annualsalary);
	return 0;
}
