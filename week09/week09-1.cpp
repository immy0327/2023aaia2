///week09-1.cpp 字元、字串(字元排列)
#include <stdio.h>
int main()
{
    char c;
    char s[40];
    printf("請輸入1個字母，再輸入你的英文名子: ");
    scanf("%c %s", &c, s);
    printf("你的名子是: %s 你輸入的字母: %c\n", s, c);
}
