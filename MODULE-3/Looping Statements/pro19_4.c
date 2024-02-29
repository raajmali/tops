//pattern
//1
//23
//456
//78910
//1112131415

#include <stdio.h>
int main() {
    int rows, n = 1, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) 
	{
        for(j = 1; j <= i; j++) 
		{
            printf("%d", n++);
        }
        printf("\n");
    }

    return 0;
}

