///week13-1.cpp �F�� 2D �}�C�A�A��Tutor����
#include <stdio.h>
void myPrint(int x[3][4]) {
    for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            printf("%2d ",x[i][j] );
        }
        printf("\n");
    }
    printf("\n");
}
int d[3][4];///golbal���ܼơA�|�ܦ�0
int globalInt;///golbal���ܼơA�|�ܦ�0
int main()
{
    int a[3][4];///�}�C���ŧi�A�S���ȡA�|�O�ýX
    int b[3][4] = {1,2,3};///�����ȡA���S����
    int c[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    ///�������ȡA����
    myPrint(a);///���U��Python C Tuthor �ɡA�n���ѱ��A�]�ýX�|�X��
    myPrint(b);
    myPrint(c);///���[��L�X�Ӫ��ȡA �P�ɫ�� (����i�B�k��j)
    myPrint(d);
    int localInt;
    printf("globalInt: %d localInt%d\n",globalInt, localInt);
}

