/*input:12345 output:21435*/


#include <stdio.h>

int main()
{
    int n,temp,r=1,res = 0;
    scanf("%d",&n);
    temp = n;
    while(n!=0){
        n = n/10;
        r = r*10;
    }
    n=temp;
    while(n!=0){
        r = r/100;
        if(r<=1){
            r=1;
        }
        int temp1= n/r;
        while(temp1!=0){
            int a = temp1%10;
            res = res*10+a;
            temp1 = temp1/10;
        }
        n=n%r;
    }
    printf("%d",res);
    return 0;
}
