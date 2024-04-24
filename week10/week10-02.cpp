#include <stdio.h>
int myAdd(int a, int b){
    return a+b;
}
int main()
{///主要的程式 main()
    int ans = myAdd(2, 3);
    printf("ans: %d\n", ans);
}
