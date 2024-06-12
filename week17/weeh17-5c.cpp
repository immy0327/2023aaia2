SOIT107_ADVANCE_006：進階題：除惡務盡

//week17-5c
#include <stdio.h>
int main()
{
	char s[100];
	scanf("%s", s);
	for(int i=0; s[i]!=0; i++){
		if(s[i]!='2') printf("%c", s[i]);
	}
	printf("\n");
}

//#include <stdio.h>
//int main()
//{
// 	  char c;
//    while( scanf("%c",&c) == 1){
//        if(c!='2') printf("%c", c);
//    }