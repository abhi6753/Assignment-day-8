#include<stdio.h>
#include<conio.h>
int main()
{	
	int i,j,k=0;
    char str[]="MysirG";
	for(i=0;i<3;i++)
	{
		for(j=0;j<19;j++)
		{
			if((j>=2-i&&j<=6+i)||(j>=13-i&&j<=16+i))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	for(i=3;i==3;i++)
	{
		for(j=0;j<19;j++)
		{
			if((j>=0&&j<=5)||(j>=12&&j<=18))
			{
						
				printf("*");				
			}
			else
			{
		    	printf("%c",str[k]);
				k++;
			}
		}
		printf("\n");
	}
	for(i=4;i<13;i++)
	{
		for(j=0;j<19;j++)
		{
			if(j>=i-3&&j<=21-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
		
	}
	getch();
	return 0;
	
}
