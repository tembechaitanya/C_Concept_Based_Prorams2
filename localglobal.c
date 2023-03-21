// local and global scope

#include<stdio.h>

int a = 10;

int app()
{
    int b = 20;

    printf("\n value of loacal variable %d ",b);
    printf("\n value of global variable %d ",a);

}

int main()
{
    printf("\n Inside main.. \n");
    app();
    return 0; 
}

