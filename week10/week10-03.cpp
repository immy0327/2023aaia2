#include <stdio.h>
///���Ѽƶi��
void myPrint(int a){
    for(int i=0; i<a; i++) printf("�P");
    printf("\n");
    ///�S��return,�S���ѼƥX�h
}

int main()
{///�D�n���{�� main()
    myPrint(5);
    myPrint(4);
    myPrint(3);
    myPrint(2);
    myPrint(1);
}