#include<stdio.h>
#include<conio.h>
int main()
{
	int line,i,j,k;
	printf("Enter number of lines:\n");
	scanf("%d",&line);
	for(i=1;i<=line;i++)
	{
		k='A';
		for(j=1;j<=line*2-1;j++)
		{
			
			if(j>=i&&j<=(line*2)-i)
			{
				
				printf("%c ",k);
				j<line?k++:k--;
			}
			else
			{
			   printf("  ");
			  // printf(" ");	
			}
			
		}
		printf("\n");
	}
	getch();
	return 0;
}
