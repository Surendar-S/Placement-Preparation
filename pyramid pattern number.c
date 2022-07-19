#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a=1;
    int b=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        b=a;
        for(int ch=1;ch<=i;ch++){
            printf("%d",b);
            b++;
        }
        b=b-2;
        for(int ch=i;ch<2*i-1;ch++){
            printf("%d",b);
            b--;
        }
        a++;
        printf("\n");
    }
}

/*
    1
   232
  34543
 4567654
567898765
*/
