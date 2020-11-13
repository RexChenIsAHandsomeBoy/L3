#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Rone,Gone,Bone,Rtwo,Gtwo,Btwo;
    printf("請輸入六個整數並以空白區隔:\n");
    scanf("%d %d %d %d %d %d",&Rone,&Gone,&Bone,&Rtwo,&Gtwo,&Btwo);
    printf("-----------2*3矩陣如下-----------\n%d\t%d\t%d\t\n%d\t%d\t%d\t\n",Rone,Gone,Bone,Rtwo,Gtwo,Btwo);
    printf("-----------轉置矩陣如下-----------\n%d\t%d\t\n%d\t%d\t\n%d\t%d\t\n",Rone,Rtwo,Gone,Gtwo,Bone,Btwo);
    system("pause");
    return 0;
}
