#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NineTimesMultiplicationTable[2][9];
    for(int a=0;a<9;a++){
        NineTimesMultiplicationTable[0][a]=a+1;
        NineTimesMultiplicationTable[1][a]=a+1;
    }
    for(int i=0;i<9;i++){
        for(int r=0;r<9;r++){
            printf("%d\t",NineTimesMultiplicationTable[0][i]*NineTimesMultiplicationTable[1][r]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
