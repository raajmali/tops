//Write a program in C to separate individual characters from a string.
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int l=0;
	
	  printf("\n\nseparate the individual characters from a string:\n");
	  printf("---------------------------------------------------:\n");
	  printf("input the string :");
	  
	  fgets(str, sizeof str, stdin);
	  printf("the characters of the string are : \n");
	while(str[l]!='\0')
	{
		printf("%c\n",str[l]);
		l++;
	  }  
	  printf("\n");
	  
}
