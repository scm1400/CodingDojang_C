/*표준 입력으로 정수와 길이 10 이하의 문자열이 입력됩니다.
 입력된 문자열을 정수만큼 문자 단위로 N-gram을 출력하는 프로그램을 만드세요
 (scanf 함수 호출 전에 문자열을 출력하면 안 됩니다). 
 만약 입력된 문자열의 길이가 입력된 정수 미만이라면 wrong을 출력하세요.

정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	char a[11];
	
	scanf("%d %s",&n,a);

	int length = strlen(a);
	if(length<n)
		{	printf("wrong");
			goto END;
		}
	for(int i=0; i<length-(n-1);i++)
	{
		for(int j=0; j<n;j++)
			printf("%c",a[i+j]);

		printf("\n");
	}
	END:
	return 0;
}