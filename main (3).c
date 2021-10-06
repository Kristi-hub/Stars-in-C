/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for(int c=0; c<10;c++)
        printf("*");
    printf("\n*");
    for(int c=4; c>0;c--)
        printf(" ");
    printf("*");
    for(int c=3; c>0;c--)
        printf(" ");
    printf("*\n*");
    for(int c=3; c>0;c--)
        printf(" ");
    for(int c=0; c<3;c++)
        printf("*");
    for(int c=2; c>0;c--)
        printf(" ");
    printf("*\n*");
    for(int c=2; c>0;c--)
        printf(" ");
    for(int c=0; c<5;c++)
        printf("*");
    printf(" *\n");
    for(int i=2; i>0;i--)
    {
        for(int c=0; c<10;c++)
        printf("*");
    printf("\n");
    }
    
    
    return 0;
}

