//WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
	int n[5],i;
	printf("Enter 5 number: ");
	scanf("%d",&n);
	
    for (i=0;n<5;i++) 
	{
        printf("%d\n",n[i]);
    }

   return 0;
}
