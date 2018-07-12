#include <stdio.h>

int main()
{
	int num1;

	scanf("%d", &num1);
    
    for (int i = 0; i < num1; i++)    // 5번 반복. 바깥쪽 루프는 세로 방향
    {
        for (int j = num1-1; j>= 0; j--)    // 5번 반복. 안쪽 루프는 가로 방향
        {
            if(j<=i)
            printf("*");  
            else
            printf(" ");             // 별 출력
        }

        for (int k = 0; k <num1; k++)
        {
        	if(k < i)
        		printf("*");
        	else
        		printf(" ");
        }

        printf("\n");              // 가로 방향으로 별을 다 그린 뒤 다음 줄로 넘어감
    }

    return 0;
}