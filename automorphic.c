#include<stdio.h>
int automorphic(int n)
{
    int s=n*n;
    while (n>0)
    {
        if(n%10!=s%10)
        {
            return 0;
        }
        n=n/10;
        s=s/10;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(automorphic(n))
    {
        printf("Automorphic");
    }
    else
    {
        printf("Not Automorphic");
    }
    return 0;
}