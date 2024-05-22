SOIT107_ADVANCE_014：進階題：奇數之和
//Week14-5d
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	
	int ans = 0;
	for(int i=1; i<=N; i+=2){
		ans += i;
    }
    printf("%d", ans);
}