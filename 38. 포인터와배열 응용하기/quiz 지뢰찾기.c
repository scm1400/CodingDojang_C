/* 
표준 입력으로 행렬의 크기 m, n과 문자(char) 행렬이 입력됩니다(m과 n의 범위는 3~10). 입력된 m, n은 공백으로 구분되며 행렬 안에서 *은 지뢰이고 .은 지뢰가 아닙니다. 지뢰가 아닌 요소에는 인접한 지뢰의 개수를 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).

여러 줄을 입력 받으려면 다음과 같이 for 반복문으로 scanf를 반복 호출하면 됩니다.

for (int i = 0; i < m; i++)
{
    scanf("%s", matrix[i]);
}
행렬의 가로 공간에는 문자열이 들어갑니다. 따라서 메모리를 할당할 때는 n + 1(가로 크기 + 1)만큼 할당하여 NULL이 들어갈 공간까지 확보해야 합니다. 이 부분은 'Unit 39 문자열 사용하기'(515쪽), 'Unit 40 입력 값을 문자열에 저장하기'(527쪽)에서 자세히 설명하겠습니다.

이 문제는 지금까지 심사문제 중에서 가장 어렵습니다. 처음 풀어보는 경우 대략 두 시간은 걸립니다. 시간을 두고 천천히 고민해서 풀어보세요. 지금까지 학습한 내용을 모두 동원해야 풀 수 있으며 막힐 때는 지금까지 학습한 내용을 다시 복습하면서 힌트를 찾아보세요.

정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int m,n;
	int count=0;
	scanf("%d %d",&m, &n);

	char **matrix=(char**)malloc(sizeof(char*)*m);

	for (int i = 0; i < m; i++)
	{
		matrix[i]=(char*)malloc(sizeof(char)*(n+1));
		memset(matrix[i],0,sizeof(char)*(n+1));
	}

	for(int i=0; i<m; i++)
	{
		scanf("%s",matrix[i]);
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(matrix[i][j]=='*')
				continue;
			else
			{
				matrix[i][j]='0';
			}

			for (int y = i - 1; y <= i + 1; y++) // 한 칸 위부터 한 칸 아래까지 반복
			{
    			for (int x = j - 1; x <= j + 1; x++) // 한 칸 앞(왼쪽)부터 한 칸 뒤(오른쪽)까지 반복
    			{
    				if(y<0||x<0||y>=m||x>=n)
    					continue;

    				else
    				{
    					if(matrix[y][x]=='*')
    					{
    						matrix[i][j]+=1;
    					}
    				}

    			}
    		}
    	
		}	
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j]=='*')
			{
				printf("*");
			}
			else
			{
				printf("%c",matrix[i][j] );
			}
		}
		printf("\n");
	}

for (int i = 0; i < m; i++)
		free(matrix[i]);

	// 가로 메모리 해방

	free(matrix);

	// 세로 메모리 해방

	return 0;
}