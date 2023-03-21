

#include<stdio.h>

int add(int iVal1, int iVal2)
{
    int iAns = 0;
    iAns = iVal1 + iVal2;
    return iAns;

}

int main()
{
    int No1 = 10, No2 = 11;
    int Ret = 0;

    Ret = add(No1,No2);

    printf("\n Answer is %d ", Ret);
    return 0;
}