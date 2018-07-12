#include <stdio.h>

int main()
{
	int a,b;

	scanf("%d %d", &a,&b);

	for(int i=a; i<=b ; i++)
	{
		if(i%5==0 && i%11==0)
		{
			printf("fizzbuzz \n");
		}
		else if (i%11==0)
		{
			printf("buzz \n");
		}
		else if (i%5==0)
		{
			printf("fizz\n");
		}
		else
			{
				printf("%d\n",i );
			}
	}
}