#include<stdio.h>
void halfpy(int r);
void fullpy(int r);
void invertedpy(int r);

int main()
{
	int r=7;
	halfpy(r);
	printf("\n-----------------------------------\n");
	fullpy(r);
	printf("\n-----------------------------------\n");
	invertedpy(r);
	printf("\n-----------------------------------\n");
	return 0;
}

void halfpy(int r)
{
	int i=1;
	while(i<=r)
	{
		int j=1;
		while (j<=i)
		{
			printf(" * ");
			j++;
		}
		printf("\n");
		i++;

	}
	
}
void fullpy(int r)
{
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=r-i;j++)
		{
			printf("  ");
		}
		for(int j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
void invertedpy(int r)
{
	for(int i=r;i>=1;i--)
	{
		for(int j =1;j<=r-i;j++)
		{
			printf("  ");
		}
		for (int j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
