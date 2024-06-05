SOIT108_Advance_012：進階題：大於漸增數列總和之最小整數

//week16-3c.cpp
#include <stdio.h>
int main()
{
	int K, ans;
	scanf("%d",&K);
	
	for(int N=1; N<=K; N++){
		int now = (1+N)*N/2;
		if(now>K){
			ans = N;
			break;
		}
	}
	printf("%d", ans);
}
	