#include<stdio.h>
int main()
{
	int i,j,k;
	printf("Pyramid Pattern with numbers\n\n");
	for(i=1;i<=5;i++)
	{
		k=1;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
			{
				printf("%d",k);
				k++;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
