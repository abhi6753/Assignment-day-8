#include<stdio.h>
#include<conio.h>
int main()
{
	int line,i,j,k;
	printf("Enter number of lines:\n");
	scanf("%d",&line);
	for(i=1;i<=line;i++)
	{
		k=1;
		for(j=1;j<=line*2-1;j++)
		{	
			if(j>=(line+1)-i&&j<=(line-1)+i)
			{
				printf("%d ",k);	
			    j<4?k++:k--;
			}
			else
			{
				printf("  ");
			}
						
		}
		printf("\n");
	}
	getch();
	return 0;
}
