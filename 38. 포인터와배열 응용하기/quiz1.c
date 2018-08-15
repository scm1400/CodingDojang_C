/* 38.6    
연습문제: 포인터에 할당된 메모리를 3차원 배열처럼 사용하기

다음 소스 코드를 완성하여 포인터에 할당된 메모리를 높이 2, 세로 크기 3, 
가로 크기 5인 3차원 배열처럼 사용할 수 있도록 만드세요 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long ***m = (long long***)malloc(sizeof(long long **) * 2);

    for (int depth = 0; depth < 2; depth++)
    {
        m[depth]=(long long**)malloc(sizeof(long long *)*3);
            for(int row=0; row<3; row++)
            {
                m[depth][row]=(long long*)malloc(sizeof(long long)*5);
            }
    }

    m[1][2][4] = 100;

    printf("%lld\n", m[1][2][4]);

    for(int depth=0; depth <2; depth++)
    {
        for(int row=0; row<3; row++)
        {
            free(m[depth][row]);
        }
        free(m[depth]);
    }

    free(m);

    return 0;
}