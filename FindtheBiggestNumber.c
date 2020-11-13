#include <stdio.h>
#include <stdlib.h>
int LgstSrchr(int n1,int n2,int n3)
{
    int lgst=0;
    if(n1>=n2){
        lgst=n1;
    }
    else{
        lgst=n2;
    }
    if(lgst<n3){
        lgst=n3;
    }
    return lgst;
}
int main()
{
    int a,b,c;
    printf("請輸入三個整數並以空白區隔:\n");
    scanf("%d %d %d",&a,&b,&c);
    int lgstnum;
    printf("最大值為:%d\n",LgstSrchr(a,b,c));
    system("pause");
    return 0;
}
