#include <stdio.h>
int gcd(int a, int b){
  if(a==0) return b;
  if(b==0) return a;///�o��i�H���μg
  return gcd(b, a%b);
}///�禡�I�s�禡�A����۰��k

int main()
{///�U���Oc�y�����g�k�A�Ѯv���˳o��
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a,b) );
}
