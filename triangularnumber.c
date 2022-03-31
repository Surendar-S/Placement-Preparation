#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
        if(sum>n){
            printf("Not a Triangular Number");
            break;
        }
        else if(sum==n){
            printf("Triangular Number");
            break;
        }
        
    }
    return 0;
}
