SOIT108_Advance_010：進階題：億萬富翁

//week16-4b.cpp
#include <stdio.h>
#include <string.h>
int main()
{
	char line[100];
	scanf("%s", line);
	int N = strlen(line);
	for(int i=0; i<N; i++){
		printf("%c", line[i]);
		if((N-1-i)%3==0 && i!=N-1) printf(",");
	}
}