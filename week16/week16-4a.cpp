SOIT108_Advance_011：進階題：秒數換算

//week16-4a.cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ss = n%60;
	int mm = (n/60)%60;
	int hh = (n/60/60)%60;
	printf("%02d:%02d:%02d", hh, mm, ss);
}