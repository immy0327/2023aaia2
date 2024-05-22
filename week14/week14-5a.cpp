SOIT107_ADVANCE_011：進階題：字串中的數字個數
//week14-5a.cpp
#include <stdio.h>
char line[100];
int main()
{
	scanf("%s", line);
	int ans = 0;
	for(int i=0; line[i]!=0; i++){
		if(line[i]>='0' && line[i]<='9') ans++;
	}
	printf("%d\n", ans);
}