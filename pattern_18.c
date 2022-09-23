#include<stdio.h>
#include<conio.h>
int main()
{
	int line,i,j;
	printf("Enter number of lines to print stars:\n");
	scanf("%d",&line);
	for(i=1;i<=line;i++)
	{
		for(j=1;j<=line;j++)
		{
			if((j>=6-i&&j<=4+i)&&(j>=i-4&&j<=line*2-i+4))
			//	if((j>=(line-3-i)&&j<=line-5+i)&&(j>=i-4&&j<=(line*2)-(i+4)))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
	return 0;
}
