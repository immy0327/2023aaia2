///week13-1.cpp 了解 2D 陣列，再於Tutor測試
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
int d[3][4];///golbal的變數，會變成0
int globalInt;///golbal的變數，會變成0
int main()
{
    int a[3][4];///陣列的宣告，沒有值，會是亂碼
    int b[3][4] = {1,2,3};///有給值，但沒給完
    int c[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    ///全部的值，都給
    myPrint(a);///等下給Python C Tuthor 時，要註解掉，因亂碼會出錯
    myPrint(b);
    myPrint(c);///請觀察印出來的值， 同時思考 (左手i、右手j)
    myPrint(d);
    int localInt;
    printf("globalInt: %d localInt%d\n",globalInt, localInt);
}

