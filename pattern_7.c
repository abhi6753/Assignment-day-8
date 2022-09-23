#include<stdio.h>
#include<conio.h>
int main()
{
	int line,i,j;
	printf("Enter number of lines to print stars:\n");
	scanf("%d",&line);
	for(i=1;i<=line;i++)
	{
		for(j=1;j<=line*2;j++)
		{
		    if(j<=(line+1)-i||j>=line+i)
		    printf("* ");
		    else
		    printf("  ");
		}
		printf("\n");
	}
	getch();
	return 0;
}
