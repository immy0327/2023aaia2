///week17-2.cpp
#include <stdio.h>
void myPrint(int a[10])
{
    for(int i=0; i<10; i++){
        printf("%d ", a[i] );
    }
    printf("\n");
}
int main()
{
    int a[10] = {9,8,7,6,5,4,3,2,1,0};
    myPrint(a);
    for(int i=0; i<10; i++){
       for(int j=i+1; j<10; j++){
           if( a[i] > a[j] ){ ///�k��j
               int temp = a[i];///�j�p����
               a[i] = a[j];///�N�洫
               a[j] = temp;
           }
        }
        myPrint(a);
    }
}
