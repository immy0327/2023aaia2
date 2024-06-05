SOIT108_Advance_009：進階題：奇數反流

//week16-5a.cpp
#include <stdio.h>
int main()
{
	int a[100];
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &a[i] );
	}
	for(int i=N-1; i>=0; i--){
		if(a[i]%2==1){
			printf("%d ",a[i] );
		}
	}
}