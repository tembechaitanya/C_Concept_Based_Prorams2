#include<stdio.h>




int main()
{
    int no = 11;

    int *p = &no;


    /*printf("\n %d ",no);
    printf("\n %d ",sizeof(no));
    printf("\n %p \n",&no);*/

    printf("\n address of 'no' variable is %p ", *p);

    return 0;
}