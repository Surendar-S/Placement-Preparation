#include<stdio.h>
long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%ld",multiplyNumbers(n));
    return 0;
}
