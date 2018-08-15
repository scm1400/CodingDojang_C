#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;

	scanf("%d", &a);

	int **b=(int**)malloc(sizeof(int*)*a);

	for (int i = 0; i < a; i++)
	{
		b[i]=(int*)malloc(sizeof(int)*a);
	}

	for(int h=0; h< a; h++)
	{
		for (int i = 0; i < a; i++)
		{
			if(h==i)
			{
				b[h][i]=1;
			}
			else
			{
				b[h][i]=0;
			}
			printf("%d ",b[h][i] );
		}
		printf("\n");
	}

	for (int i = 0; i < a; ++i)
	{
		free(b[i]);
	}
	free(b);

	return 0;

}