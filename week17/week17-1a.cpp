///week17-1.cpp ����@�b���w�w�Ƨ�
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
    for(int i=0; i<10-1; i++){
        if(a[i]>a[i+1]){///�Ʊ楪��p�A�����F�A�n�洫
            int temp = a[i] ;
            a[i] = a[i+1];
            a[i+1] = temp;
        }

    }
    myPrint(a);
}