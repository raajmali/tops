//Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char str[100];
	int l,i;
	
	  printf("\n\nprint individual characters of string in reverse order:\n");
	  printf("---------------------------------------------------:\n");
	  printf("input the string :");
	  
	  fgets(str, sizeof str, stdin);
	  l=strlen(str);
	  printf("the characters of the string in reverse are :\n");
	  
	  for(i=l;i>=0;i--)
	  {
	  	printf("%c ",str[i]);
	  }
	  printf("\n");
}
