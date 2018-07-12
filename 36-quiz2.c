/*다음 소스 코드를 완성하여 배열에 저장된 2진수가 10진수로 출력되게 만드세요.
 2진수는 배열에 순서대로 저장되어 있습니다.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int decimal = 0;
    int position = 0;
    int binary[4] = { 1, 1, 0, 1 };    // 1101 순서대로 저장됨

    for(int i=3; i>=0; i--)
    {
    	if(binary[i]==1)
    	{
    		decimal += 1<< position;
    	}
    	position++;
    }
    printf("%d\n", decimal);

    return 0;
}