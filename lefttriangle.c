/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n;i>=0;i--){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
