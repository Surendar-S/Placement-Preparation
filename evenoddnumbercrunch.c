//input: 12345 output:24135

#include <stdio.h>

int main()
{
    int n,even=0,odd=0,p=1,p1=1;
    scanf("%d",&n);
    while(n!=0){
        int rem = n%10;
        if(rem%2==0){
            even = even+rem*p;
            p*=10;
        }
        else{
            odd = odd+rem*p1;
            p1*=10;
        }
        n=n/10;
    }
    printf("%d%d",even,odd);

    return 0;
}
