#include <stdio.h>
int gcd(int a, int b){
  if(a==0) return b;
  if(b==0) return a;///這行可以不用寫
  return gcd(b, a%b);
}///函式呼叫函式，輾轉相除法

int main()
{///下面是c語言的寫法，老師推薦這個
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a,b) );
}
