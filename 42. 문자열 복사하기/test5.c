/* 표준 입력으로 길이 1,000 이하의 문자열이 입력됩니다. 
입력된 문자열에서 "the"의 개수를 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
단, 모든 문자가 소문자인 "the"만 찾으면 되며 "them", "there", "their" 등은 포함하지 않아야 합니다. */

#include <stdio.h>
#include <string.h>

int main()
{
	char a[1001];
	int count = 0 ;

	scanf("%[^\n]s",a);

	char *ptr=strtok(a," ,.");
	if(ptr != NULL&&strcmp(ptr,"the")==0)
		{count++;}

	while(ptr != NULL)
	{
		ptr=strtok(NULL," .,");
		if(ptr != NULL&&strcmp(ptr,"the")==0)
		{count++;}

	}
	
	printf("%d\n",count);
}