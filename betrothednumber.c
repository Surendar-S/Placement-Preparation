#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,sum1=0,sum2=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum1+=i;
        }
    }
    for(int i=1;i<b;i++){
        if(b%i==0){
            sum2+=i;
        }
    }
    if(sum1==b+1 || sum2==a+1){
        printf("Betrothed Number");
    }
    else{
        printf("Not a Betrothed Number");
    }
    return 0;
}
