/*표준 입력으로 두 정수가 입력됩니다
(입력 값의 범위는 0~1073741824). 
다음 소스 코드를 완성하여 입력된 두 정수의 합이 출력되게 만드세요.
정답에는 밑줄 친 부분에 들어갈 코드만 작성해야 합니다.*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;

    _________________________________
    _________________________________

    scanf("%d %d", &num1, &num2);

    *numPtr1 = num1;
    *numPtr2 = num2;

    printf("%d\n", *numPtr1 + *numPtr2);

    free(numPtr1);
    free(numPtr2);

    return 0;
}