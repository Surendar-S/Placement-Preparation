//input:1100 output:12
#include<stdio.h>
void main(){
    int n,decimal=0,base=1;
    scanf("%d",&n);
    printf("Entered binary number is: %d\n",n);
    while(n!=0){
        int rem = n%10;
        decimal = decimal + rem * base;
        n=n/10;
        base = base*2;
    }
    printf("%d",decimal);
}
