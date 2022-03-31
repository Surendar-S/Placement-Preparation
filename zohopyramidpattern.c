#include<stdio.h>
void main(){
    int n=5,l=1,k=0;
    for(int i=0;i<n;i++){
    
        for(int j=n-1;j>=i;j--){
            printf(" ");
        }
        for(int j=1;j<=l;j++){
            if(j<=l/2)
                printf("%d",k--);
            else
                printf("%d",k++);
        }
        l=l+2;
        printf("\n");
    }
}
