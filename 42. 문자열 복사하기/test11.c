/*표준 입력으로 공백이 포함된 길이 30 이하의 영문 문자열이 입력됩니다(공백이 여러 개 연속될 수도 있습니다). 입력된 문자열이 회문이면 1, 회문이 아니면 0을 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).

scanf에서 공백을 포함한 문자열을 입력받으려면 서식 지정자로 "%[^\n]s"를 사용하면 됩니다.

정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[31];
	char b[31]="";
	int check=0;

	scanf("%[^\n]s",a);

	char *ptr = strtok(a," ");

	while(ptr!=NULL)
	{
		strcat(b,ptr);
		ptr=strtok(NULL," ");
	}

	int length=strlen(b);

	for(int i=0; i<length/2;i++)
	{
		if(b[i]==b[length-i-1])
		{
			check=1;
			continue;
		}
		else
			check=0;
			break;
	}
	printf("%d",check);

}